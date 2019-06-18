// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fastdist
NumericMatrix fastdist(const NumericMatrix& x);
RcppExport SEXP _multivariance_fastdist(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fastdist(x));
    return rcpp_result_gen;
END_RCPP
}
// doubleCenterSymMat
NumericMatrix doubleCenterSymMat(const NumericMatrix& x, bool& normalize);
RcppExport SEXP _multivariance_doubleCenterSymMat(SEXP xSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool& >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(doubleCenterSymMat(x, normalize));
    return rcpp_result_gen;
END_RCPP
}
// fastEuclideanCdm
NumericMatrix fastEuclideanCdm(const NumericMatrix& x, bool& normalize);
RcppExport SEXP _multivariance_fastEuclideanCdm(SEXP xSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool& >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fastEuclideanCdm(x, normalize));
    return rcpp_result_gen;
END_RCPP
}
// match_rows
NumericVector match_rows(NumericMatrix& A, NumericMatrix& B);
RcppExport SEXP _multivariance_match_rows(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(match_rows(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_multivariance_fastdist", (DL_FUNC) &_multivariance_fastdist, 1},
    {"_multivariance_doubleCenterSymMat", (DL_FUNC) &_multivariance_doubleCenterSymMat, 2},
    {"_multivariance_fastEuclideanCdm", (DL_FUNC) &_multivariance_fastEuclideanCdm, 2},
    {"_multivariance_match_rows", (DL_FUNC) &_multivariance_match_rows, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_multivariance(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
