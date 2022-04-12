#pragma once
#include <vector>

namespace DB
{

enum class DBType : char
{
    None,
    SQLite,
    MySQL,
};

struct Date
{
    int year;
    int month;
    int day;
};

struct Time
{
    int hour;
    int minute;
    int second;
    int timezone = -1;
};

struct DateTime
{
    Date date;
    Time time;
};

using ByteArray = std::vector<unsigned char>;

} // namespace DB