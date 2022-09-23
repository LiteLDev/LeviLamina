#pragma once
#include "llapi/Global.h"
#include "llapi/db/Types.h"

#pragma region AnyConversion

namespace DB {
// Declare Any class
class Any;
} // namespace DB

/**
 * @brief Function to convert Any to T.
 *
 * @tparam T The type to convert to
 * @param v  The Any object
 * @return T The converted value
 */
template <typename T>
inline T any_to(const DB::Any& v) {
    throw std::bad_cast();
}

template <typename T>
inline std::vector<DB::Any> to_any_container(const std::vector<T>& v);
template <typename T>
inline std::set<DB::Any> to_any_container(const std::set<T>& v);
template <typename T>
inline std::list<DB::Any> to_any_container(const std::list<T>& v);
template <typename T>
inline std::unordered_set<DB::Any> to_any_container(const std::unordered_set<T>& v);
template <typename K, typename V>
inline std::map<K, DB::Any> to_any_container(const std::map<K, V>& v);
template <typename K, typename V>
inline std::unordered_map<K, DB::Any> to_any_unordered_map(const std::unordered_map<K, V>& v);

#pragma endregion

namespace DB {


class Any {

public:
    union Value {
        bool boolean;
        int64_t integer;
        uint64_t uinteger;
        double floating;
        std::string* string;
        Date* date;
        Time* time;
        DateTime* datetime;
        ByteArray* blob;
    } value; ///< Value

    enum class Type : char {
        Null = 0,
        Boolean = 1,
        Integer = 2,
        UInteger = 3,
        Floating = 4,
        String = 5,
        Date = 6,
        Time = 7,
        DateTime = 8,
        Blob = 9
    } type = Type::Null; ///< Type of the value

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
     * @brief Construct a new Any object with const char* value.
     *
     * @param v The const char* value
     */
    LIAPI Any(const char* v);
    /**
     * @brief Construct a new Any object with char* value.
     *
     * @param v   The char* value
     * @param len The length of the char* value
     */
    LIAPI Any(char* v, size_t len);
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
    /**
     * @brief Construct a new Any object with byte array value.
     *
     * @param v The byte array value
     */
    LIAPI Any(const ByteArray& v);
    /// Copy constructor
    LIAPI Any(const Any& v);
    /// Copy assignment operator
    LIAPI Any& operator=(const Any& v);

    /// Destructor
    LIAPI ~Any();

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
     * @brief Get if the value is blob.
     *
     */
    LIAPI bool is_blob() const;
    /**
     * @brief Get if the value is floating or (unsigned) integer.
     *
     */
    LIAPI bool is_number() const;

    /**
     * @brief Get the number value as T
     *
     * @tparam T             The C++ basic number type to convert to, such as int, long, double, etc.
     * @return T             The value
     * @throws std::bad_cast If the value cannot be converted to T or the value is not a number
     * @note   You can use Any::is_number() to check if the value is a number before calling this function.
     * @see    is_number()
     */
    template <typename T>
    inline T get_number() const {
        switch (type) {
#if !defined(DBANY_NO_NULL_CONVERSION)
            case Type::Null:
                return 0;
#endif
            case Type::Boolean:
                return static_cast<T>(value.boolean);
            case Type::Integer:
            case Type::UInteger:
                return static_cast<T>(value.integer);
            case Type::Floating:
                return static_cast<T>(value.floating);
            case Type::String:
            case Type::Date:
            case Type::Time:
            case Type::DateTime:
            case Type::Blob:
            default:
                throw std::bad_cast();
        }
    }

    /**
     * @brief Get the value as T.
     *
     * @tparam T  The type of the value
     * @return T  The value
     * @throws std::bad_cast  If the value cannot be converted to T
     * @par Custom Type Conversion
     * Define a custom type conversion function for the type T
     * @code
     * template <>
     * MyClass any_to(const Any& v) {
     *     MyClass result;
     *     switch (v.type) {
     *     case Any::Type::String:
     *         result.a = *v.value.string;
     *     default:
     *         throw std::bad_cast();
     *     }
     *     return result;
     * }
     * @endcode
     * @note  You can use `#define DBANY_NO_NULL_CONVERSION` to disable null conversion.
     *        (throw an exception when trying converting from a null type value)
     * @see any_to
     */
    template <typename T>
    inline T get() const {
        return any_to<T>(*this);
    }
    /**
     * @brief Get the value as string
     *
     * @tparam T     = bool
     * @return bool  The value
     * @throws std::bad_cast  If the value cannot be converted to string
     */
    template <>
    inline bool get() const {
        switch (type) {
#if !defined(DBANY_NO_NULL_CONVERSION)
            case Type::Null:
                return false;
#endif
            case Type::Boolean:
                return value.boolean;
            case Type::Integer:
            case Type::UInteger:
            case Type::Floating:
                return (bool)value.integer;
            case Type::String:
            case Type::Date:
            case Type::Time:
            case Type::DateTime:
            case Type::Blob:
            default:
                throw std::bad_cast();
        }
    }
    /**
     * @brief Get the value as char
     *
     * @tparam T     = char
     * @return char  The value
     * @throws std::bad_cast  If the value cannot be converted to char
     */
    template <>
    inline char get() const {
        return get_number<char>();
    }
    /**
     * @brief Get the value as unsigned char
     *
     * @tparam T              = unsigned char
     * @return unsigned char  The value
     * @throws std::bad_cast  If the value cannot be converted to unsigned char
     */
    template <>
    inline unsigned char get() const {
        return get_number<unsigned char>();
    }
    /**
     * @brief Get the value as short
     *
     * @tparam T      = short
     * @return short  The value
     * @throws std::bad_cast  If the value cannot be converted to short
     */
    template <>
    inline short get() const {
        return get_number<short>();
    }
    /**
     * @brief Get the value as unsigned short
     *
     * @tparam T               = unsigned short
     * @return unsigned short  The value
     * @throws std::bad_cast   If the value cannot be converted to unsigned short
     */
    template <>
    inline unsigned short get() const {
        return get_number<unsigned short>();
    }
    /**
     * @brief Get the value as int
     *
     * @tparam T    = int
     * @return int  The value
     * @throws std::bad_cast  If the value cannot be converted to int
     */
    template <>
    inline int get() const {
        return get_number<int>();
    }
    /**
     * @brief Get the value as unsigned int
     *
     * @tparam T              = unsigned int
     * @return unsigned int   The value
     * @throws std::bad_cast  If the value cannot be converted to unsigned int
     */
    template <>
    inline unsigned int get() const {
        return get_number<unsigned int>();
    }
    /**
     * @brief Get the value as long
     *
     * @tparam T     = long
     * @return long  The value
     * @throws std::bad_cast  If the value cannot be converted to long
     */
    template <>
    inline long get() const {
        return get_number<long>();
    }
    /**
     * @brief Get the value as unsigned long
     *
     * @tparam T              = unsigned long
     * @return unsigned long  The value
     * @throws std::bad_cast  If the value cannot be converted to unsigned long
     */
    template <>
    inline unsigned long get() const {
        return get_number<unsigned long>();
    }
    /**
     * @brief Get the value as long long
     *
     * @tparam T              = long long
     * @return long long      The value
     * @throws std::bad_cast  If the value cannot be converted to long long
     */
    template <>
    inline long long get() const {
        return get_number<long long>();
    }
    /**
     * @brief Get the value as unsigned long long
     *
     * @tparam T                   = unsigned long long
     * @return unsigned long long  The value
     * @throws std::bad_cast       If the value cannot be converted to unsigned long long
     */
    template <>
    inline unsigned long long get() const {
        return get_number<unsigned long long>();
    }
    /**
     * @brief Get the value as double.
     *
     * @tparam T       = double
     * @return double  The value
     * @throws std::bad_cast  If the value cannot be converted to double
     */
    template <>
    inline double get() const {
        return get_number<double>();
    }
    /**
     * @brief Get the value as float.
     *
     * @tparam T      = float
     * @return float  The value
     * @throws std::bad_cast  If the value cannot be converted to float
     */
    template <>
    inline float get() const {
        return get_number<float>();
    }
    /**
     * @brief Get the value as string.
     *
     * @tparam T              = std::string
     * @return std::string    The value
     * @throws std::bad_cast  If the value cannot be converted to string
     */
    template <>
    std::string get() const {
        switch (type) {
#if !defined(DBANY_NO_NULL_CONVERSION)
            case Type::Null:
                return "";
#endif
            case Type::Boolean:
                return value.boolean ? "true" : "false";
            case Type::Integer:
                return std::to_string(value.integer);
            case Type::UInteger:
                return std::to_string(value.uinteger);
            case Type::Floating:
                return std::to_string(value.floating);
            case Type::String:
                return *value.string;
            case Type::Date:
                return std::to_string(value.date->year) + "-" +
                       std::to_string(value.date->month) + "-" +
                       std::to_string(value.date->day);
                break;
            case Type::Time:
                return std::to_string(value.time->hour) + ":" +
                       std::to_string(value.time->minute) + ":" +
                       std::to_string(value.time->second);
            case Type::DateTime:
                return std::to_string(value.datetime->date.year) + "-" +
                       std::to_string(value.datetime->date.month) + "-" +
                       std::to_string(value.datetime->date.day) + " " +
                       std::to_string(value.datetime->time.hour) + ":" +
                       std::to_string(value.datetime->time.minute) + ":" +
                       std::to_string(value.datetime->time.second);
            case Type::Blob:
                return std::string(value.blob->begin(), value.blob->end());
            default:
                throw std::bad_cast();
        }
    }
    /**
     * @brief Get the value as Date
     *
     * @tparam T         = DB::Date
     * @return DB::Date  The value
     * @throws std::bad_cast  If the value cannot be converted to DB::Date
     */
    template <>
    Date get() const {
        switch (type) {
            case Type::Date:
                return *value.date;
            case Type::DateTime:
                return value.datetime->date;
            case Type::String:
            case Type::Integer:
            case Type::UInteger:
            case Type::Floating:
            case Type::Time:
            case Type::Blob:
            default:
                throw std::bad_cast();
        }
    }
    /**
     * @brief Get the value as Time
     *
     * @tparam T         = DB::Time
     * @return DB::Time  The value
     * @throws std::bad_cast  If the value cannot be converted to DB::Time
     */
    template <>
    Time get() const {
        switch (type) {
            case Type::Time:
                return *value.time;
            case Type::DateTime:
                return value.datetime->time;
            case Type::String:
            case Type::Integer:
            case Type::UInteger:
            case Type::Floating:
            case Type::Date:
            case Type::Blob:
            default:
                throw std::bad_cast();
        }
    }
    /**
     * @brief Get the value as DateTime
     *
     * @tparam T              = DB::DateTime
     * @return DB::DateTime   The value
     * @throws std::bad_cast  If the value cannot be converted to DB::DateTime
     */
    template <>
    DateTime get() const {
        switch (type) {
            case Type::DateTime:
                return *value.datetime;
            case Type::String:
            case Type::Integer:
            case Type::UInteger:
            case Type::Floating:
            case Type::Date:
            case Type::Time:
            case Type::Blob:
            default:
                throw std::bad_cast();
        }
    }
    /**
     * @brief Get the value as ByteArray
     *
     * @tparam T              = DB::ByteArray
     * @return DB::ByteArray  The value
     * @throws std::bad_cast  If the value cannot be converted to DB::ByteArray
     */
    template <>
    ByteArray get() const {
        switch (type) {
            case Type::Blob:
                return *value.blob;
            case Type::String:
                return ByteArray((unsigned char*)value.string->data(),
                                 (unsigned char*)value.string->data() + value.string->size());
            case Type::Integer:
            case Type::UInteger:
            case Type::Floating:
            case Type::Date:
            case Type::Time:
            case Type::DateTime:
            default:
                throw std::bad_cast();
        }
    }

    /**
     * @brief Convert Any::Type to string.
     *
     * @param  type         The Any::Type value
     * @return std::string  The string value
     */
    LIAPI static std::string type2str(Any::Type type);

    /**
     * @brief Convert string to Any.
     *
     * @param  str  The string
     * @return Any  The converted value
     */
    LIAPI static Any str2any(const std::string& str);
};

} // namespace DB

template <typename T>
inline std::vector<DB::Any> to_any_container(const std::vector<T>& v) {
    std::vector<DB::Any> result;
    for (auto& i : v) {
        result.push_back(DB::Any(i));
    }
    return result;
}

template <typename T>
inline std::set<DB::Any> to_any_container(const std::set<T>& v) {
    std::set<DB::Any> result;
    for (auto& i : v) {
        result.insert(DB::Any(i));
    }
    return result;
}

template <typename T>
inline std::list<DB::Any> to_any_container(const std::list<T>& v) {
    std::list<DB::Any> result;
    for (auto& i : v) {
        result.push_back(DB::Any(i));
    }
    return result;
}

template <typename T>
inline std::unordered_set<DB::Any> to_any_container(const std::unordered_set<T>& v) {
    std::unordered_set<DB::Any> result;
    for (auto& i : v) {
        result.insert(DB::Any(i));
    }
    return result;
}

template <typename K, typename V>
inline std::map<K, DB::Any> to_any_container(const std::map<K, V>& v) {
    std::map<K, DB::Any> result;
    for (auto& i : v) {
        result.insert(std::make_pair(i.first, DB::Any(i.second)));
    }
    return result;
}

template <typename K, typename V>
inline std::unordered_map<K, DB::Any> to_any_unordered_map(const std::unordered_map<K, V>& v) {
    std::unordered_map<K, DB::Any> result;
    for (auto& i : v) {
        result.insert(std::make_pair(i.first, DB::Any(i.second)));
    }
    return result;
}
