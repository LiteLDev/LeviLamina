#include <DB/Session.h>
#include <LoggerAPI.h>

namespace DB
{

Logger logger("LLDB");

void Session::setDebugOutput(bool enable)
{
    debugOutput = enable;
}
bool Session::changeUser(const std::string& user, const std::string& password)
{
    throw std::runtime_error("$Core$ Session::changeUser: Not implemented");
}
bool Session::changeDatabase(const std::string& database)
{
    throw std::runtime_error("$Core$ Session::changeDatabase: Not implemented");
}
ResultSet Session::query(const std::string& query)
{
    bool headerSet = false;
    RowHeader header;
    ResultSet result(header);
    this->query(query, [&](const Row& row) {
        if (!headerSet)
        {
            headerSet = true;
            header = row.header;
        }
        result.push_back(row);
        return true;
    });
}

/*
class SQLiteSession : public Session
{

    sqlite3* conn = nullptr;

public:
    SQLiteSession(const ConnParams& params)
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
    ~SQLiteSession()
    {
    }
    bool execute(const std::string& query)
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
    void query(const std::string& query, std::function<bool(const Row&)> callback)
    {
        if (debugOutput)
        {
            logger.info("$SQLite$ SQLiteSession::query: Querying | " + query);
        }
        sqlite3_stmt* stmt = nullptr;
        auto res = sqlite3_prepare_v2(conn, query.c_str(), -1, &stmt, nullptr);
        if (res != SQLITE_OK)
        {
            throw std::runtime_error("$SQLite$ SQLiteSession::query: Failed to prepare query: " + std::string(sqlite3_errmsg(conn)));
        }
        int cols = sqlite3_column_count(stmt);
        RowHeader header;
        for (int i = 0; i < cols; i++)
        {
            header.add(sqlite3_column_name(stmt, i));
        }
        while (true)
        {
            res = sqlite3_step(stmt);
            if (res == SQLITE_DONE)
            {
                break;
            }
            if (res != SQLITE_ROW)
            {
                throw std::runtime_error("$SQLite$ SQLiteSession::query: Failed to execute query: " + std::string(sqlite3_errmsg(conn)));
            }
            Row row(header);
            for (int i = 0; i < cols; i++)
            {
                switch (sqlite3_column_type(stmt, i))
                {
                    case SQLITE_INTEGER:
                        row.push_back(sqlite3_column_int64(stmt, i));
                        break;
                    case SQLITE_FLOAT:
                        row.push_back(sqlite3_column_double(stmt, i));
                        break;
                    case SQLITE_TEXT:
                        row.push_back(std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, i))));
                        break;
                    case SQLITE_BLOB:
                        row.push_back(ByteArray(
                            reinterpret_cast<const uint8_t*>(sqlite3_column_blob(stmt, i)),
                            reinterpret_cast<const uint8_t*>(sqlite3_column_blob(stmt, i)) + sqlite3_column_bytes(stmt, i)));
                        break;
                    case SQLITE_NULL:
                        row.push_back(Any());
                        break;
                    default:
                        throw std::runtime_error("$SQLite$ SQLiteSession::query: Unknown column type!");
                }
            }
            if (!callback(row))
            {
                break;
            }
        }
        sqlite3_finalize(stmt);
    }
    Stmt& prepare(const std::string& query)
    {
        if (debugOutput)
        {
            logger.info("$SQLite$ SQLiteSession::prepare: Preparing | " + query);
        }
        sqlite3_stmt* stmt = nullptr;
        auto res = sqlite3_prepare_v2(conn, query.c_str(), -1, &stmt, nullptr);
        if (res != SQLITE_OK)
        {
            throw std::runtime_error("$SQLite$ SQLiteSession::prepare: Failed to prepare query: " + std::string(sqlite3_errmsg(conn)));
        }
        auto sqliteStmt = std::make_shared<SQLiteStmt>(stmt);
    }
    void close()
    {
        if (conn)
        {
            sqlite3_close(conn);
            if (debugOutput)
            {
                logger.info("$SQLite$ SQLiteSession::close: Database connection closed");
            }
            conn = nullptr;
        }
    }
    bool isOpen()
    {
        if (!conn)
        {
            throw std::runtime_error("$SQLite$ SQLiteSession::isOpen: Database is closed!");
        }
        return true;
    }
};
*/
} // namespace DB