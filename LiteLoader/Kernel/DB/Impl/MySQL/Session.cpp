#include <third-party/mysql/mysql.h>
#include <DB/Impl/MySQL/Session.h>
#include <LoggerAPI.h>
#define OK 0

namespace DB
{

MySQLSession::MySQLSession()
{
    conn = mysql_init(nullptr);
}
MySQLSession::MySQLSession(const ConnParams& params)
{
    conn = mysql_init(nullptr);
    open(params);
}

MySQLSession::~MySQLSession()
{
    if (isOpen())
    {
        close();
    }
}

void MySQLSession::setSSL(const ConnParams& params)
{
    auto p = params;
    auto key = p.get<std::string>({"sslkey", "ssl_key", "ssl-key"}); // Private key path
    auto cert = p.get<std::string>({"sslcert", "ssl_cert", "ssl-cert"}); // Public certificate path
    auto ca = p.get<std::string>({"sslca", "ssl_ca", "ssl-ca"}); // Certificate authority path
    auto capath = p.get<std::string>({"sslcapath", "ssl_capath", "ssl-capath"}); // Certificate authority directory
    auto cipher = p.get<std::string>({"sslcipher", "ssl_cipher", "ssl-cipher"}); // List of ciphers to use
    if (key.empty() || cert.empty())
    {
        return;
    }
    mysql_ssl_set(conn, key.c_str(), cert.c_str(),
                 (ca.empty() ? nullptr : ca.c_str()),
                 (capath.empty() ? nullptr : capath.c_str()),
                 (cipher.empty() ? nullptr : cipher.c_str())); // Always returns 0
}

void MySQLSession::open(const ConnParams& params)
{
    auto p = params;
    unsigned long flags = 0;
    uint16_t port = 0;
    if ((port = p.getPort()) == 0)
    {
        port = 3306;
    }
    std::string db = p.getDatabase();
    if (p.get({"compress"}, true, false))
    {
        flags |= CLIENT_COMPRESS;
    }
    if (p.get({"ssl", "ssl_mode", "sslmode", "ssl-mode"}, true, false))
    {
        flags |= CLIENT_SSL;
        setSSL(p);
    }
    auto charset = p.get<std::string>({"charset", "char_set", "characterset", "character_set", "charsetname",
                                      "char_set_name", "charactersetname", "character_set_name"}, "true",
                                      mysql_character_set_name(conn));
    mysql_options(conn, MYSQL_SET_CHARSET_NAME, charset.c_str());
    auto res = mysql_real_connect(conn, p.getHost().c_str(), p.getUsername().c_str(), p.getPassword().c_str(), 
                                  (db.empty() ? nullptr : db.c_str()), port, nullptr, 0);
    if (!res)
    {
        throw std::runtime_error("MySQLSession::MySQLSession: Failed to open database: " + std::string(mysql_error(conn)));
    }
    IF_ENDBG dbLogger.debug("MySQLSession::open: Opened database: " + std::string(p.getHost()) + ":" + std::to_string(port) + "/" + db);
}

bool MySQLSession::execute(const std::string& query)
{
    IF_ENDBG dbLogger.debug("MySQLSession::execute: Executing > " + query);
    auto res = mysql_query(conn, query.c_str());
    return res == OK;
}

bool MySQLSession::change(const std::string& user, const std::string& password, const std::string& db)
{
    IF_ENDBG dbLogger.debug("MySQLSession::change: Changing user to {} and database to {}", user, db);
    auto res = mysql_change_user(conn, user.c_str(), password.c_str(), (db.empty() ? nullptr : db.c_str()));
    return res == OK;
}

void MySQLSession::query(const std::string& query, std::function<bool(const Row&)> callback)
{

}

Stmt& MySQLSession::prepare(const std::string& query)
{
    
}

std::string MySQLSession::getLastError() const
{
    return std::string(mysql_error(conn));
}

uint64_t MySQLSession::getAffectedRows() const
{
    return mysql_affected_rows(conn);
}

uint64_t MySQLSession::getLastInsertId() const
{
    return mysql_insert_id(conn);
}

void MySQLSession::close()
{
    if (conn)
    {
        mysql_close(conn);
        conn = nullptr;
        IF_ENDBG dbLogger.debug("MySQLSession::close: Closed database");
    }
}

bool MySQLSession::isOpen()
{
    return mysql_ping(conn) == OK;
}

DBType MySQLSession::getType()
{
    return DBType::MySQL;
}

Stmt& MySQLSession::operator<<(const std::string& query)
{
    return prepare(query);
}

} // namespace DB