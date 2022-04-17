#include <DB/Impl/SQLite/Stmt.h>
#include <DB/Impl/SQLite/Session.h>
#include <LoggerAPI.h>
#include <third-party/sqlite3/sqlite3.h>

namespace DB
{

SQLiteStmt::SQLiteStmt(sqlite3_stmt* stmt)
    : stmt(stmt)
{
    totalParamsCount = sqlite3_bind_parameter_count(stmt);
}

int SQLiteStmt::getNextParamIndex()
{
    int result = -1;
    for (int i = 0; i < boundIndexes.size() && i < totalParamsCount; i++)
    {
        if (boundIndexes[i] == result + 1)
        {
            result++;
        }
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::getNextParamIndex: The next param index is {}", result + 1);
    return result + 1;
}

void SQLiteStmt::fetchResultHeader()
{
    RowHeader header;
    int colCnt = sqlite3_column_count(stmt);
    for (int i = 0; i < colCnt; i++)
    {
        auto name = sqlite3_column_name(stmt, i);
        IF_ENDBG dbLogger.debug("SQLiteStmt::fetchResultHeader: Column Name[{}]: {}", i, name);
        header.add(name);
    }
    resultHeader = header;
}

SQLiteStmt::~SQLiteStmt()
{
    if (!onHeap)
    {
        close();
    }
}

Stmt& SQLiteStmt::bind(const Any& value, int index)
{
    ++index; // Index starts at 1, but we need to start at 0
    if (index < 0 || index > totalParamsCount)
    {
        throw std::invalid_argument("SQLiteStmt::bind: Invalid parameter `index`");
    }
    if (getUnboundParams() == 0)
    {
        throw std::runtime_error("SQLiteStmt::bind: All the parameters are already bound");
    }
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
        case Any::Type::UInteger:
        {
            uint64_t val = value.get<uint64_t>();
            if (val > LLONG_MAX)
            {
                // The conversion of uint64 to double may result in loss of precision,
                // so it is recommended to use string/blob for big numbers
                res = sqlite3_bind_double(stmt, index, (double)val);
            }
            else
            {
                res = sqlite3_bind_int64(stmt, index, (int64_t)val);
            }
            break;
        }
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
            res = sqlite3_bind_blob(stmt, index, value.get<ByteArray>().data(), (int)value.get<ByteArray>().size(), SQLITE_TRANSIENT);
            break;
        default:
            throw std::runtime_error("SQLiteStmt::bind: Unsupported type");
    }
    if (res != SQLITE_OK)
    {
        std::string e = fmt::format("SQLiteStmt::bind: Failed to bind {} to parameter at index {}",
                                    Any::type2str(type), index);
        if (session)
        {
            e += ": " + session->getLastError();
        }
        throw std::runtime_error(e);
    }
    boundParamsCount++;
    boundIndexes.push_back(index - 1);
    if (!getUnboundParams() && session)
    {
        affectedRowCount = session->getAffectedRows();
        insertRowId = session->getLastInsertId();
    }
    return *this;
}
Stmt& SQLiteStmt::bind(const Any& value, const std::string& name)
{
    return bind(value, sqlite3_bind_parameter_index(stmt, name.c_str()) - 1);
}
Stmt& SQLiteStmt::bind(const Any& value)
{
    return bind(value, getNextParamIndex());
}

bool SQLiteStmt::step()
{
    int res = sqlite3_step(stmt);
    if (res == SQLITE_ROW)
    {
        if (resultHeader.empty())
        {
            fetchResultHeader();
        }
        IF_ENDBG dbLogger.debug("SQLiteStmt::step: Successfully");
        stepped = true;
        return true;
    }
    else if (res == SQLITE_DONE)
    {
        IF_ENDBG dbLogger.debug("SQLiteStmt::step: Failed: Done");
        stepped = false;
        return false;
    }
    else
    {
        throw std::runtime_error("SQLiteStmt::step: Failed to step");
    }
}

bool SQLiteStmt::next()
{
    return step();
}

Row SQLiteStmt::fetch()
{
    if (resultHeader.empty())
    {
        fetchResultHeader();
    }
    Row row(resultHeader);
    for (int i = 0; i < resultHeader.size(); i++)
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
            {
                std::string text(reinterpret_cast<const char*>(sqlite3_column_text(stmt, i)));
                IF_ENDBG dbLogger.debug("SQLiteStmt::fetch: Fetched TEXT type column: {} {}", i, text);
                row.push_back(text);
                break;
            }
            case SQLITE_BLOB:
            {
                ByteArray arr(
                    reinterpret_cast<const uint8_t*>(sqlite3_column_blob(stmt, i)),
                    reinterpret_cast<const uint8_t*>(sqlite3_column_blob(stmt, i)) +
                                                     sqlite3_column_bytes(stmt, i));
                IF_ENDBG
                {
                    std::string out = "SQLiteStmt::fetch: Fetched BLOB type column: " + std::to_string(i) + " ";
                    for (auto& byte : arr)
                    {
                        out += IntToHexStr(byte, true, true, false) + ' ';
                    }
                    dbLogger.debug(out);
                }
                row.push_back(arr);

                break;
            }
            case SQLITE_NULL:
                row.push_back(Any());
                break;
            default:
                throw std::runtime_error("SQLiteSession::query: Unknown column type!");
        }
    }
    return row;
}

bool SQLiteStmt::done()
{
    if (stepped) return false;
    return !step();
}

Stmt& SQLiteStmt::fetchAll(std::function<bool(const Row&)> cb)
{
    while (step())
    {
        if (!cb(fetch()))
        {
            IF_ENDBG dbLogger.debug("SQLiteStmt::fetchAll: Stopped fetching");
            break;
        }
    }
}

ResultSet SQLiteStmt::fetchAll()
{
    if (resultHeader.empty())
    {
        fetchResultHeader();
    }
    ResultSet result(resultHeader);
    while (step()) result.push_back(fetch());
    IF_ENDBG dbLogger.debug("SQLiteStmt::fetchAll: Fetched {} rows", result.size());
    return result;
}

Stmt& SQLiteStmt::reset()
{
    auto res = sqlite3_reset(stmt);
    if (res != SQLITE_OK)
    {
        throw std::runtime_error("SQLiteStmt::reset: Failed to reset");
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::reset: Reset successfully");
    return *this;
}

Stmt& SQLiteStmt::clear()
{
    auto res = sqlite3_clear_bindings(stmt);
    if (res != SQLITE_OK)
    {
        throw std::runtime_error("SQLiteStmt::clear: Failed to clear bindings");
    }
    IF_ENDBG dbLogger.debug("SQLiteStmt::clear: Cleared bindings successfully");
    return *this;
}

void SQLiteStmt::close()
{
    sqlite3_finalize(stmt);
    stmt = nullptr;
    if (onHeap)
    {
        destroy(this);
    }
}

uint64_t SQLiteStmt::getAffectedRows() const
{
    return affectedRowCount;
}

uint64_t SQLiteStmt::getInsertId() const
{
    return insertRowId;
}

int SQLiteStmt::getUnboundParams() const
{
    return totalParamsCount - boundParamsCount;
}

int SQLiteStmt::getBoundParams() const
{
    return boundParamsCount;
}

int SQLiteStmt::getParamsCount() const
{
    return totalParamsCount;
}

DBType SQLiteStmt::getType() const
{
    return DBType::SQLite;
}

Stmt &SQLiteStmt::operator,(const BindType&b)
{
    if (b.name.empty() && b.idx == -1)
    {
        bind(b.value);
    }
    else if (!b.name.empty())
    {
        bind(b.value, b.name);
    }
    else if (b.idx != -1)
    {
        bind(b.value, b.idx);
    }
    else
    {
        throw std::invalid_argument("SQLiteStmt::operator,: Parameter `b`(const BindType&) is invalid");
    }
    return *this;
}

Stmt& SQLiteStmt::create(SQLiteSession& sess, const std::string& sql)
{
    sqlite3_stmt* stmt = nullptr;
    int res = sqlite3_prepare_v2(sess.conn, sql.c_str(), -1, &stmt, nullptr);
    if (res != SQLITE_OK)
    {
        throw std::runtime_error("SQLiteStmt::create: Failed to prepare statement: " + sess.getLastError());
    }
    SQLiteStmt* result = new SQLiteStmt(stmt);
    result->onHeap = true;
    result->session = &sess;
    result->setDebugOutput(sess.debugOutput);
    if (sess.debugOutput) dbLogger.debug("SQLiteStmt::create: Prepared > " + sql);
    return *result;
}

} // namespace DB