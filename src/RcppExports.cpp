// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// vectorizedMedian
NumericVector vectorizedMedian(NumericVector x, int chunkSize);
RcppExport SEXP baseEncored_vectorizedMedian(SEXP xSEXP, SEXP chunkSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type chunkSize(chunkSizeSEXP);
    __result = Rcpp::wrap(vectorizedMedian(x, chunkSize));
    return __result;
END_RCPP
}
