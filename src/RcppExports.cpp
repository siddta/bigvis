// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convolve_1d
NumericVector convolve_1d(NumericVector x, NumericVector kernel);
RcppExport SEXP bigvis_convolve_1d(SEXP xSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector kernel = Rcpp::as<NumericVector >(kernelSEXP);
    NumericVector __result = convolve_1d(x, kernel);
    return Rcpp::wrap(__result);
END_RCPP
}
// convolver_1d
NumericVector convolver_1d(NumericVector x, NumericVector kernel);
RcppExport SEXP bigvis_convolver_1d(SEXP xSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector kernel = Rcpp::as<NumericVector >(kernelSEXP);
    NumericVector __result = convolver_1d(x, kernel);
    return Rcpp::wrap(__result);
END_RCPP
}
// convolve_2d
NumericMatrix convolve_2d(NumericMatrix sample, NumericMatrix kernel);
RcppExport SEXP bigvis_convolve_2d(SEXP sampleSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix sample = Rcpp::as<NumericMatrix >(sampleSEXP);
    NumericMatrix kernel = Rcpp::as<NumericMatrix >(kernelSEXP);
    NumericMatrix __result = convolve_2d(sample, kernel);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_sum_breaks
NumericVector compute_sum_breaks(const NumericVector& x, const NumericVector& y, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_compute_sum_breaks(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = compute_sum_breaks(x, y, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_sum_fixed
NumericVector compute_sum_fixed(const NumericVector& x, const NumericVector& y, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_compute_sum_fixed(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = compute_sum_fixed(x, y, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_mean_breaks
NumericVector compute_mean_breaks(const NumericVector& x, const NumericVector& y, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_compute_mean_breaks(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = compute_mean_breaks(x, y, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_mean_fixed
NumericVector compute_mean_fixed(const NumericVector& x, const NumericVector& y, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_compute_mean_fixed(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = compute_mean_fixed(x, y, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_median_breaks
NumericVector compute_median_breaks(const NumericVector& x, const NumericVector& y, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_compute_median_breaks(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = compute_median_breaks(x, y, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_median_fixed
NumericVector compute_median_fixed(const NumericVector& x, const NumericVector& y, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_compute_median_fixed(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = compute_median_fixed(x, y, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_sd_breaks
NumericVector compute_sd_breaks(const NumericVector& x, const NumericVector& y, const NumericVector& weight, NumericVector& breaks);
RcppExport SEXP bigvis_compute_sd_breaks(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    NumericVector breaks = Rcpp::as<NumericVector >(breaksSEXP);
    NumericVector __result = compute_sd_breaks(x, y, weight, breaks);
    return Rcpp::wrap(__result);
END_RCPP
}
// compute_sd_fixed
NumericVector compute_sd_fixed(const NumericVector& x, const NumericVector& y, const NumericVector& weight, double width, double origin);
RcppExport SEXP bigvis_compute_sd_fixed(SEXP xSEXP, SEXP ySEXP, SEXP weightSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector x = Rcpp::as<NumericVector >(xSEXP);
    NumericVector y = Rcpp::as<NumericVector >(ySEXP);
    NumericVector weight = Rcpp::as<NumericVector >(weightSEXP);
    double width = Rcpp::as<double >(widthSEXP);
    double origin = Rcpp::as<double >(originSEXP);
    NumericVector __result = compute_sd_fixed(x, y, weight, width, origin);
    return Rcpp::wrap(__result);
END_RCPP
}