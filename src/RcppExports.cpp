// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// connect
List connect(std::string host, int port, std::string username, std::string passwd, std::string db_name);
RcppExport SEXP _ROmniSci_connect(SEXP hostSEXP, SEXP portSEXP, SEXP usernameSEXP, SEXP passwdSEXP, SEXP db_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    Rcpp::traits::input_parameter< std::string >::type username(usernameSEXP);
    Rcpp::traits::input_parameter< std::string >::type passwd(passwdSEXP);
    Rcpp::traits::input_parameter< std::string >::type db_name(db_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(connect(host, port, username, passwd, db_name));
    return rcpp_result_gen;
END_RCPP
}
// disconnect
void disconnect(List conn);
RcppExport SEXP _ROmniSci_disconnect(SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type conn(connSEXP);
    disconnect(conn);
    return R_NilValue;
END_RCPP
}
// get_table_details
List get_table_details(List conn, std::string table_name);
RcppExport SEXP _ROmniSci_get_table_details(SEXP connSEXP, SEXP table_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type conn(connSEXP);
    Rcpp::traits::input_parameter< std::string >::type table_name(table_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_table_details(conn, table_name));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ROmniSci_connect", (DL_FUNC) &_ROmniSci_connect, 5},
    {"_ROmniSci_disconnect", (DL_FUNC) &_ROmniSci_disconnect, 1},
    {"_ROmniSci_get_table_details", (DL_FUNC) &_ROmniSci_get_table_details, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ROmniSci(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
