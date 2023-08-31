#pragma once
#include <vector>
//#define LLDB_DEBUG_MODE

namespace DB
{

enum class DBType : int8_t
{
    None,
    SQLite,
    MySQL,
};

struct Date
{
    int32_t year;
    int32_t month;
    int32_t day;
};

struct Time
{
    int32_t hour;
    int32_t minute;
    int32_t second;
    int32_t timezone = -1;
};

struct DateTime
{
    Date date;
    Time time;
};

struct Decimal
{
    int64_t value;
    int32_t scale;
};

using ByteArray = std::vector<uint8_t>;

} // namespace DB