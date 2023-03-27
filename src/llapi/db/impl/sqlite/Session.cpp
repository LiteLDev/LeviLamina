#include "llapi/db/impl/sqlite/Session.h"
#include "llapi/db/impl/sqlite/Stmt.h"
#include <sqlite3.h>
#include "llapi/LoggerAPI.h"

namespace DB {

SQLiteSession::SQLiteSession() {
    IF_ENDBG dbLogger.debug("SQLiteSession: Constructed! this: {}", (void*)this);
}
SQLiteSession::SQLiteSession(const ConnParams& params) {
    IF_ENDBG dbLogger.debug("SQLiteSession: Constructed! this: {}", (void*)this);
    open(params);
}

SQLiteSession::~SQLiteSession() {
    IF_ENDBG dbLogger.debug("SQLiteSession::~SQLiteSession: Destructor: this: {}", (void*)this);
    close();
}

void SQLiteSession::open(const ConnParams& params) {
    // see https://www.sqlite.org/c3ref/open.html
    auto p = params; // Copy to avoid modifying the origin.
    auto path = p.getPath();
    if (path.empty()) {
        path = ":memory:";
        // throw std::invalid_argument("SQLiteSession::SQLiteSession: No path specified!");
    }
    auto flags = 0;
    if (p.get<bool>({"create", "create_if_not_exist", "createifnotexist"}, true, false)) {
        flags |= SQLITE_OPEN_CREATE;
    }
    if (p.get<bool>({"readonly", "readonly_mode", "readonlymode", "r"}, false, false)) {
        flags |= SQLITE_OPEN_READONLY;
    }
    if (p.get<bool>({"readwrite", "readwrite_mode", "readwritemode", "read_write", "rw"}, false, false)) {
        flags |= SQLITE_OPEN_READWRITE;
    }
    if (p.get<bool>({"privatecache", "private_cache"}, false, false)) {
        flags |= SQLITE_OPEN_PRIVATECACHE;
    }
    if (p.get<bool>({"sharedcache", "shared_cache"}, false, false)) {
        flags |= SQLITE_OPEN_SHAREDCACHE;
    }
    if (p.get<bool>({"nomutex", "no_mutex"}, false, false)) {
        flags |= SQLITE_OPEN_NOMUTEX;
    }
    if (p.get<bool>({"fullmutex", "full_mutex"}, false, false)) {
        flags |= SQLITE_OPEN_FULLMUTEX;
    }
    if (p.get<bool>({"nofollow", "no_follow"}, false, false)) {
        flags |= SQLITE_OPEN_NOFOLLOW;
    }
    if (!params.count("readonly") && !params.count("readwrite")) {
        flags |= SQLITE_OPEN_READWRITE;
    }
    if (!params.count("create")) {
        flags |= SQLITE_OPEN_CREATE;
    }
    auto res = sqlite3_open_v2(path.c_str(), &conn, flags, nullptr);
    if (res != SQLITE_OK) {
        throw std::runtime_error("SQLiteSession::open: Failed to open database: " + std::string(sqlite3_errmsg(conn)));
    }
    IF_ENDBG dbLogger.debug("SQLiteSession::open: Opened database: " + std::string(path));
}

bool SQLiteSession::execute(const std::string& query) {
    IF_ENDBG dbLogger.debug("SQLiteSession::execute: Executing > " + query);
    auto res = sqlite3_exec(conn, query.c_str(), nullptr, nullptr, nullptr);
    return res == SQLITE_OK;
}

Session& SQLiteSession::query(const std::string& query, std::function<bool(const Row&)> callback) {
    IF_ENDBG dbLogger.debug("SQLiteSession::query: Querying > " + query);
    auto stmt = prepare(query);
    stmt->fetchAll(callback);
    return *this;
}

SharedPointer<Stmt> SQLiteSession::prepare(const std::string& query, bool autoExecute) {
    auto stmt = SQLiteStmt::create(getOrSetSelf(), query, autoExecute);
    stmtPool.push_back(stmt);
    return stmt;
}

std::string SQLiteSession::getLastError() const {
    return std::string(sqlite3_errmsg(conn));
}

uint64_t SQLiteSession::getAffectedRows() const {
    return sqlite3_changes(conn);
}

uint64_t SQLiteSession::getLastInsertId() const {
    return sqlite3_last_insert_rowid(conn);
}

void SQLiteSession::close() {
    while (!stmtPool.empty()) {
        // Close all the active statements or it will error when closing
        auto& wptr = stmtPool.back();
        auto ptr = wptr.lock();
        if (!wptr.expired() && ptr) {
            ptr->close();
        }
        stmtPool.pop_back();
    }
    if (conn) {
        auto res = sqlite3_close(conn);
        if (res != SQLITE_OK) {
            throw std::runtime_error("SQLiteSession::close: Failed to close database: " + std::string(sqlite3_errmsg(conn)));
        }
        conn = nullptr;
        IF_ENDBG dbLogger.debug("SQLiteSession::close: Closed database");
    }
}

bool SQLiteSession::isOpen() {
    return conn != nullptr;
}

DBType SQLiteSession::getType() {
    return DBType::SQLite;
}

SharedPointer<Stmt> SQLiteSession::operator<<(const std::string& query) {
    return prepare(query, true);
}

} // namespace DB