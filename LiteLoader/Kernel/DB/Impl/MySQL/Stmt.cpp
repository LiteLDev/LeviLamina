#include <third-party/mysql/mysql.h>
#include <DB/Impl/MySQL/Stmt.h>
#include <DB/Impl/MySQL/Session.h>
#include <Utils/StringReader.h>
#include <LoggerAPI.h>
#pragma warning(disable : 26812)

template <>
MYSQL_TIME any_to(const DB::Any& v)
{
    switch (v.type)
    {
        case DB::Any::Type::Date:
        {
            MYSQL_TIME t;
            t.year = v.value.date->year;
            t.month = v.value.date->month;
            t.day = v.value.date->day;
            t.hour = 0;
            t.minute = 0;
            t.second = 0;
            t.second_part = 0;
            t.time_type = MYSQL_TIMESTAMP_DATE;
            return t;
        }
        case DB::Any::Type::Time:
        {
            MYSQL_TIME t;
            t.year = 0;
            t.month = 0;
            t.day = 0;
            t.hour = v.value.time->hour;
            t.minute = v.value.time->minute;
            t.second = v.value.time->second;
            t.second_part = 0;
            t.time_type = MYSQL_TIMESTAMP_TIME;
            return t;
        }
        case DB::Any::Type::DateTime:
        {
            MYSQL_TIME t;
            t.year = v.value.datetime->date.year;
            t.month = v.value.datetime->date.month;
            t.day = v.value.datetime->date.day;
            t.hour = v.value.datetime->time.hour;
            t.minute = v.value.datetime->time.minute;
            t.second = v.value.datetime->time.second;
            t.second_part = 0;
            t.time_type = MYSQL_TIMESTAMP_DATETIME;
            return t;
        }
        default:
            throw std::bad_cast();
    }
}

namespace DB
{

inline MySQLSession* Wptr2MySQLSession(const std::weak_ptr<Session>& sess)
{
    return (MySQLSession*)sess.lock().get();
}

std::unordered_map<std::string, int> ParseStmtParams(std::string& query)
{
    StringReader reader(query);
    std::unordered_map<std::string, int> result;
    bool inString = false;
    int delta = 0;
    int cur = 0;
    while (reader.isValid())
    {
        char c = reader.read();
        if (c == '\'' || c == '"')
        {
            inString = !inString;
        }
        else if (!inString && (c == '?' || c == '$' || c == ':'))
        {
            query[reader.getPos() - 1 - delta] = '?';  // Replace $ or : with ?
            auto name = reader.readVariableName(); // Read parameter name
            if (name.empty())                      // No parameter name
            {
                cur++;
                continue;
            }
            if (result.count(name))
            {
                throw std::runtime_error("ParseStmtParams: Duplicate parameter name: " + name);
            }
            result[name] = cur++;
            // Remove the name so that mysql can parse it
            query = query.substr(0, reader.getPos() - name.length() - delta) + query.substr(reader.getPos() - delta);
            delta += name.size();
        }
    }
    return result;
}

std::pair<std::shared_ptr<char[]>, std::size_t> AllocateBuffer(const MYSQL_FIELD& field)
{
    std::size_t len = 0;
    switch (field.type)
    {
        case MYSQL_TYPE_NULL:
            return {nullptr, 0};
        case MYSQL_TYPE_TINY:
            len = sizeof(char);
            break;
        case MYSQL_TYPE_SHORT:
            len = sizeof(short);
            break;
        case MYSQL_TYPE_INT24:
        case MYSQL_TYPE_LONG:
            len = sizeof(int);
            break;
        case MYSQL_TYPE_BIT:
        case MYSQL_TYPE_LONGLONG:
            len = sizeof(long long);
            break;
        case MYSQL_TYPE_FLOAT:
            len = sizeof(float);
            break;
        case MYSQL_TYPE_DOUBLE:
            len = sizeof(double);
            break;
        case MYSQL_TYPE_YEAR:
            len = sizeof(short);
            break;
        case MYSQL_TYPE_TIME:
        case MYSQL_TYPE_DATE:
        case MYSQL_TYPE_DATETIME:
        case MYSQL_TYPE_TIMESTAMP:
            len = sizeof(MYSQL_TIME);
            break;
        case MYSQL_TYPE_STRING:
        case MYSQL_TYPE_VAR_STRING:
        case MYSQL_TYPE_VARCHAR:
        case MYSQL_TYPE_BLOB:
        case MYSQL_TYPE_TINY_BLOB:
        case MYSQL_TYPE_MEDIUM_BLOB:
        case MYSQL_TYPE_LONG_BLOB:
        case MYSQL_TYPE_SET:
        case MYSQL_TYPE_ENUM:
        case MYSQL_TYPE_GEOMETRY:
        case MYSQL_TYPE_JSON:
            len = field.max_length + 1;
            break;
        case MYSQL_TYPE_DECIMAL:
        case MYSQL_TYPE_NEWDECIMAL:
            len = 64;
            break;
        default:
            throw std::runtime_error("AllocateBuffer: Unsupported MySQL data type: " + std::to_string(field.type));
    }
    if (len)
    {
        auto buffer = std::shared_ptr<char[]>(new char[len]);
#if defined(LLDB_DEBUG_MODE)
        dbLogger.debug("AllocateBuffer: Allocated! Buffer size: {}", len);
#endif
        return std::make_pair(buffer, len);
    }
    return std::make_pair(std::shared_ptr<char[]>(), len);
}

bool IsUnsigned(const MYSQL_FIELD& field)
{
    return field.flags & UNSIGNED_FLAG;
}

Any ReceiverToAny(const Receiver& rec)
{
    if (rec.isNull || rec.error)
    {
        return Any();
    }
    switch (rec.field.type)
    {
        case MYSQL_TYPE_NULL:
            return Any();
        case MYSQL_TYPE_TINY:
            if (IsUnsigned(rec.field))
                return *reinterpret_cast<unsigned char*>(rec.buffer.get());
            return *reinterpret_cast<char*>(rec.buffer.get());
        case MYSQL_TYPE_SHORT:
            if (IsUnsigned(rec.field))
                return *reinterpret_cast<unsigned short*>(rec.buffer.get());
            return *reinterpret_cast<short*>(rec.buffer.get());
        case MYSQL_TYPE_INT24:
        case MYSQL_TYPE_LONG:
            if (IsUnsigned(rec.field))
                return *reinterpret_cast<unsigned int*>(rec.buffer.get());
            return *reinterpret_cast<int*>(rec.buffer.get());
        case MYSQL_TYPE_BIT:
            return *reinterpret_cast<unsigned long long*>(rec.buffer.get());
        case MYSQL_TYPE_LONGLONG:
            if (IsUnsigned(rec.field))
                return *reinterpret_cast<unsigned long long*>(rec.buffer.get());
            return *reinterpret_cast<long long*>(rec.buffer.get());
        case MYSQL_TYPE_FLOAT:
            return *reinterpret_cast<float*>(rec.buffer.get());
        case MYSQL_TYPE_DOUBLE:
            return *reinterpret_cast<double*>(rec.buffer.get());
        case MYSQL_TYPE_YEAR:
            return *reinterpret_cast<unsigned short*>(rec.buffer.get());
        case MYSQL_TYPE_TIME:
        case MYSQL_TYPE_DATE:
        case MYSQL_TYPE_DATETIME:
        case MYSQL_TYPE_TIMESTAMP:
            return Any();
            break; // TODO: return Any(rec.buffer.get());
		case MYSQL_TYPE_STRING:
        case MYSQL_TYPE_VAR_STRING:
        case MYSQL_TYPE_VARCHAR:
        case MYSQL_TYPE_SET:
        case MYSQL_TYPE_ENUM:
        //case MYSQL_TYPE_GEOMETRY:
        case MYSQL_TYPE_JSON:
#if defined(LLDB_DEBUG_MODE)
            dbLogger.debug("ReceiverToAny: string: length: {}, buffer {}", rec.length, rec.buffer.get());
#endif
            return Any(std::string(rec.buffer.get()));
        case MYSQL_TYPE_BLOB:
        case MYSQL_TYPE_TINY_BLOB:
        case MYSQL_TYPE_MEDIUM_BLOB:
        case MYSQL_TYPE_LONG_BLOB:
#if defined(LLDB_DEBUG_MODE)
            dbLogger.debug("ReceiverToAny: blob: length: {}, buffer {}", rec.length, rec.buffer.get());
#endif
            return Any(ByteArray(rec.buffer.get(), rec.buffer.get() + rec.length));
        case MYSQL_TYPE_DECIMAL:
        case MYSQL_TYPE_NEWDECIMAL:
            // TODO: Decimal
            dbLogger.debug("MySQL_Decimal: {}", std::string(rec.buffer.get(), rec.length));
            return Any();
        default:
            throw std::runtime_error("ReceiverToAny: Unsupported MySQL data type: " + std::to_string(rec.field.type));
    }
}

MySQLStmt::MySQLStmt(MYSQL_STMT* stmt, const std::weak_ptr<Session>& parent)
    : stmt(stmt)
{
    this->session = parent;
    totalParamsCount = mysql_stmt_param_count(stmt);
    if (totalParamsCount)
        params.reset(new MYSQL_BIND[totalParamsCount]);
    else
    {
        execute(); // Execute without params
    }
}

int MySQLStmt::getNextParamIndex()
{
    int result = -1;
    for (int i = 0; i < boundIndexes.size() && i < totalParamsCount; i++)
    {
        if (boundIndexes[i] == result + 1)
        {
            result++;
        }
    }
    IF_ENDBG dbLogger.debug("MySQLStmt::getNextParamIndex: The next param index is {}", result + 1);
    return result + 1;
}

void MySQLStmt::bindResult()
{
    metadata = mysql_stmt_result_metadata(stmt);
    if (mysql_stmt_errno(stmt) && !metadata)
    {
        throw std::runtime_error("MySQLStmt::bindResult: Failed to get result metadata" + std::string(mysql_stmt_error(stmt)));
    }
    if (!metadata)
    {
        IF_ENDBG dbLogger.debug("MySQLStmt::bindResult: No result metadata");
        return;
    }
    bool attr_max_length = true;
    mysql_stmt_attr_set(stmt, STMT_ATTR_UPDATE_MAX_LENGTH, (const void*)&attr_max_length);
    mysql_stmt_store_result(stmt);
    auto len = mysql_num_fields(metadata);
    IF_ENDBG dbLogger.debug("MySQLStmt::bindResult: mysql_num_fields: {}", len);
    auto fields = mysql_fetch_fields(metadata);
    result.reset(new MYSQL_BIND[len]); // Allocate result bindings
    resultHeader.reset(new RowHeader); // Allocate result header
    for (auto i = 0U; i < len; i++)
    {
        resultValues.push_back({});      // Allocate result values
        auto& rec = resultValues.back(); // Get the binder
        auto& field = fields[i];
        auto& data = result[i];
        auto&& [buffer, len] = AllocateBuffer(field); // Allocate buffer

        // Set the binder
        data.buffer_type = field.type;
        data.buffer = buffer.get();
        data.buffer_length = (unsigned long)len;
        data.is_null = &rec.isNull;
        data.is_unsigned = field.flags & UNSIGNED_FLAG;
        data.error = &rec.error;
        data.length = (unsigned long*)&rec.length;

        rec.field = field;
        rec.buffer = buffer; // Extend lifetime
        resultHeader->add(field.name);
        IF_ENDBG dbLogger.debug("MySQLStmt::bindResult: Bind result {} (type {}) at index {}", field.name, (int)field.type, i);
    }
    auto res = mysql_stmt_bind_result(stmt, result.get());
    if (res)
    {
        throw std::runtime_error("MySQLStmt::bindResult: Failed to bind result: " + std::string(mysql_stmt_error(stmt)));
    }
}

void MySQLStmt::execute()
{
    auto res = mysql_stmt_execute(stmt);
    if (res)
    {
        if (!session.expired())
            mysql_rollback(Wptr2MySQLSession(session)->conn);
        throw std::runtime_error("MySQLStmt::execute: Failed to execute stmt: " + std::string(mysql_stmt_error(stmt)));
    }
    mysql_commit(Wptr2MySQLSession(session)->conn);
    bindResult();
    if (metadata)
        step();
    paramValues = {};
}

MySQLStmt::~MySQLStmt()
{
    close();
}

Stmt& MySQLStmt::bind(const Any& value, int index)
{
    if (index < 0 || index > totalParamsCount)
    {
        throw std::invalid_argument("MySQLStmt::bind: Invalid argument `index`");
    }
    if (getUnboundParams() == 0)
    {
        throw std::runtime_error("MySQLStmt::bind: All the parameters are already bound");
    }
    paramValues.push_back({}); // Save the value or it will be lost
    auto& param = paramValues.back();
    switch (value.type)
    {
        case Any::Type::Null:
            params[index].buffer_type = MYSQL_TYPE_NULL;
            break;
        case Any::Type::Boolean:
            params[index].buffer_type = MYSQL_TYPE_TINY;
            param.buffer.reset(new char[1]);
            param.buffer[0] = value.value.boolean;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = 1;
            params[index].is_unsigned = true;
            break;
        case Any::Type::Integer:
            params[index].buffer_type = MYSQL_TYPE_LONGLONG;
            param.buffer.reset(new char[sizeof(int64_t)]);
            *reinterpret_cast<int64_t*>(param.buffer.get()) = value.value.integer;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = sizeof(int64_t);
            params[index].is_unsigned = false;
            params[index].is_null = 0;
            params[index].length = 0;
            break;
        case Any::Type::UInteger:
            params[index].buffer_type = MYSQL_TYPE_LONGLONG;
            param.buffer.reset(new char[sizeof(uint64_t)]);
            *reinterpret_cast<uint64_t*>(param.buffer.get()) = value.value.uinteger;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = sizeof(uint64_t);
            params[index].is_unsigned = true;
            params[index].is_null = 0;
            params[index].length = 0;
            break;
        case Any::Type::Floating:
            params[index].buffer_type = MYSQL_TYPE_DOUBLE;
            param.buffer.reset(new char[sizeof(double)]);
            *reinterpret_cast<double*>(param.buffer.get()) = value.value.floating;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = sizeof(double);
            params[index].is_unsigned = false;
            params[index].is_null = 0;
            params[index].length = 0;
            break;
        case Any::Type::String:
        {
            params[index].buffer_type = MYSQL_TYPE_STRING;
            auto sz = value.value.string->length() + 1;
            param.buffer.reset(new char[sz]);
            strcpy(param.buffer.get(), value.value.string->c_str());
            param.length = sz;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = sz;
            params[index].is_null = 0;
            params[index].length = (unsigned long*)&param.length;
            IF_ENDBG dbLogger.debug("MySQLStmt::bind: Bound string param at {}: {}", index, param.buffer.get());
            break;
        }
        case Any::Type::Date:
        case Any::Type::Time:
        case Any::Type::DateTime:
        {
            params[index].buffer_type = MYSQL_TYPE_TIME;
            auto tm = value.get<MYSQL_TIME>();
            param.buffer.reset(new char[sizeof(MYSQL_TIME)]);
            *reinterpret_cast<MYSQL_TIME*>(param.buffer.get()) = tm;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = sizeof(MYSQL_TIME);
            params[index].is_null = 0;
            params[index].length = 0;
            break;
        }
        case Any::Type::Blob:
        {
            params[index].buffer_type = MYSQL_TYPE_BLOB;
            auto blob = value.get<ByteArray>();
            auto sz = blob.size();
            param.buffer.reset(new char[sz]);
            memcpy(param.buffer.get(), blob.data(), sz);
            param.length = sz;
            params[index].buffer = param.buffer.get();
            params[index].buffer_length = sz;
            params[index].is_null = 0;
            params[index].length = (unsigned long*)&param.length;
            break;
        }
        default:
            throw std::runtime_error("MySQLStmt::bind: Unsupported type");
    }
    boundIndexes.push_back(index);
    boundParamsCount++;
    if (getUnboundParams() == 0)
    {
        auto res = mysql_stmt_bind_param(stmt, params.get());
        if (res)
        {
            throw std::runtime_error("MySQLStmt::bind: " + std::string(mysql_stmt_error(stmt)));
        }
        execute();
    }
    return *this;
}

Stmt& MySQLStmt::bind(const Any& value, const std::string& name)
{
    if (!paramIndexes.count(name))
    {
        throw std::invalid_argument("MySQLStmt::bind: Parameter name `" + name + "` not found");
    }
    return bind(value, paramIndexes[name]);
}

Stmt& MySQLStmt::bind(const Any& value)
{
    return bind(value, getNextParamIndex());
}

bool MySQLStmt::step()
{
    if (!result)
    {
        bindResult();
    }
    auto res = mysql_stmt_fetch(stmt);
    if (res == MYSQL_NO_DATA)
    {
        fetched = true;
        return false;
    }
    else if (res != 0)
    {
        throw std::runtime_error(fmt::format("MySQLStmt::step: {} (Res {})", mysql_stmt_error(stmt), res));
    }
    ++steps;
    return true;
}

bool MySQLStmt::next()
{
    return step();
}

bool MySQLStmt::done()
{
    return fetched;
}

Row MySQLStmt::fetch()
{
    if (fetched)
    {
        throw std::runtime_error("MySQLStmt::fetch: No more rows");
    }
    IF_ENDBG dbLogger.debug("MySQLStmt::fetch: Fetching row...");
    Row row(resultHeader);
    for (auto& col : resultValues)
    {
        auto v = ReceiverToAny(col);
        row.push_back(v);
        IF_ENDBG dbLogger.debug(
            "MySQLStmt::fetch: Fetched column `{}`, type {}, value {}",
            col.field.name, Any::type2str(v.type), v.get<std::string>());
    }
    return row;
}

Stmt& MySQLStmt::fetchAll(std::function<bool(const Row&)> cb)
{
    if (!done())
    {
        do
        {
            if (!cb(fetch()))
            {
                break;
            }
        } while (step());
    }
    return *this;
}

ResultSet MySQLStmt::fetchAll()
{
    ResultSet result;
    fetchAll([&result](const Row& row) {
        result.push_back(row); return true;
    });
    dbLogger.debug("MySQLStmt::fetchAll: Fetched {} rows", result.size());
    return result;
}

Stmt& MySQLStmt::reexec()
{
    if (mysql_stmt_reset(stmt))
    {
        throw std::runtime_error("MySQLStmt::reexec: " + std::string(mysql_stmt_error(stmt)));
    }
    execute();
    return *this;
}

Stmt& MySQLStmt::clear()
{
    if (query.empty())
    {
        throw std::runtime_error("MySQLStmt::clear: No query");
    }
    close();
    *this = *(MySQLStmt*)create(session, query).get();
    return *this;
}

void MySQLStmt::close()
{
    if (metadata)
    {
        mysql_free_result(metadata);
        metadata = nullptr;
    }
    if (stmt)
    {
        // CRASH!?
        //mysql_stmt_close(stmt);
        //stmt = nullptr;
    }
    if (params) params.reset();
    if (result) result.reset();
    if (resultHeader) resultHeader.reset();
    totalParamsCount = 0;
    boundParamsCount = 0;
    paramValues  = {};
    resultValues = {};
    paramIndexes = {};
    boundIndexes = {};
    steps = 0;
    fetched = false;
}

uint64_t MySQLStmt::getAffectedRows() const
{
    return mysql_stmt_affected_rows(stmt);
}

uint64_t MySQLStmt::getInsertId() const
{
    return mysql_stmt_insert_id(stmt);
}

int MySQLStmt::getUnboundParams() const
{
    return totalParamsCount - boundParamsCount;
}

int MySQLStmt::getBoundParams() const
{
    return boundParamsCount;
}

int MySQLStmt::getParamsCount() const
{
    return totalParamsCount;
}

DBType MySQLStmt::getType() const
{
    return DBType::MySQL;
}

SharedPointer<Stmt> MySQLStmt::create(const std::weak_ptr<Session>& session, const std::string& sql)
{
    auto& s = session.lock();
    if (!s || s->getType() != DBType::MySQL)
    {
        throw std::invalid_argument("MySQLStmt::create: Session is invalid");
    }
    auto raw = (MySQLSession*)s.get();
    auto stmt = mysql_stmt_init(raw->conn);
    if (!stmt)
    {
        throw std::runtime_error("MySQLStmt::create: " + s->getLastError());
    }
    auto query = sql;
    auto params = ParseStmtParams(query);
    if (raw->debugOutput && !params.empty())
    {
        dbLogger.debug("MySQLStmt::create: Parsed named parameters in query: ");
        dbLogger.debug("MySQLStmt::create: - SQL without named parameters: {}", query);
        for (auto& [k, v] : params)
        {
            dbLogger.debug("MySQLStmt::create: - {}: {}", k, v);
        }
    }
    auto res = mysql_stmt_prepare(stmt, query.c_str(), query.size());
    if (res)
    {
        throw std::runtime_error("MySQLStmt::create: " + std::string(mysql_stmt_error(stmt)));
    }
    auto result = new MySQLStmt(stmt, session);
    result->query = sql;
    result->paramIndexes = params;
    result->setDebugOutput(raw->debugOutput);
    if (raw->debugOutput) dbLogger.debug("MySQLStmt::create: Prepared > " + query);
    auto shared = SharedPointer<Stmt>(result);
    result->self = shared;
    return shared;
}

} // namespace DB