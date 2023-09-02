#pragma once
#include <vector>
// #define LLDB_DEBUG_MODE

namespace DB {

enum class DBType : schar {
    None,
    SQLite,
    MySQL,
};

struct Date {
    int year;
    int month;
    int day;
};

struct Time {
    int hour;
    int minute;
    int second;
    int timezone = -1;
};

struct DateTime {
    Date date;
    Time time;
};

struct Decimal {
    int64 value;
    int   scale;
};

using ByteArray = std::vector<uchar>;

} // namespace DB