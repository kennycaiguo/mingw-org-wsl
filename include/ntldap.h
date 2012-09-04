/*
  ntldap.h - Header file for the Windows LDAP API Extensions

  Written by Filip Navara <xnavara@volny.cz>

  References:
    Lightweight Directory Access Protocol Reference
    http://msdn.microsoft.com/library/en-us/netdir/ldap/ldap_reference.asp

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#ifndef _NTLDAP_H
#define _NTLDAP_H
#pragma GCC system_header

#define LDAP_SERVER_ASQ_OID	"1.2.840.113556.1.4.1504"
#define LDAP_SERVER_ASQ_OID_W	L"1.2.840.113556.1.4.1504"
#define LDAP_SERVER_DIRSYNC_OID	"1.2.840.113556.1.4.841"
#define LDAP_SERVER_DIRSYNC_OID_W	L"1.2.840.113556.1.4.841"
#define LDAP_SERVER_SD_FLAGS_OID	"1.2.840.113556.1.4.801"
#define LDAP_SERVER_SD_FLAGS_OID_W	L"1.2.840.113556.1.4.801"
#define LDAP_SERVER_FAST_BIND_OID	"1.2.840.113556.1.4.1781"
#define LDAP_SERVER_FAST_BIND_OID_W	L"1.2.840.113556.1.4.1781"
#define LDAP_MATCHING_RULE_BIT_OR	"1.2.840.113556.1.4.804"
#define LDAP_MATCHING_RULE_BIT_OR_W	L"1.2.840.113556.1.4.804"
#define LDAP_MATCHING_RULE_BIT_AND	"1.2.840.113556.1.4.803"
#define LDAP_MATCHING_RULE_BIT_AND_W	L"1.2.840.113556.1.4.803"
#define LDAP_SERVER_EXTENDED_DN_OID	"1.2.840.113556.1.4.529"
#define LDAP_SERVER_EXTENDED_DN_OID_W	L"1.2.840.113556.1.4.529"
#define LDAP_SERVER_LAZY_COMMIT_OID	"1.2.840.113556.1.4.619"
#define LDAP_SERVER_LAZY_COMMIT_OID_W	L"1.2.840.113556.1.4.619"
#define LDAP_SERVER_TREE_DELETE_OID	"1.2.840.113556.1.4.805"
#define LDAP_SERVER_TREE_DELETE_OID_W	L"1.2.840.113556.1.4.805"
#define LDAP_SERVER_VERIFY_NAME_OID	"1.2.840.113556.1.4.1338"
#define LDAP_SERVER_VERIFY_NAME_OID_W	L"1.2.840.113556.1.4.1338"
#define LDAP_SERVER_SHOW_DELETED_OID	"1.2.840.113556.1.4.417"
#define LDAP_SERVER_SHOW_DELETED_OID_W	L"1.2.840.113556.1.4.417"
#define LDAP_SERVER_NOTIFICATION_OID	"1.2.840.113556.1.4.528"
#define LDAP_SERVER_NOTIFICATION_OID_W	L"1.2.840.113556.1.4.528"
#define LDAP_SERVER_DOMAIN_SCOPE_OID	"1.2.840.113556.1.4.1339"
#define LDAP_SERVER_DOMAIN_SCOPE_OID_W	L"1.2.840.113556.1.4.1339"
#define LDAP_CAP_ACTIVE_DIRECTORY_OID	"1.2.840.113556.1.4.800"
#define LDAP_CAP_ACTIVE_DIRECTORY_OID_W	L"1.2.840.113556.1.4.800"
#define LDAP_SERVER_SEARCH_OPTIONS_OID	"1.2.840.113556.1.4.1340"
#define LDAP_SERVER_SEARCH_OPTIONS_OID_W	L"1.2.840.113556.1.4.1340"
#define LDAP_CAP_ACTIVE_DIRECTORY_V51_OID	"1.2.840.113556.1.4.1670"
#define LDAP_CAP_ACTIVE_DIRECTORY_V51_OID_W	L"1.2.840.113556.1.4.1670"
#define LDAP_SERVER_PERMISSIVE_MODIFY_OID	"1.2.840.113556.1.4.1413"
#define LDAP_SERVER_PERMISSIVE_MODIFY_OID_W	L"1.2.840.113556.1.4.1413"
#define LDAP_SERVER_CROSSDOM_MOVE_TARGET_OID	"1.2.840.113556.1.4.521"
#define LDAP_SERVER_CROSSDOM_MOVE_TARGET_OID_W	L"1.2.840.113556.1.4.521"
#define SERVER_SEARCH_FLAG_DOMAIN_SCOPE	1
#define SERVER_SEARCH_FLAG_PHANTOM_ROOT	2

#endif /*  _NTLDAP_H */