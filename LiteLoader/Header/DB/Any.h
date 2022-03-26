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
inline R any_to(T v)
{
    return (R)v;
}
template <>
inline std::string any_to(bool v)
{
    return v ? "true" : "false";
}
template <>
inline std::string any_to(int64_t v)
{
    return std::to_string(v);
}
template <>
inline std::string any_to(uint64_t v)
{
    return std::to_string(v);
}
template <>
inline std::string any_to(double v)
{
    return std::to_string(v);
}
template <>
inline const char* any_to(const std::string& str)
{
    return str.c_str();
}
template <>
inline char* any_to(const std::string& str)
{
    return const_cast<char*>(str.c_str());
}
template <>
inline std::wstring any_to(const std::string& str)
{
    return str2wstr(str);
}
template <>
inline bool any_to(const std::string& str)
{
    return str == "true" || str == "1";
}
template <>
inline char any_to(const std::string& str)
{
    if (str.size() == 1)
    {
        return str[0];
    }
    return (char)std::stoi(str);
}
template <>
inline unsigned char any_to(const std::string& str)
{
    return (unsigned char)std::stoi(str);
}
template <>
inline short any_to(const std::string& str)
{
    return (short)std::stoi(str);
}
template <>
inline unsigned short any_to(const std::string& str)
{
    return (unsigned short)std::stoi(str);
}
template <>
inline int any_to(const std::string& str)
{
    return std::stoi(str);
}
template <>
inline unsigned int any_to(const std::string& str)
{
    return std::stoul(str);
}
template <>
inline long any_to(const std::string& str)
{
    return std::stol(str);
}
template <>
inline unsigned long any_to(const std::string& str)
{
    return std::stoul(str);
}
template <>
inline int64_t any_to(const std::string& str)
{
    return std::stoll(str);
}
template <>
inline uint64_t any_to(const std::string& str)
{
    return std::stoull(str);
}
template <>
inline float any_to(const std::string& str)
{
    return std::stof(str);
}
template <>
inline double any_to(const std::string& str)
{
    return std::stod(str);
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

} // namespace DB

template <>
inline std::string any_to(DB::Date v)
{
    return std::to_string(v.year) + "-" + std::to_string(v.month) + "-" + std::to_string(v.day);
}
template <>
inline std::string any_to(DB::Time v)
{
    return std::to_string(v.hour) + ":" + std::to_string(v.minute) + ":" + std::to_string(v.second);
}
template <>
inline std::string any_to(DB::DateTime v)
{
    return any_to<std::string>(v.date) + " " + any_to<std::string>(v.time);
}

namespace DB
{

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
    inline static constexpr bool is_cpp_basic_type()
    {
        return std::is_same<T, bool>::value ||
               std::is_same<T, char>::value ||
               std::is_same<T, unsigned char>::value ||
               std::is_same<T, short>::value ||
               std::is_same<T, unsigned short>::value ||
               std::is_same<T, int>::value ||
               std::is_same<T, unsigned int>::value ||
               std::is_same<T, int64_t>::value ||
               std::is_same<T, uint64_t>::value ||
               std::is_same<T, float>::value ||
               std::is_same<T, double>::value;
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
     * @brief Construct a new Any object with int64 value.
     * 
     * @param v The integer value
     */
    LIAPI Any(int64_t v);
    /**
     * @brief Construct a new Any object with uint64 value.
     * 
     * @param v The unsigned integer value
     */
    LIAPI Any(uint64_t v);
    /**
     * @brief Construct a new Any object with double value.
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
    /**
     * @brief Construct a new Any object with int8(char) value.
     * 
     * @param v The char value
     */
    LIAPI Any(char v);
    /**
     * @brief Construct a new Any object with uint8(unsigned char) value.
     * 
     * @param v The unsigned char value
     */
    LIAPI Any(unsigned char v);
    /**
     * @brief Construct a new Any object with int16(short) value.
     * 
     * @param v The short value
     */
    LIAPI Any(short v);
    /**
     * @brief Construct a new Any object with uint16(unsigned short) value.
     * 
     * @param v The unsigned short value
     */
    LIAPI Any(unsigned short v);
    /**
     * @brief Construct a new Any object with int32(int) value.
     * 
     * @param v The int value
     */
    LIAPI Any(int v);
    /**
     * @brief Construct a new Any object with uint32(unsigned int) value.
     * 
     * @param v The unsigned int value
     */
    LIAPI Any(unsigned int v);
    /**
     * @brief Construct a new Any object with long value.
     * 
     * @param v The long value
     */
    LIAPI Any(long v);
    /**
     * @brief Construct a new Any object with unsigned long value.
     * 
     * @param v The unsigned long value
     */
    LIAPI Any(unsigned long v);
    /**
     * @brief Construct a new Any object with float value.
     * 
     * @param v The float value
     */
    LIAPI Any(float v);

    /// Destructor
    ~Any();

    /**
     * @brief Get if the value is null.
     * 
     */
    LIAPI bool is_null() const;
    /**
     * @brief Get if the value is boolean.
     * 
     */
    LIAPI bool is_boolean() const;
    /**
     * @brief Get if the value is (unsigned) integer.
     * 
     */
    LIAPI bool is_integer() const;
    /**
     * @brief Get if the value is unsigned integer.
     * 
     */
    LIAPI bool is_uinteger() const;
    /**
     * @brief Get if the value is floating.
     * 
     */
    LIAPI bool is_floating() const;
    /**
     * @brief Get if the value is string.
     * 
     */
    LIAPI bool is_string() const;
    /**
     * @brief Get if the value is date.
     * 
     */
    LIAPI bool is_date() const;
    /**
     * @brief Get if the value is time.
     * 
     */
    LIAPI bool is_time() const;
    /**
     * @brief Get if the value is date time.
     * 
     */
    LIAPI bool is_datetime() const;
    /**
     * @brief Get if the value is floating or (unsigned) integer.
     * 
     */
    LIAPI bool is_number() const;

    /**
     * @brief Get the value as T.
     * 
     * @tparam T The type of the value
     * @return T The value
     * @par Custom type conversion
     * Define a custom type conversion function for the type T
     * @code
     * template <>
     * inline MyClass any_to(int64_t v) {
     *     return MyClass(v);
     * }
     * @endcode
     * @see any_to
     */
    template <typename T>
    inline T get() const
    {
        is_cpp_basic_type<char>();
        switch (type)
        {
            case Type::Boolean:
                if constexpr (is_cpp_basic_type<T>())
                {
                    return (T)value.boolean;
                }
                return ::any_to<T>(value.boolean);
            case Type::Integer:
                if constexpr (is_cpp_basic_type<T>())
                {
                    return (T)value.integer;
                }
                return ::any_to<T>(value.integer);
            case Type::UInteger:
                if constexpr (is_cpp_basic_type<T>())
                {
                    return (T)value.uinteger;
                }
                return ::any_to<T>(value.uinteger);
            case Type::Floating:
                if constexpr (is_cpp_basic_type<T>())
                {
                    return (T)value.floating;
                }
                return ::any_to<T>(value.floating);
            case Type::String:
                if constexpr (std::is_same<T, std::string>::value)
                {
                    return (T)*value.string;
                }
                return ::any_to<T>(*value.string);
            case Type::Date:
                if constexpr (std::is_same<T, Date>::value)
                {
                    return (T)*value.date;
                }
                return ::any_to<T>(*value.date);
            case Type::Time:
                if constexpr (std::is_same<T, Time>::value)
                {
                    return (T)*value.time;
                }
                return ::any_to<T>(*value.time);
            case Type::DateTime:
                if constexpr (std::is_same<T, DateTime>::value)
                {
                    return (T)*value.datetime;
                }
                return ::any_to<T>(*value.datetime);
        }
        return T();
    }
};

} // namespace DB