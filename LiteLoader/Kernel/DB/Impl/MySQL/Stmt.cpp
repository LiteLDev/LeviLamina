#include <third-party/mysql/mysql.h>
#include <DB/Impl/MySQL/Stmt.h>
#include <Utils/StringReader.h>
#include <LoggerAPI.h>

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

std::unordered_map<std::string, int> ParseStmtParams(const std::string& query)
{
    StringReader reader(query);
    std::unordered_map<std::string, int> result;
    bool inString = false;
    int delta = 0;
    int cur = 0;
    auto q = query;
    while (reader.isValid())
    {
        char c = reader.read();
        if (c == '\'' || c == '"')
        {
            inString = !inString;
        }
        else if (!inString && (c == '?' || c == '$' || c == ':'))
        {
            q[reader.getPos() - 1 - delta] = '?'; // Replace $ or : with ?
            auto name = reader.readVariableName(); // Read parameter name
            if (name.empty()) // No parameter name
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
            q = q.substr(0, reader.getPos() - name.length() - delta) + q.substr(reader.getPos() - delta);
            delta += name.size();
        }
    }
    return result;
}

MySQLStmt::MySQLStmt(MYSQL_STMT* stmt)
    : stmt(stmt)
{
    totalParamsCount = mysql_stmt_param_count(stmt);
    if (totalParamsCount)
        params.reset(new MYSQL_BIND[totalParamsCount]);
    else
    {
        mysql_stmt_execute(stmt); // Execute without params
        mysql_stmt_fetch(stmt);
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

MySQLStmt::~MySQLStmt()
{
}

Stmt& MySQLStmt::bind(const Any& value, int index)
{
    if (index < 0 || index > totalParamsCount)
    {
        throw std::invalid_argument("SQLiteStmt::bind: Invalid argument `index`");
    }
    if (getUnboundParams() == 0)
    {
        throw std::runtime_error("SQLiteStmt::bind: All the parameters are already bound");
    }
    paramValues.push_back(value); // Save the value or it will be lost
    auto& param = paramValues.back();
    switch (param.type)
    {
    case Any::Type::Null:
        params[index].buffer_type = MYSQL_TYPE_NULL;
        break;
    case Any::Type::Boolean:
        params[index].buffer_type = MYSQL_TYPE_TINY;
        params[index].buffer = &param.value.boolean;
        params[index].is_unsigned = true;
        break;
    case Any::Type::Integer:
        params[index].buffer_type = MYSQL_TYPE_LONGLONG;
        params[index].buffer = &param.value.integer;
        params[index].is_unsigned = false;
        params[index].is_null = 0;
        params[index].length = 0;
        break;
    case Any::Type::UInteger:
        params[index].buffer_type = MYSQL_TYPE_LONGLONG;
        params[index].buffer = (int64_t*)&param.value.uinteger;
        params[index].is_unsigned = true;
        params[index].is_null = 0;
        params[index].length = 0;
        break;
    case Any::Type::Floating:
        params[index].buffer_type = MYSQL_TYPE_DOUBLE;
        params[index].buffer = &param.value.floating;
        params[index].is_unsigned = false;
        params[index].is_null = 0;
        params[index].length = 0;
        break;
    case Any::Type::String:
        params[index].buffer_type = MYSQL_TYPE_STRING;
        params[index].buffer = param.value.string->_Unchecked_begin();
        params[index].is_null = 0;
        paramLengths.push_back((uint32_t)param.value.string->size());
        params[index].length = (unsigned long*)&paramLengths.back();
        break;
    case Any::Type::Date:
    case Any::Type::Time:
    case Any::Type::DateTime:
        params[index].buffer_type = MYSQL_TYPE_TIME;
        dateParams.push_back(param.get<MYSQL_TIME>());
        params[index].buffer = &dateParams.back();
        params[index].is_null = 0;
        params[index].length = 0;
        break;
    case Any::Type::Blob:
        params[index].buffer_type = MYSQL_TYPE_BLOB;
        params[index].buffer = (char*)param.value.blob->_Unchecked_begin();
        params[index].is_null = 0;
        paramLengths.push_back((uint32_t)param.value.blob->size());
        params[index].length = (unsigned long*)&paramLengths.back();
        break;
    default:
        throw std::runtime_error("SQLiteStmt::bind: Unsupported type");
    }
    boundIndexes.push_back(index);
    boundParamsCount++;
    if (getUnboundParams() == 0)
    {
        mysql_stmt_bind_param(stmt, params.get());
        mysql_stmt_execute(stmt);
        mysql_stmt_fetch(stmt);
    }
    return *this;
}

Stmt& MySQLStmt::bind(const Any& value, const std::string& name)
{
    if (!paramIndexes.count(name))
    {
        throw std::invalid_argument("SQLiteStmt::bind: Parameter name `" + name + "` not found");
    }
    return bind(value, paramIndexes[name]);
}

Stmt& MySQLStmt::bind(const Any& value)
{
    return bind(value, getNextParamIndex());
}

bool MySQLStmt::step()
{
    auto res = mysql_stmt_fetch(stmt);
    if (res == MYSQL_NO_DATA)
    {
        return false;
    }
    else if (res != 0)
    {
        throw std::runtime_error("SQLiteStmt::step: " + std::string(mysql_stmt_error(stmt)));
    }
    return true;
}

bool MySQLStmt::next()
{
    return step();
}

bool MySQLStmt::done()
{

}

} // namespace DB