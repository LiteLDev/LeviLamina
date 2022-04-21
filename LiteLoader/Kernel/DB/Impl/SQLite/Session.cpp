#include <DB/Impl/SQLite/Session.h>
#include <DB/Impl/SQLite/Stmt.h>
#include <third-party/sqlite3/sqlite3.h>
#include <LoggerAPI.h>

namespace DB
{

SQLiteSession::SQLiteSession()
{
}
SQLiteSession::SQLiteSession(const ConnParams& params)
{
    open(params);
}

SQLiteSession::~SQLiteSession()
{
    if (isOpen())
    {
        close();
    }
}

void SQLiteSession::open(const ConnParams& params)
{
    // see https://www.sqlite.org/c3ref/open.html
    auto p = params; // Copy to avoid modifying the origin.
    if (!p.getRaw().empty())
    {
        auto res = sqlite3_open_v2(p.getRaw().c_str(), &conn, SQLITE_OPEN_URI, nullptr);
        if (res != SQLITE_OK)
        {
            throw std::runtime_error("SQLiteSession::SQLiteSession: Failed to open database: " + std::string(sqlite3_errmsg(conn)));
        }
    }
    auto path = p.getPath();
    if (path.empty())
    {
        path = ":memory:";
        // throw std::invalid_argument("SQLiteSession::SQLiteSession: No path specified!");
    }
    auto flags = 0;
    if (p.get<bool>({"create", "create_if_not_exist", "createifnotexist"}, true, false))
    {
        flags |= SQLITE_OPEN_CREATE;
    }
    if (p.get<bool>({"readonly", "readonly_mode", "readonlymode", "r"}, false, false))
    {
        flags |= SQLITE_OPEN_READONLY;
    }
    if (p.get<bool>({"readwrite", "readwrite_mode", "readwritemode", "read_write", "rw"}, false, false))
    {
        flags |= SQLITE_OPEN_READWRITE;
    }
    if (p.get<bool>({"privatecache", "private_cache"}, false, false))
    {
        flags |= SQLITE_OPEN_PRIVATECACHE;
    }
    if (p.get<bool>({"sharedcache", "shared_cache"}, false, false))
    {
        flags |= SQLITE_OPEN_SHAREDCACHE;
    }
    if (p.get<bool>({"nomutex", "no_mutex"}, false, false))
    {
        flags |= SQLITE_OPEN_NOMUTEX;
    }
    if (p.get<bool>({"fullmutex", "full_mutex"}, false, false))
    {
        flags |= SQLITE_OPEN_FULLMUTEX;
    }
    if (p.get<bool>({"nofollow", "no_follow"}, false, false))
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
    auto res = sqlite3_open_v2(path.c_str(), &conn, flags, nullptr);
    if (res != SQLITE_OK)
    {
        throw std::runtime_error("SQLiteSession::open: Failed to open database: " + std::string(sqlite3_errmsg(conn)));
    }
    IF_ENDBG dbLogger.debug("SQLiteSession::open: Opened database: " + std::string(path));
}

bool SQLiteSession::execute(const std::string& query)
{
    IF_ENDBG dbLogger.debug("SQLiteSession::execute: Executing > " + query);
    auto res = sqlite3_exec(conn, query.c_str(), nullptr, nullptr, nullptr);
    return res == SQLITE_OK;
}

void SQLiteSession::query(const std::string& query, std::function<bool(const Row&)> callback)
{
    IF_ENDBG dbLogger.debug("SQLiteSession::query: Querying > " + query);
    auto& stmt = prepare(query);
    stmt.fetchAll(callback);
}

Stmt& SQLiteSession::prepare(const std::string& query)
{
    auto& stmt = SQLiteStmt::create(*this, query);
    stmts.push_back(&stmt);
    return stmt;
}

std::string SQLiteSession::getLastError() const
{
    return std::string(sqlite3_errmsg(conn));
}

uint64_t SQLiteSession::getAffectedRows() const
{
    return sqlite3_changes(conn);
}

uint64_t SQLiteSession::getLastInsertId() const
{
    return sqlite3_last_insert_rowid(conn);
}

void SQLiteSession::close()
{
    while (!stmts.empty())
    {
        stmts[0]->destroy();
    }
    if (conn)
    {
        auto res = sqlite3_close(conn);
        if (res != SQLITE_OK)
        {
            throw std::runtime_error("SQLiteSession::close: Failed to close database: " + std::string(sqlite3_errmsg(conn)));
        }
        conn = nullptr;
        IF_ENDBG dbLogger.debug("SQLiteSession::close: Closed database");
    }
}

bool SQLiteSession::isOpen()
{
    return conn == nullptr;
}

DBType SQLiteSession::getType()
{
    return DBType::SQLite;
}

Stmt& SQLiteSession::operator<<(const std::string& query)
{
    return prepare(query);
}

} // namespace DB