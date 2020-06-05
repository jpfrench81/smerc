// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// scsg2_cpp
std::list<std::list<std::vector<bool>>> scsg2_cpp(List nn, IntegerMatrix w, IntegerVector idx, unsigned int nlevel, NumericVector lprimes, bool verbose);
RcppExport SEXP _smerc_scsg2_cpp(SEXP nnSEXP, SEXP wSEXP, SEXP idxSEXP, SEXP nlevelSEXP, SEXP lprimesSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type w(wSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevel(nlevelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lprimes(lprimesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(scsg2_cpp(nn, w, idx, nlevel, lprimes, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_smerc_scsg2_cpp", (DL_FUNC) &_smerc_scsg2_cpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_smerc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}