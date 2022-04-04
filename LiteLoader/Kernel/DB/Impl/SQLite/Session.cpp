#include <DB/Impl/SQLite/Session.h>
#include <third-party/sqlite3/sqlite3.h>
#include <LoggerAPI.h>

namespace DB
{

SQLiteSession::SQLiteSession(const ConnParams& params)
{
    // see https://www.sqlite.org/c3ref/open.html
    if (params.count("uri"))
    {
        auto res = sqlite3_open_v2(params.at("uri").get<std::string>().c_str(), &conn, SQLITE_OPEN_URI, nullptr);
        if (res != SQLITE_OK)
        {
            throw std::runtime_error("$Core$ SQLiteSession::SQLiteSession: Failed to open database: " + std::string(sqlite3_errmsg(conn)));
        }
    }
    if (!params.count("path"))
    {
        throw std::invalid_argument("$SQLite$ SQLiteSession::SQLiteSession: No path specified!");
    }
    // If path == ":memory:", use in-memory database
    auto path = params.at("path").get<std::string>().c_str();
    auto flags = 0;
    if (params.count("create") && params.at("create").get<bool>())
    {
        flags |= SQLITE_OPEN_CREATE;
    }
    if (params.count("readonly") && params.at("readonly").get<bool>())
    {
        flags |= SQLITE_OPEN_READONLY;
    }
    if (params.count("readwrite") && params.at("readwrite").get<bool>())
    {
        flags |= SQLITE_OPEN_READWRITE;
    }
    if (params.count("nomutex") && params.at("nomutex").get<bool>())
    {
        flags |= SQLITE_OPEN_NOMUTEX;
    }
    if (params.count("fullmutex") && params.at("fullmutex").get<bool>())
    {
        flags |= SQLITE_OPEN_FULLMUTEX;
    }
    if (params.count("sharedcache") && params.at("sharedcache").get<bool>())
    {
        flags |= SQLITE_OPEN_SHAREDCACHE;
    }
    if (params.count("privatecache") && params.at("privatecache").get<bool>())
    {
        flags |= SQLITE_OPEN_PRIVATECACHE;
    }
    if (params.count("nofollow") && params.at("nofollow").get<bool>())
    {
        flags |= SQLITE_OPEN_NOFOLLOW;
    }
    if (!params.count("readonly") && !params.count("readwrite"))
    {
        flags |= SQLITE_OPEN_READWRITE;
    }
    if (!params.count("create"))
    {
        flags |= SQLITE_OPEN_CREATE;
    }
    auto res = sqlite3_open_v2(path, &conn, flags, nullptr);
    if (res != SQLITE_OK)
    {
        throw std::runtime_error("$SQLite$ SQLiteSession::SQLiteSession: Failed to open database: " + std::string(sqlite3_errmsg(conn)));
    }
    if (debugOutput)
    {
        logger.info("$SQLite$ SQLiteSession::SQLiteSession: Opened database: " + std::string(path));
    }
}
SQLiteSession::~SQLiteSession()
{
    close();
}
bool SQLiteSession::execute(const std::string& query)
{
    if (debugOutput)
    {
        logger.info("$SQLite$ SQLiteSession::execute: Executing | " + query);
    }
    auto res = sqlite3_exec(conn, query.c_str(), nullptr, nullptr, nullptr);
    if (res != SQLITE_OK)
    {
        return false;
    }
    return true;
}

void SQLiteSession::close()
{
}

} // namespace DB