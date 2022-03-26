#pragma once
#include "../Global.h"
#include "../Utils/StringHelper.h"

/**
 * @brief Convert T to R
 * 
 * @tparam R Return type
 * @tparam T Input type
 * @param v  Input value
 * @return R Result
 */
template <typename R, typename T>
inline R any_to(T v) {
    return (R)v;
}
template <typename T>
inline std::string any_to(T v)
{
    return std::to_string(v);
}
template <typename T>
inline std::string any_to(bool v)
{
    return v ? "true" : "false";
}
template <>
inline const char* any_to(const std::string& str) {
    return str.c_str();
}
template <>
inline char* any_to(const std::string& str) {
    return const_cast<char*>(str.c_str());
}
template <>
inline std::wstring any_to(const std::string& str) {
    return str2wstr(str);
}
template <>
inline const wchar_t* any_to(const std::string& str) {
    return str2wstr(str).c_str();
}
template <>
inline wchar_t* any_to(const std::string& str) {
    return const_cast<wchar_t*>(str2wstr(str).c_str());
}


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

/**
 * @brief Any class to store some SQL basic types
 * 
 */
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

    template <typename T>
    inline static constexpr bool is_cpp_basic_type() {
        return std::is_same<T, bool>::value ||
            std::is_same<T, int64_t>::value ||
            std::is_same<T, uint64_t>::value ||
            std::is_same<T, double>::value ||
            std::is_same<T, std::string>::value ||
            std::is_same<T, Date>::value ||
            std::is_same<T, Time>::value ||
            std::is_same<T, DateTime>::value;
    }

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

    /**
     * @brief Get if the value is null.
     * 
     */
    bool is_null() const;
    /**
     * @brief Get if the value is boolean.
     * 
     */
    bool is_boolean() const;
    /**
     * @brief Get if the value is (unsigned) integer.
     * 
     */
    bool is_integer() const;
    /**
     * @brief Get if the value is unsigned integer.
     * 
     */
    bool is_uinteger() const;
    /**
     * @brief Get if the value is floating.
     * 
     */
    bool is_floating() const;
    /**
     * @brief Get if the value is string.
     * 
     */
    bool is_string() const;
    /**
     * @brief Get if the value is date.
     * 
     */
    bool is_date() const;
    /**
     * @brief Get if the value is time.
     * 
     */
    bool is_time() const;
    /**
     * @brief Get if the value is date time.
     * 
     */
    bool is_datetime() const;
    /**
     * @brief Get if the value is floating or (unsigned) integer.
     * 
     */
    bool is_number() const;

    /**
     * @brief Get the value as T.
     * 
     * @tparam T The type of the value
     * @return T The value
     */
    template <typename T>
    inline T get() const {
        if (type == Type::Boolean) {
            if constexpr (is_cpp_basic_type<T>()) {
                return (T)value.boolean;
            }
            return ::any_to<T>(value.boolean);
        }
        if (type == Type::Integer) {
            if constexpr (is_cpp_basic_type<T>()) {
                return (T)value.integer;
            }
            return ::any_to<T>(value.integer);
        }
        if (type == Type::UInteger) {
            if constexpr (is_cpp_basic_type<T>()) {
                return (T)value.uinteger;
            }
            return ::any_to<T>(value.uinteger);
        }
        if (type == Type::Floating) {
            if constexpr (is_cpp_basic_type<T>()) {
                return (T)value.floating;
            }
            return ::any_to<T>(value.floating);
        }
        if (type == Type::String) {
            if constexpr (std::is_same<T, std::string>::value) {
                return (T)*value.string;
            }
            return ::any_to<T>(*value.string);
        }
        if (type == Type::Date) {
            if constexpr (std::is_same_v<T, Date>::value) {
                return (T)*value.date;
            }
            return ::any_to<T>(*value.date);
        }
        if (type == Type::Time) {
            if constexpr (std::is_same_v<T, Time>::value) {
                return (T)*value.time;
            }
            return ::any_to<T>(*value.time);
        }
        if (type == Type::DateTime) {
            if constexpr (std::is_same_v<T, DateTime>::value) {
                return (T)*value.datetime;
            }
            return ::any_to<T>(*value.datetime);
        }
        return T();
    }

};

} // namespace DB