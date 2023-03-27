#include <mariadb/mysql.h>
#include "llapi/db/impl/mysql/Session.h"
#include "llapi/db/impl/mysql/Stmt.h"
#include "llapi/LoggerAPI.h"
#define OK 0

namespace DB {

MySQLSession::MySQLSession() {
    IF_ENDBG dbLogger.info("MySQLSession::MySQLSession: Constructed! this: {}", (void*)this);
    conn = mysql_init(nullptr);
}
MySQLSession::MySQLSession(const ConnParams& params) {
    IF_ENDBG dbLogger.info("MySQLSession::MySQLSession: Constructed! this: {}", (void*)this);
    conn = mysql_init(nullptr);
    open(params);
}

MySQLSession::~MySQLSession() {
    IF_ENDBG dbLogger.info("MySQLSession::MySQLSession: Destructor: this: {}", (void*)this);
    close();
}

void MySQLSession::setSSL(const ConnParams& params) {
    auto p = params;
    auto key = p.get<std::string>({"sslkey", "ssl_key", "ssl-key"});             // Private key path
    auto cert = p.get<std::string>({"sslcert", "ssl_cert", "ssl-cert"});         // Public certificate path
    auto ca = p.get<std::string>({"sslca", "ssl_ca", "ssl-ca"});                 // Certificate authority path
    auto capath = p.get<std::string>({"sslcapath", "ssl_capath", "ssl-capath"}); // Certificate authority directory
    auto cipher = p.get<std::string>({"sslcipher", "ssl_cipher", "ssl-cipher"}); // List of ciphers to use
    if (key.empty() || cert.empty()) {
        return;
    }
    mysql_ssl_set(conn, key.c_str(), cert.c_str(),
                  (ca.empty() ? nullptr : ca.c_str()),
                  (capath.empty() ? nullptr : capath.c_str()),
                  (cipher.empty() ? nullptr : cipher.c_str())); // Always returns 0
}

void MySQLSession::open(const ConnParams& params) {
    auto p = params;
    unsigned long flags = 0;
    uint16_t port = 0;
    if ((port = p.getPort()) == 0) {
        port = 3306;
    }
    std::string db = p.getDatabase();
    if (p.get({"compress"}, true, false)) {
        flags |= CLIENT_COMPRESS;
    }
    if (p.get({"ssl", "ssl_mode", "sslmode", "ssl-mode"}, true, false)) {
        flags |= CLIENT_SSL;
        setSSL(p);
    }
    // auto defaultCharset = mysql_character_set_name(conn);
    auto charset = p.get<std::string>({"charset", "char_set", "characterset", "character_set", "charsetname",
                                       "char_set_name", "charactersetname", "character_set_name"},
                                      "true",
                                      "utf8");
    // IF_ENDBG dbLogger.debug("MySQLSession::open: MySQL default charset name: {}", defaultCharset);
    mysql_options(conn, MYSQL_SET_CHARSET_NAME, charset.c_str());
    auto res = mysql_real_connect(conn, p.getHost().c_str(), p.getUsername().c_str(), p.getPassword().c_str(),
                                  (db.empty() ? nullptr : db.c_str()), port, nullptr, 0);
    if (!res) {
        throw std::runtime_error("MySQLSession::MySQLSession: Failed to open database: " + std::string(mysql_error(conn)));
    }
    IF_ENDBG dbLogger.debug("MySQLSession::open: Opened database: " + std::string(p.getHost()) + ":" + std::to_string(port) + "/" + db);
#if defined(LLDB_DEBUG_MODE)
    mysql_dump_debug_info(conn);
#endif
}

bool MySQLSession::execute(const std::string& query) {
    IF_ENDBG dbLogger.debug("MySQLSession::execute: Executing > " + query);
    auto res = mysql_query(conn, query.c_str());
    return res == OK;
}

bool MySQLSession::relogin(const std::string& user, const std::string& password, const std::string& db) {
    IF_ENDBG dbLogger.debug("MySQLSession::change: Changing user to {} and database to {}", user, db);
    auto res = mysql_change_user(conn, user.c_str(), password.c_str(), (db.empty() ? nullptr : db.c_str()));
    return res == OK;
}

Session& MySQLSession::query(const std::string& query, std::function<bool(const Row&)> callback) {
    IF_ENDBG dbLogger.debug("MySQLSession::query: Querying > " + query);
    auto res = mysql_query(conn, query.c_str());
    if (res != OK) {
        throw std::runtime_error("MySQLSession::query: Failed to query database: " + std::string(mysql_error(conn)));
    }
    auto result = mysql_store_result(conn);
    if (!result) {
        // throw std::runtime_error("MySQLSession::query: Failed to store result: " + std::string(mysql_error(conn)));
        return *this; // No result set
    }
    auto numFields = mysql_num_fields(result);
    auto numRows = mysql_num_rows(result);
    auto fields = mysql_fetch_fields(result);
    IF_ENDBG dbLogger.debug("MySQLSession::query: Query returned {} rows and {} fields", numRows, numFields);
    // Fetch column names
    RowHeader header;
    for (unsigned int i = 0; i < numFields; i++)
        header.add(std::string(fields[i].name, fields[i].name_length));
    // Fetch rows
    while (auto row = mysql_fetch_row(result)) {
        Row r(header);
        for (unsigned int i = 0; i < numFields; i++) {
            auto type = fields[i].type;
            switch (type) {
                case MYSQL_TYPE_TINY:
                case MYSQL_TYPE_SHORT:
                case MYSQL_TYPE_LONG:
                case MYSQL_TYPE_LONGLONG:
                case MYSQL_TYPE_INT24:
                case MYSQL_TYPE_YEAR:
                    if (fields[i].flags & UNSIGNED_FLAG)
                        r.push_back(std::stoull(row[i]));
                    else
                        r.push_back(std::stoll(row[i]));
                    break;
                case MYSQL_TYPE_FLOAT:
                    r.push_back(std::stof(row[i]));
                    break;
                case MYSQL_TYPE_DOUBLE:
                    r.push_back(std::stod(row[i]));
                    break;
                case MYSQL_TYPE_BIT: {
                    uint64_t val = 0;
                    auto len = fields[i].length;
                    for (unsigned int j = 0; j < len; j++) {
                        if (row[i][j] == '1')
                            val |= (1ULL << j);
                    }
                    r.push_back(val);
                    break;
                }
                case MYSQL_TYPE_STRING:
                case MYSQL_TYPE_VAR_STRING:
                case MYSQL_TYPE_ENUM:
                case MYSQL_TYPE_SET:
                case MYSQL_TYPE_VARCHAR:
                case MYSQL_TYPE_JSON:
                    r.push_back(std::string(row[i]));
                    break;
                case MYSQL_TYPE_DECIMAL:
                case MYSQL_TYPE_NEWDECIMAL: {
                    r.push_back(Any());
                    // TODO: Decimal
                    break;
                }
                case MYSQL_TYPE_TINY_BLOB:
                case MYSQL_TYPE_MEDIUM_BLOB:
                case MYSQL_TYPE_LONG_BLOB:
                case MYSQL_TYPE_BLOB:
                    r.push_back(ByteArray(row[i], row[i] + strlen(row[i])));
                    break;
                case MYSQL_TYPE_GEOMETRY:
                default:
                    r.push_back(Any());
                    break;
            }
        }
        if (!callback(r)) {
            break;
        }
    }
    return *this;
}

SharedPointer<Stmt> MySQLSession::prepare(const std::string& query, bool autoExecute) {
    auto stmt = MySQLStmt::create(getOrSetSelf(), query, autoExecute);
    stmtPool.push_back(stmt);
    return stmt;
}

std::string MySQLSession::getLastError() const {
    return std::string(mysql_error(conn));
}

uint64_t MySQLSession::getAffectedRows() const {
    return mysql_affected_rows(conn);
}

uint64_t MySQLSession::getLastInsertId() const {
    return mysql_insert_id(conn);
}

void MySQLSession::close() {
    if (conn) {
        mysql_close(conn);
        conn = nullptr;
        IF_ENDBG dbLogger.debug("MySQLSession::close: Closed database");
    }
}

bool MySQLSession::isOpen() {
    return mysql_ping(conn) == OK;
}

DBType MySQLSession::getType() {
    return DBType::MySQL;
}

SharedPointer<Stmt> MySQLSession::operator<<(const std::string& query) {
    return prepare(query, true);
}

} // namespace DB