// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/BGVAR.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// BVAR_linear
List BVAR_linear(const SEXP Y_in, const SEXP W_in, const SEXP p_in, const SEXP draws_in, const SEXP burnin_in, const SEXP cons_in, const SEXP trend_in, const SEXP sv_in, const SEXP thin_in, const SEXP prior_in, const SEXP hyperparam_in, const SEXP Ex_in);
static SEXP _BGVAR_BVAR_linear_try(SEXP Y_inSEXP, SEXP W_inSEXP, SEXP p_inSEXP, SEXP draws_inSEXP, SEXP burnin_inSEXP, SEXP cons_inSEXP, SEXP trend_inSEXP, SEXP sv_inSEXP, SEXP thin_inSEXP, SEXP prior_inSEXP, SEXP hyperparam_inSEXP, SEXP Ex_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const SEXP >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type W_in(W_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type p_in(p_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type draws_in(draws_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type burnin_in(burnin_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type cons_in(cons_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type trend_in(trend_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type sv_in(sv_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type thin_in(thin_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type prior_in(prior_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type hyperparam_in(hyperparam_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type Ex_in(Ex_inSEXP);
    rcpp_result_gen = Rcpp::wrap(BVAR_linear(Y_in, W_in, p_in, draws_in, burnin_in, cons_in, trend_in, sv_in, thin_in, prior_in, hyperparam_in, Ex_in));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BGVAR_BVAR_linear(SEXP Y_inSEXP, SEXP W_inSEXP, SEXP p_inSEXP, SEXP draws_inSEXP, SEXP burnin_inSEXP, SEXP cons_inSEXP, SEXP trend_inSEXP, SEXP sv_inSEXP, SEXP thin_inSEXP, SEXP prior_inSEXP, SEXP hyperparam_inSEXP, SEXP Ex_inSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BGVAR_BVAR_linear_try(Y_inSEXP, W_inSEXP, p_inSEXP, draws_inSEXP, burnin_inSEXP, cons_inSEXP, trend_inSEXP, sv_inSEXP, thin_inSEXP, prior_inSEXP, hyperparam_inSEXP, Ex_inSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// do_rgig1
double do_rgig1(double lambda, double chi, double psi);
RcppExport SEXP _BGVAR_do_rgig1(SEXP lambdaSEXP, SEXP chiSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type chi(chiSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(do_rgig1(lambda, chi, psi));
    return rcpp_result_gen;
END_RCPP
}
// gvar_stacking
List gvar_stacking(const SEXP xglobal_in, const SEXP plag_in, const SEXP globalpost_in, const SEXP draws_in, const SEXP thin_in, const SEXP trend_in, const SEXP eigen_in, const SEXP verbose_in);
RcppExport SEXP _BGVAR_gvar_stacking(SEXP xglobal_inSEXP, SEXP plag_inSEXP, SEXP globalpost_inSEXP, SEXP draws_inSEXP, SEXP thin_inSEXP, SEXP trend_inSEXP, SEXP eigen_inSEXP, SEXP verbose_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type xglobal_in(xglobal_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type plag_in(plag_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type globalpost_in(globalpost_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type draws_in(draws_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type thin_in(thin_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type trend_in(trend_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type eigen_in(eigen_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type verbose_in(verbose_inSEXP);
    rcpp_result_gen = Rcpp::wrap(gvar_stacking(xglobal_in, plag_in, globalpost_in, draws_in, thin_in, trend_in, eigen_in, verbose_in));
    return rcpp_result_gen;
END_RCPP
}
// globalLik
List globalLik(const SEXP Y_in, const SEXP X_in, const arma::cube A_in, const arma::cube S_in, const arma::cube Ginv_in, const SEXP thindraws_in);
RcppExport SEXP _BGVAR_globalLik(SEXP Y_inSEXP, SEXP X_inSEXP, SEXP A_inSEXP, SEXP S_inSEXP, SEXP Ginv_inSEXP, SEXP thindraws_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type X_in(X_inSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type A_in(A_inSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type S_in(S_inSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type Ginv_in(Ginv_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type thindraws_in(thindraws_inSEXP);
    rcpp_result_gen = Rcpp::wrap(globalLik(Y_in, X_in, A_in, S_in, Ginv_in, thindraws_in));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma_fast
arma::vec dmvnrm_arma_fast(const arma::mat& x, const arma::mat& mean, const arma::mat& sigma, bool const logd);
RcppExport SEXP _BGVAR_dmvnrm_arma_fast(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_fast(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// compute_irf_parallel
List compute_irf_parallel(arma::cube A_large, arma::cube S_large, arma::cube Ginv_large, const int type, const int nhor, const int thindraws, const SEXP shocklist_in);
RcppExport SEXP _BGVAR_compute_irf_parallel(SEXP A_largeSEXP, SEXP S_largeSEXP, SEXP Ginv_largeSEXP, SEXP typeSEXP, SEXP nhorSEXP, SEXP thindrawsSEXP, SEXP shocklist_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type A_large(A_largeSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type S_large(S_largeSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Ginv_large(Ginv_largeSEXP);
    Rcpp::traits::input_parameter< const int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const int >::type nhor(nhorSEXP);
    Rcpp::traits::input_parameter< const int >::type thindraws(thindrawsSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type shocklist_in(shocklist_inSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_irf_parallel(A_large, S_large, Ginv_large, type, nhor, thindraws, shocklist_in));
    return rcpp_result_gen;
END_RCPP
}
// compute_irf
List compute_irf(arma::cube A_large, arma::cube S_large, arma::cube Ginv_large, const int type, const int nhor, const int thindraws, const SEXP shocklist_in);
RcppExport SEXP _BGVAR_compute_irf(SEXP A_largeSEXP, SEXP S_largeSEXP, SEXP Ginv_largeSEXP, SEXP typeSEXP, SEXP nhorSEXP, SEXP thindrawsSEXP, SEXP shocklist_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type A_large(A_largeSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type S_large(S_largeSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Ginv_large(Ginv_largeSEXP);
    Rcpp::traits::input_parameter< const int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const int >::type nhor(nhorSEXP);
    Rcpp::traits::input_parameter< const int >::type thindraws(thindrawsSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type shocklist_in(shocklist_inSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_irf(A_large, S_large, Ginv_large, type, nhor, thindraws, shocklist_in));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _BGVAR_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("List(*BVAR_linear)(const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP,const SEXP)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _BGVAR_RcppExport_registerCCallable() { 
    R_RegisterCCallable("BGVAR", "_BGVAR_BVAR_linear", (DL_FUNC)_BGVAR_BVAR_linear_try);
    R_RegisterCCallable("BGVAR", "_BGVAR_RcppExport_validate", (DL_FUNC)_BGVAR_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_BGVAR_BVAR_linear", (DL_FUNC) &_BGVAR_BVAR_linear, 12},
    {"_BGVAR_do_rgig1", (DL_FUNC) &_BGVAR_do_rgig1, 3},
    {"_BGVAR_gvar_stacking", (DL_FUNC) &_BGVAR_gvar_stacking, 8},
    {"_BGVAR_globalLik", (DL_FUNC) &_BGVAR_globalLik, 6},
    {"_BGVAR_dmvnrm_arma_fast", (DL_FUNC) &_BGVAR_dmvnrm_arma_fast, 4},
    {"_BGVAR_compute_irf_parallel", (DL_FUNC) &_BGVAR_compute_irf_parallel, 7},
    {"_BGVAR_compute_irf", (DL_FUNC) &_BGVAR_compute_irf, 7},
    {"_BGVAR_RcppExport_registerCCallable", (DL_FUNC) &_BGVAR_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_BGVAR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
