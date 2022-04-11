#include <DB/ConnParams.h>
#include <Utils/StringHelper.h>

namespace DB
{

ConnParams::ConnParams(const std::initializer_list<Any>& list)
    : std::unordered_map<std::string, Any>()
{
    bool key = true;
    std::string keyName;
    for (auto& item : list)
    {
        if (key)
        {
            if (item.is_string())
            {
                throw std::invalid_argument("ConnParams::ConnParams: Key must be string");
            }
            keyName = item.get<std::string>();
            key = false;
        }
        else
        {
            insert({keyName, item});
            key = true;
        }
    }
    auto host = getHost();
    if (host.find(':') != std::string::npos)
    {
        host = host.substr(0, host.find_last_of(':'));
        auto port = host.substr(host.find_last_of(':') + 1);
        (*this)["host"] = host;
        (*this)["port"] = std::stoi(port);
    }
}
ConnParams::ConnParams(const std::initializer_list<std::pair<std::string, Any>>& list)
    : std::unordered_map<std::string, Any>()
{
    for (auto& item : list)
    {
        insert(item);
    }
    auto host = getHost();
    if (host.find(':') != std::string::npos)
    {
        host = host.substr(0, host.find_last_of(':'));
        auto port = host.substr(host.find_last_of(':') + 1);
        (*this)["host"] = host;
        (*this)["port"] = std::stoi(port);
    }
}
ConnParams::ConnParams(const std::string& str)
    : std::unordered_map<std::string, Any>()
{
    if (str.find("://") == std::string::npos)
    {
        insert({"path", str});
        return;
    }
    raw = str;
    auto res1 = SplitStrWithPattern(str, "://");
    if (res1.size() >= 2)
    {
        insert({"protocol", res1[0]});
    }
    auto res2 = SplitStrWithPattern(res1[2], "?");
    auto& addr = res2[0];
    auto res3 = SplitStrWithPattern(addr, ":");
    if (res3.size() == 2)
    {
        insert({"port", std::stoi(res3[1])});
    }
    insert({"host", res3[0]});
    if (res2.size() >= 2)
    {
        auto params = SplitStrWithPattern(res2[1], "&");
        for (auto& param : params)
        {
            auto res4 = SplitStrWithPattern(param, "=");
            if (res4.size() == 2)
            {
                insert({res4[0], res4[1]});
            }
        }
    }
}
ConnParams::ConnParams(const char* str)
    : std::unordered_map<std::string, Any>()
{
    if (std::string(str).find("://") == std::string::npos)
    {
        insert({"path", str});
        return;
    } 
    raw = str;
    auto res1 = SplitStrWithPattern(str, "://");
    if (res1.size() >= 2)
    {
        insert({"protocol", res1[0]});
    }
    auto res2 = SplitStrWithPattern(res1[2], "?");
    auto& addr = res2[0];
    auto res3 = SplitStrWithPattern(addr, ":");
    if (res3.size() == 2)
    {
        insert({"port", std::stoi(res3[1])});
    }
    insert({"host", res3[0]});
    if (res2.size() >= 2)
    {
        auto params = SplitStrWithPattern(res2[1], "&");
        for (auto& param : params)
        {
            auto res4 = SplitStrWithPattern(param, "=");
            if (res4.size() == 2)
            {
                insert({res4[0], res4[1]});
            }
        }
    }
}

std::string ConnParams::getHost()
{
    return get<std::string>({"host", "hostname", "server", "server_name", "ip", "address"}, true);
}

uint16_t ConnParams::getPort()
{
    return get<uint16_t>({"port", "port_number", "port_num", "port_id", "portid"}, true, 0);
}

std::string ConnParams::getUsername()
{
    return get<std::string>({"user", "username", "user_name", "usr", "usrname"}, true);
}

std::string ConnParams::getPassword()
{
    return get<std::string>({"password", "pass", "passwd", "pass_word"}, true);
}

std::string ConnParams::getDatabase()
{
    return get<std::string>({"database", "db", "db_name", "dbname"}, true);
}

std::string ConnParams::getPath()
{
    return get<std::string>({"path", "file", "file_name", "filename"}, true);
}

std::string ConnParams::getRaw()
{
    return raw;
}

} // namespace DB