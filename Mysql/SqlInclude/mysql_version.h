/* Copyright Abandoned 1996,1999 TCX DataKonsult AB & Monty Program KB
   & Detron HB, 1996, 1999-2004, 2007 MySQL AB.
   This file is public domain and comes with NO WARRANTY of any kind
*/

/* Version numbers for protocol & mysqld */

#ifndef _mysql_version_h
#define _mysql_version_h

#define PROTOCOL_VERSION            10
#define MYSQL_SERVER_VERSION       "8.0.41"
#define MYSQL_BASE_VERSION         "mysqld-8.0"
#define MYSQL_SERVER_SUFFIX_DEF    "-0ubuntu0.24.10.1"
#define MYSQL_VERSION_ID            80041
#define MYSQL_VERSION_STABILITY     "LTS"
#define MYSQL_PORT                  3306
#define MYSQL_ADMIN_PORT            33062
#define MYSQL_PORT_DEFAULT          0
#define MYSQL_UNIX_ADDR            "/var/run/mysqld/mysqld.sock"
#define MYSQL_CONFIG_NAME          "my"
#define MYSQL_PERSIST_CONFIG_NAME  "mysqld-auto"
#define MYSQL_COMPILATION_COMMENT  "(Ubuntu)"
#define MYSQL_COMPILATION_COMMENT_SERVER  "(Ubuntu)"
#define LIBMYSQL_VERSION           "8.0.41"
#define LIBMYSQL_VERSION_ID         80041

#ifndef LICENSE
#define LICENSE                     GPL
#endif /* LICENSE */

#endif /* _mysql_version_h */
