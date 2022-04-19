#include <DB/Session.h>
#include <LoggerAPI.h>
#include <DB/Impl/SQLite/Session.h>

namespace DB
{

Logger dbLogger("LLDB");

void Session::setDebugOutput(bool enable)
{
    debugOutput = enable;
}

bool Session::changeUser(const std::string& user, const std::string& password)
{
    throw std::runtime_error("Session::changeUser: Not implemented");
}

bool Session::changeDatabase(const std::string& database)
{
    throw std::runtime_error("Session::changeDatabase: Not implemented");
}

ResultSet Session::query(const std::string& query)
{
    bool headerSet = false;
    ResultSet result;
    this->query(query, [&](const Row& row) {
        if (!headerSet)
        {
            result.header = row.header;
            headerSet = true;
        }
        result.push_back(row);
        return true;
    });
    IF_ENDBG
    {
        dbLogger.debug("Session::query: Results >");
        for (auto& str : SplitStrWithPattern(result.toTableString(), "\n"))
        {
            dbLogger.debug(str);
        }
    }
    return result;
}

std::string Session::getLastError() const
{
    throw std::runtime_error("Session::getLastError: Not implemented");
}

void Session::destroy()
{
    if (isOpen())
    {
        close();
    }
    DB::destroy(this);
}

Stmt& Session::operator<<(const std::string& query)
{
    return prepare(query);
}

Session& Session::create(const ConnParams& params)
{
    ConnParams copy = params;
    auto type = copy.getScheme();
    std::transform(type.begin(), type.end(), type.begin(), ::tolower);
    if (type == "sqlite" || type == "sqlite3" || type == "file")
    {
        return *new SQLiteSession(params);
    }
    else
    {
        throw std::runtime_error("Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type)
{
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession();
        default:
            throw std::runtime_error("Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type, const ConnParams& params)
{
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession(params);
        default:
            throw std::runtime_error("Session::create: Unknown/Unsupported database type");
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
            throw std::runtime_error("Session::create: Unknown/Unsupported database type");
    }
}
Session& Session::create(DBType type, const std::string& path)
{
    switch (type)
    {
        case DBType::SQLite:
            return *new SQLiteSession(path);
        default:
            throw std::runtime_error("Session::create: Unknown/Unsupported database type");
    }
}

} // namespace DB