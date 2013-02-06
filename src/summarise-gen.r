# Generate template specialisations for groupwise - these are the functions
# that are called from R.

# groups and summaries are defined in summarise.r
source("../R/summarise.r")

combs <- expand.grid(group = names(groups), summary = names(summaries))

cpp_fun <- function(summary, group) {
  vars <- if (grepl("2d", group)) c("x", "y") else "x"

  name <- paste("summarise", tolower(summary), tolower(group), sep = "_")

  g_vars <- groups[[group]]
  g_args <- paste(g_vars, names(g_vars), collapse = ", ")
  s_args <- paste("const NumericVector&", c(vars, "z", "weight"), collapse = ", ")
  args <- paste(s_args, ", ", g_args, sep = "")

  body <- paste("return summarise(z, weight, ",
    "Group", group, "(", paste(c(vars, names(g_vars)), collapse = ", "), "), ",
    "Summary", summaries[[summary]], ");", sep = "")

  paste("// [[Rcpp::export]]\n",
    "NumericVector ", name, "(", args, ") {\n",
    "  ", body, "\n}\n\n", sep = "")
}


groupwise <- readLines("summarise.cpp")
split <- which(grepl("// -{40,}", groupwise))[1]
original <- groupwise[1:split]

writeLines(original, "summarise.cpp")

cat("// Autogenerated by summarise-gen.r\n", file = "summarise.cpp", append = TRUE)
funs <- mapply(cpp_fun, combs$summary, combs$group)
cat(funs, file = "summarise.cpp", append = TRUE, sep = "")
