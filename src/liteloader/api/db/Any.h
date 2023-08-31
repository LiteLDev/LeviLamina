#pragma once
#include "liteloader/api/Global.h"
#include "liteloader/api/db/Types.h"

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
        bool         boolean;
        int64_t      integer;
        uint64_t     uinteger;
        double       floating;
        std::string* string;
        Date*        date;
        Time*        time;
        DateTime*    datetime;
        ByteArray*   blob;
    } value; ///< Value

    enum class Type : int8_t {
        Null     = 0,
        Boolean  = 1,
        Integer  = 2,
        UInteger = 3,
        Floating = 4,
        String   = 5,
        Date     = 6,
        Time     = 7,
        DateTime = 8,
        Blob     = 9
    } type = Type::Null; ///< Type of the value

    /**
     * @brief Construct a new Any object with null value.
     *
     */
    LLAPI Any();
    /**
     * @brief Construct a new Any object with boolean value.
     *
     * @param v The boolean value
     */
    LLAPI Any(bool v);
    /**
     * @brief Construct a new Any object with int64 value.
     *
     * @param v The integer value
     */
    LLAPI Any(int64_t v);
    /**
     * @brief Construct a new Any object with uint64 value.
     *
     * @param v The uint32_t integer value
     */
    LLAPI Any(uint64_t v);
    /**
     * @brief Construct a new Any object with double value.
     *
     * @param v The floating value
     */
    LLAPI Any(double v);
    /**
     * @brief Construct a new Any object with string value.
     *
     * @param v The string value
     */
    LLAPI Any(const std::string& v);
    /**
     * @brief Construct a new Any object with const char* value.
     *
     * @param v The const char* value
     */
    LLAPI Any(const char* v);
    /**
     * @brief Construct a new Any object with char* value.
     *
     * @param v   The char* value
     * @param len The length of the char* value
     */
    LLAPI Any(char* v, size_t len);
    /**
     * @brief Construct a new Any object with date value.
     *
     * @param v The Date object
     */
    LLAPI Any(const Date& v);
    /**
     * @brief Construct a new Any object with time value.
     *
     * @param v The Time object
     */
    LLAPI Any(const Time& v);
    /**
     * @brief Construct a new Any object with date time value.
     *
     * @param v The DateTime object
     */
    LLAPI Any(const DateTime& v);
    /**
     * @brief Construct a new Any object with int8(char) value.
     *
     * @param v The char value
     */
    LLAPI Any(char v);
    /**
     * @brief Construct a new Any object with uint8(uint8_t) value.
     *
     * @param v The uint8_t value
     */
    LLAPI Any(uint8_t v);
    /**
     * @brief Construct a new Any object with int16(short) value.
     *
     * @param v The short value
     */
    LLAPI Any(short v);
    /**
     * @brief Construct a new Any object with uint16(uint16_t) value.
     *
     * @param v The uint16_t value
     */
    LLAPI Any(uint16_t v);
    /**
     * @brief Construct a new Any object with int32(int32_t) value.
     *
     * @param v The int32_t value
     */
    LLAPI Any(int32_t v);
    /**
     * @brief Construct a new Any object with uint32(uint32_t) value.
     *
     * @param v The uint32_t value
     */
    LLAPI Any(uint32_t v);
    /**
     * @brief Construct a new Any object with long value.
     *
     * @param v The long value
     */
    LLAPI Any(long v);
    /**
     * @brief Construct a new Any object with unsigned long value.
     *
     * @param v The unsigned long value
     */
    LLAPI Any(unsigned long v);
    /**
     * @brief Construct a new Any object with float value.
     *
     * @param v The float value
     */
    LLAPI Any(float v);
    /**
     * @brief Construct a new Any object with byte array value.
     *
     * @param v The byte array value
     */
    LLAPI Any(const ByteArray& v);
    /// Copy constructor
    LLAPI Any(const Any& v);
    /// Copy assignment operator
    LLAPI Any& operator=(const Any& v);

    /// Destructor
    LLAPI ~Any();

    /**
     * @brief Get if the value is null.
     *
     */
    LLAPI bool is_null() const;
    /**
     * @brief Get if the value is boolean.
     *
     */
    LLAPI bool is_boolean() const;
    /**
     * @brief Get if the value is (uint32_t) integer.
     *
     */
    LLAPI bool is_integer() const;
    /**
     * @brief Get if the value is uint32_t integer.
     *
     */
    LLAPI bool is_uinteger() const;
    /**
     * @brief Get if the value is floating.
     *
     */
    LLAPI bool is_floating() const;
    /**
     * @brief Get if the value is string.
     *
     */
    LLAPI bool is_string() const;
    /**
     * @brief Get if the value is date.
     *
     */
    LLAPI bool is_date() const;
    /**
     * @brief Get if the value is time.
     *
     */
    LLAPI bool is_time() const;
    /**
     * @brief Get if the value is date time.
     *
     */
    LLAPI bool is_datetime() const;
    /**
     * @brief Get if the value is blob.
     *
     */
    LLAPI bool is_blob() const;
    /**
     * @brief Get if the value is floating or (uint32_t) integer.
     *
     */
    LLAPI bool is_number() const;

    /**
     * @brief Get the number value as T
     *
     * @tparam T             The C++ basic number type to convert to, such as int32_t, long, double, etc.
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
     * @brief Get the value as uint8_t
     *
     * @tparam T              = uint8_t
     * @return uint8_t  The value
     * @throws std::bad_cast  If the value cannot be converted to uint8_t
     */
    template <>
    inline uint8_t get() const {
        return get_number<uint8_t>();
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
     * @brief Get the value as uint16_t
     *
     * @tparam T               = uint16_t
     * @return uint16_t  The value
     * @throws std::bad_cast   If the value cannot be converted to uint16_t
     */
    template <>
    inline uint16_t get() const {
        return get_number<uint16_t>();
    }
    /**
     * @brief Get the value as int32_t
     *
     * @tparam T    = int32_t
     * @return int32_t  The value
     * @throws std::bad_cast  If the value cannot be converted to int32_t
     */
    template <>
    inline int32_t get() const {
        return get_number<int32_t>();
    }
    /**
     * @brief Get the value as uint32_t
     *
     * @tparam T              = uint32_t
     * @return uint32_t   The value
     * @throws std::bad_cast  If the value cannot be converted to uint32_t
     */
    template <>
    inline uint32_t get() const {
        return get_number<uint32_t>();
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
     * @brief Get the value as int64_t
     *
     * @tparam T              = int64_t
     * @return int64_t      The value
     * @throws std::bad_cast  If the value cannot be converted to int64_t
     */
    template <>
    inline int64_t get() const {
        return get_number<int64_t>();
    }
    /**
     * @brief Get the value as uint64_t
     *
     * @tparam T                   = uint64_t
     * @return uint64_t  The value
     * @throws std::bad_cast       If the value cannot be converted to uint64_t
     */
    template <>
    inline uint64_t get() const {
        return get_number<uint64_t>();
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
            return std::to_string(value.date->year) + "-" + std::to_string(value.date->month) + "-" +
                   std::to_string(value.date->day);
            break;
        case Type::Time:
            return std::to_string(value.time->hour) + ":" + std::to_string(value.time->minute) + ":" +
                   std::to_string(value.time->second);
        case Type::DateTime:
            return std::to_string(value.datetime->date.year) + "-" + std::to_string(value.datetime->date.month) + "-" +
                   std::to_string(value.datetime->date.day) + " " + std::to_string(value.datetime->time.hour) + ":" +
                   std::to_string(value.datetime->time.minute) + ":" + std::to_string(value.datetime->time.second);
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
            return ByteArray((uint8_t*)value.string->data(), (uint8_t*)value.string->data() + value.string->size());
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
    LLAPI static std::string type2str(Any::Type type);

    /**
     * @brief Convert string to Any.
     *
     * @param  str  The string
     * @return Any  The converted value
     */
    LLAPI static Any str2any(const std::string& str);
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
