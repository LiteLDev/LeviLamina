#pragma once
#include <Global.h>

namespace DB
{

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

class Any
{
    union Value
    {
        bool boolean;
        int64_t integer;
        uint64_t uinteger;
        double floating;
        std::string* string;
        Date* date;
        Time* time;
        DateTime* datetime;
    } value;
    enum class Type
    {
        Null,
        Boolean,
        Integer,
        UInteger,
        Floating,
        String,
        Date,
        Time,
        DateTime
    } type = Type::Null;

public:
    /**
     * @brief Construct a new Any object with null value.
     * 
     */
    LIAPI Any();
    /**
     * @brief Construct a new Any object with boolean value.
     * 
     * @param v The boolean value
     */
    LIAPI Any(bool v);
    /**
     * @brief Construct a new Any object with integer value.
     * 
     * @param v The integer value
     */
    LIAPI Any(int64_t v);
    /**
     * @brief Construct a new Any object with unsigned integer value.
     * 
     * @param v The unsigned integer value
     */
    LIAPI Any(uint64_t v);
    /**
     * @brief Construct a new Any object with floating value.
     * 
     * @param v The floating value
     */
    LIAPI Any(double v);
    /**
     * @brief Construct a new Any object with string value.
     * 
     * @param v The string value
     */
    LIAPI Any(const std::string& v);
    /**
     * @brief Construct a new Any object with date value.
     * 
     * @param v The Date object
     */
    LIAPI Any(const Date& v);
    /**
     * @brief Construct a new Any object with time value.
     * 
     * @param v The Time object
     */
    LIAPI Any(const Time& v);
    /**
     * @brief Construct a new Any object with date time value.
     * 
     * @param v The DateTime object
     */
    LIAPI Any(const DateTime& v);
    /// Destructor
    ~Any();

};

} // namespace DB