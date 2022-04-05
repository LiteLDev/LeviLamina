#include <DB/Session.h>
#include <LoggerAPI.h>
#include <DB/Impl/SQLite/Session.h>

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
    return result;
}
void Session::destroy()
{
    DB::destroy(this);
}

Stmt& Session::operator<<(const std::string& query)
{
    return prepare(query);
}

Session& Session::create(const ConnParams& params)
{
    auto type = params.at("type").get<std::string>();
    std::transform(type.begin(), type.end(), type.begin(), ::tolower);
    if (type == "sqlite" || type == "sqlite3")
    {
        return *new SQLiteSession(params);
    }
    else
    {
        throw std::runtime_error("$Core$ Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type)
{
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession();
        default:
            throw std::runtime_error("$Core$ Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type, const ConnParams& params)
{
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession(params);
        default:
            throw std::runtime_error("$Core$ Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type, const std::string& host, uint16_t port, const std::string& user, const std::string& password, const std::string& database)
{
    ConnParams params(
        {{"host", host},
         {"port", port},
         {"user", user},
         {"password", password},
         {"database", database}});
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession(params);
        default:
            throw std::runtime_error("$Core$ Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type, const std::string& path)
{
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession(path);
        default:
            throw std::runtime_error("$Core$ Session::create: Unknown/Unsupported database type");
    }
}

} // namespace DB