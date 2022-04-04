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
                throw std::invalid_argument("$Core$ ConnParams::ConnParams: key must be string");
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
}
ConnParams::ConnParams(const std::initializer_list<std::pair<std::string, Any>>& list)
    : std::unordered_map<std::string, Any>()
{
    for (auto& item : list)
    {
        insert(item);
    }
}

ConnParams::ConnParams(const std::string& str)
    : std::unordered_map<std::string, Any>()
{
    auto res1 = SplitStrWithPattern(str, "://");
    if (res1.size() >= 2)
    {
        insert({"protocol", res1[0]});
    }
    auto res2 = SplitStrWithPattern(res1[2], "?");
    auto addr = res2[0];
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

} // namespace DB