#include <DB/Impl/SQLite/Stmt.h>
#include <third-party/sqlite3/sqlite3.h>

namespace DB {

SQLiteStmt::SQLiteStmt(sqlite3_stmt* stmt) : stmt(stmt) {
    totalParamsCount = sqlite3_bind_parameter_count(stmt);
}
SQLiteStmt::~SQLiteStmt()
{
    close();
}

Stmt& SQLiteStmt::bind(const Any& value, int index)
{
    int res = SQLITE_OK;
    auto type = value.type;
    switch (type)
    {
    case Any::Type::Null:
        res = sqlite3_bind_null(stmt, index);
        break;
    case Any::Type::Integer:
        res = sqlite3_bind_int64(stmt, index, value.get<int64_t>());
        break;
    case Any::Type::Floating:
        res = sqlite3_bind_double(stmt, index, value.get<double>());
        break;
    case Any::Type::String:
    case Any::Type::Date:
    case Any::Type::Time:
    case Any::Type::DateTime:
        res = sqlite3_bind_text(stmt, index, value.get<std::string>().c_str(), -1, SQLITE_TRANSIENT);
        break;
    case Any::Type::Blob:
        res = sqlite3_bind_blob(stmt, index, value.get<ByteArray>().data(), value.get<ByteArray>().size(), SQLITE_TRANSIENT);
        break;
    default:
        throw std::runtime_error("$SQLite$ SQLiteStmt::bind: Unsupported type");
    }
    if (res != SQLITE_OK) {
        throw std::runtime_error("$SQLite$ SQLiteStmt::bind: Failed to bind " + Any::type2str(type) + " to index " + std::to_string(index));
    }
    return *this;
}
Stmt& SQLiteStmt::bind(const Any& value, const std::string& name)
{
    return bind(value, sqlite3_bind_parameter_index(stmt, name.c_str()));
}

void SQLiteStmt::close()
{
    sqlite3_finalize(stmt);
    stmt = nullptr;
}

int SQLiteStmt::getUnboundParamsCount()
{
    return totalParamsCount - boundParamsCount;
}
int SQLiteStmt::getBoundParamsCount()
{
    return boundParamsCount;
}
int SQLiteStmt::getParamsCount()
{
    return totalParamsCount;
}

Stmt&& SQLiteStmt::create(sqlite3* db, const std::string& sql)
{
    sqlite3_stmt* stmt = nullptr;
    int res = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
    if (res != SQLITE_OK) {
        throw std::runtime_error("$SQLite$ SQLiteStmt::create: Failed to prepare statement: " + std::string(sqlite3_errmsg(db)));
    }
    return std::move(SQLiteStmt(stmt));
}

} // namespace DB