# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' @title THRIFT: Connect to an OmniSci database
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @param host host
#' @param port port
#' @param username username
#' @param password password
#' @param dbname dbname
#' 
#' @return List
#' @export
#' @examples
#' \dontrun{
#'   
#'   conn <- connect("localhost", 6274, "admin", "HyperInteractive", "omnisci")
#'   
#' }
connect_binary <- function(host, port, username, password, dbname) {
    .Call('_ROmniSci_connect_binary', PACKAGE = 'ROmniSci', host, port, username, password, dbname)
}

#' @title THRIFT: Disconnect from an OmniSci database
#'
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return Nothing
#' @export
#' @examples
#' \dontrun{
#'   
#'   disconnect(conn)
#'   
#' }
disconnect <- function(conn) {
    invisible(.Call('_ROmniSci_disconnect', PACKAGE = 'ROmniSci', conn))
}

#' @title THRIFT: Get details of the specified database table
#'
#' @param conn conn
#' @param table_name table_name
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List (TTableDetails)
#' @export
#' @examples
#' \dontrun{
#' 
#' tbl_details <- get_table_details(conn, "omnisci_states")
#' 
#' } 
get_table_details <- function(conn, table_name) {
    .Call('_ROmniSci_get_table_details', PACKAGE = 'ROmniSci', conn, table_name)
}

#' @title THRIFT: Get status of OmniSci server
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List (TServerStatus)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gss <- get_server_status(conn)
#' 
#' } 
get_server_status <- function(conn) {
    .Call('_ROmniSci_get_server_status', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get status of OmniSci server
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List (TServerStatus)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gs <- get_status(conn)
#' 
#' } 
get_status <- function(conn) {
    .Call('_ROmniSci_get_status', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get version of OmniSci server
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return Character
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gv <- get_version(conn)
#' 
#' } 
get_version <- function(conn) {
    .Call('_ROmniSci_get_version', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get tables in current database
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(Character)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gt <- get_tables(conn)
#' 
#' } 
get_tables <- function(conn) {
    .Call('_ROmniSci_get_tables', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get users in current database
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(Character)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gu <- get_users(conn)
#' 
#' } 
get_users <- function(conn) {
    .Call('_ROmniSci_get_users', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get physical tables in current database
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(Character)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gpt <- get_physical_tables(conn)
#' 
#' } 
get_physical_tables <- function(conn) {
    .Call('_ROmniSci_get_physical_tables', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get views in current database
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(Character)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gvs <- get_views(conn)
#' 
#' } 
get_views <- function(conn) {
    .Call('_ROmniSci_get_views', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get session information
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(TSessionInfo)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gsi <- get_session_info(conn)
#' 
#' } 
get_session_info <- function(conn) {
    .Call('_ROmniSci_get_session_info', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get databases list
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(TDBInfo)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gdb <- get_databases(conn)
#' 
#' } 
get_databases <- function(conn) {
    .Call('_ROmniSci_get_databases', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get hardware info
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(TClusterHardwareInfo)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' ghi <- get_hardware_info(conn)
#' 
#' } 
get_hardware_info <- function(conn) {
    .Call('_ROmniSci_get_hardware_info', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Get metadata of tables in current database
#' 
#' @param conn conn
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(TTableMeta)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' gtm <- get_tables_meta(conn)
#' 
#' } 
get_tables_meta <- function(conn) {
    .Call('_ROmniSci_get_tables_meta', PACKAGE = 'ROmniSci', conn)
}

#' @title THRIFT: Switch current database
#' 
#' @param conn conn
#' @param dbname dbname
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return Nothing
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' switch_database(conn, "database2")
#' 
#' } 
switch_database <- function(conn, dbname) {
    invisible(.Call('_ROmniSci_switch_database', PACKAGE = 'ROmniSci', conn, dbname))
}

#' @title THRIFT: Execute SQL statement
#' 
#' @param conn conn
#' @param query query
#' @param first_n first_n
#' @param at_most_n at_most_n
#' 
#' @details TBD Details
#' 
#' @description TBD description
#' 
#' @return List(TQueryResult)
#' 
#' @export
#' @examples
#' \dontrun{
#' 
#' result <- sql_execute(conn, "select * from omnisci_states")
#' 
#' } 
sql_execute <- function(conn, query, first_n = -1L, at_most_n = -1L) {
    .Call('_ROmniSci_sql_execute', PACKAGE = 'ROmniSci', conn, query, first_n, at_most_n)
}

