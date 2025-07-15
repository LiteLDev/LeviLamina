#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
namespace Json { class ValueIterator; }
// clang-format on

namespace Json {

class Value {
public:
    // Value inner types declare
    // clang-format off
    class CZString;
    struct CZStringCompare;
    // clang-format on

    // Value inner types define
    using Members = ::std::vector<::std::string>;

    using iterator = ::Json::ValueIterator;

    using const_iterator = ::Json::ValueConstIterator;

    using UInt = uint;

    using Int = int;

    using UInt64 = uint64;

    using Int64 = int64;

    using LargestInt = int64;

    using LargestUInt = uint64;

    using ArrayIndex = uint;

    class CZString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char*> cstr_;
        // NOLINTEND
    public:
        bool operator<(CZString const& other) const {
            if (cstr_) {
                return strcmp(cstr_, other.cstr_) < 0;
            }
            return false;
        }
        template <size_t N>
        bool operator<(char const (&other)[N]) const {
            return operator<(std::string_view{other, N - 1});
        }
        bool operator<(std::string_view other) const {
            if (cstr_) {
                return cstr_ < other;
            }
            return false;
        }

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CZString();

        MCAPI explicit CZString(char const* cstr);

        MCAPI CZString(::Json::Value::CZString const& other);

        MCAPI CZString(::Json::Value::CZString&& other);

        MCAPI CZString(char* cstr, bool duplicate);

        MCFOLD char const* c_str() const;

        MCAPI ~CZString();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();

        MCAPI void* $ctor(char const* cstr);

        MCAPI void* $ctor(::Json::Value::CZString const& other);

        MCAPI void* $ctor(::Json::Value::CZString&& other);

        MCAPI void* $ctor(char* cstr, bool duplicate);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct CZStringCompare {
    public:
        // CZStringCompare inner types define
        using is_transparent = void;

    public:
        template <class T>
        constexpr auto operator()(CZString const& l, T const& r) const {
            return l < r;
        }
        template <class T>
        constexpr auto operator()(T const& l, CZString const& r) const {
            return l < r;
        }
    };

    using ObjectValues = ::std::map<::Json::Value::CZString, ::Json::Value, ::Json::Value::CZStringCompare>;

    using ArrayValues = ::std::vector<::Json::Value*>;

    union ValueHolder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64>                    int_;
        ::ll::TypedStorage<8, 8, uint64>                   uint_;
        ::ll::TypedStorage<8, 8, double>                   real_;
        ::ll::TypedStorage<1, 8, bool>                     bool_;
        ::ll::TypedStorage<8, 8, ::Json::Value::CZString*> string_;
        ::ll::TypedStorage<8, 8, ::std::map<::Json::Value::CZString, ::Json::Value, ::Json::Value::CZStringCompare>*>
                                                                 map_;
        ::ll::TypedStorage<8, 8, ::std::vector<::Json::Value*>*> array_;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::Json::Value::ValueHolder value_;
    ::Json::ValueType          type_;
    // NOLINTEND

public:
    using enum ::Json::ValueType;
    static constexpr LargestInt  minLargestInt        = LargestInt(~(LargestUInt(-1) / 2));
    static constexpr LargestInt  maxLargestInt        = LargestInt(LargestUInt(-1) / 2);
    static constexpr LargestUInt maxLargestUInt       = LargestUInt(-1);
    static constexpr Int         minInt               = Int(~(UInt(-1) / 2));
    static constexpr Int         maxInt               = Int(UInt(-1) / 2);
    static constexpr UInt        maxUInt              = UInt(-1);
    static constexpr Int64       minInt64             = Int64(~(UInt64(-1) / 2));
    static constexpr Int64       maxInt64             = Int64(UInt64(-1) / 2);
    static constexpr UInt64      maxUInt64            = UInt64(-1);
    static constexpr UInt        defaultRealPrecision = 17;
    static constexpr double      maxUInt64AsDouble    = 18446744073709551615.0;

    static bool IsIntegral(double d) {
        double integral_part;
        return modf(d, &integral_part) == 0.0;
    }

public:
    ValueType type() const { return type_; }

    operator bool() const { return !isNull(); }

    bool isNull() const { return type() == NullValue; }

    bool isBool() const { return type() == BooleanValue; }

    bool isInt() const {
        switch (type()) {
        case IntValue:
            return value_.int_ >= minInt && value_.int_ <= maxInt;
        case UintValue:
            return value_.uint_ <= UInt(maxInt);
        case RealValue:
            return value_.real_ >= minInt && value_.real_ <= maxInt && IsIntegral(value_.real_);
        default:
            break;
        }
        return false;
    }

    bool isUInt() const {
        switch (type()) {
        case IntValue:
            return value_.int_ >= 0 && LargestUInt(value_.int_) <= LargestUInt(maxUInt);
        case UintValue:
            return value_.uint_ <= maxUInt;
        case RealValue:
            return value_.real_ >= 0 && value_.real_ <= maxUInt && IsIntegral(value_.real_);
        default:
            break;
        }
        return false;
    }

    bool isInt64() const {
        switch (type()) {
        case IntValue:
            return true;
        case UintValue:
            return value_.uint_ <= UInt64(maxInt64);
        case RealValue:
            return value_.real_ > double(minInt64) && value_.real_ < double(maxInt64) && IsIntegral(value_.real_);
        default:
            break;
        }
        return false;
    }

    bool isUInt64() const {
        switch (type()) {
        case IntValue:
            return value_.int_ >= 0;
        case UintValue:
            return true;
        case RealValue:
            return value_.real_ >= 0 && value_.real_ < maxUInt64AsDouble && IsIntegral(value_.real_);
        default:
            break;
        }
        return false;
    }

    bool isIntegral() const {
        switch (type()) {
        case IntValue:
        case UintValue:
            return true;
        case RealValue:
            return value_.real_ > double(minInt64) && value_.real_ < maxUInt64AsDouble && IsIntegral(value_.real_);
        default:
            break;
        }
        return false;
    }

    bool isDouble() const { return type() == IntValue || type() == UintValue || type() == RealValue; }

    bool isNumeric() const { return isDouble(); }

    bool isString() const { return type() == StringValue; }

    bool isArray() const { return type() == ArrayValue; }

    bool isObject() const { return type() == ObjectValue; }

    Int64 asInt64(Int64 defaultValue = 0) const {
        switch (type()) {
        case IntValue:
            return Int64(value_.int_);
        case UintValue:
            return isInt64() ? Int64(value_.uint_) : defaultValue;
        case RealValue:
            return isInt64() ? Int64(value_.real_) : defaultValue;
        case NullValue:
            return 0;
        case BooleanValue:
            return value_.bool_ ? 1 : 0;
        default:
            break;
        }
        return defaultValue;
    }

    UInt64 asUInt64(UInt64 defaultValue = 0) const {
        switch (type()) {
        case IntValue:
            return isUInt64() ? UInt64(value_.int_) : defaultValue;
        case UintValue:
            return UInt64(value_.uint_);
        case RealValue:
            return isUInt64() ? UInt64(value_.real_) : defaultValue;
        case NullValue:
            return 0;
        case BooleanValue:
            return value_.bool_ ? 1 : 0;
        default:
            break;
        }
        return defaultValue;
    }

    Value&       operator[](char const* key) { return operator[](std::string{key}); }
    Value&       operator[](int key) { return operator[](uint(key)); }
    Value const& operator[](uint key) const { return operator[](int(key)); }

    Value(Int value) : Value(IntValue) { value_.int_ = value; }
    Value(UInt value) : Value(UintValue) { value_.uint_ = value; }

    Value(Int64 value) : Value(IntValue) { value_.int_ = value; }
    Value(UInt64 value) : Value(UintValue) { value_.uint_ = value; }

    Value(double value) : Value(RealValue) { value_.real_ = value; }
    Value(bool value) : Value(BooleanValue) { value_.bool_ = value; }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Value(::Json::Value const& other);

    MCAPI Value(::Json::Value&& other);

    MCAPI Value(::Json::Value::CZString* str);

    MCAPI Value(::Json::ValueType type = NullValue);

    MCAPI Value(char const* value);

    MCAPI Value(::std::string const& value);

    MCAPI void _insert(::Json::Value::CZString&& key, ::Json::Value&& value, bool overwrite);

    MCAPI ::Json::Value& _resolveReference(char const* key);

    MCAPI ::Json::Value& append(::Json::Value&& value);

    MCAPI ::Json::Value& append(::Json::Value const& value);

    MCAPI bool asBool(bool defaultValue) const;

    MCFOLD char const* asCString() const;

    MCAPI double asDouble(double defaultValue) const;

    MCAPI float asFloat(float defaultValue) const;

    MCAPI int asInt(int defaultValue) const;

    MCAPI int64 asLargestInt() const;

    MCAPI uint64 asLargestUInt() const;

    MCAPI ::std::string asString(::std::string const& defaultValue) const;

    MCAPI uint asUInt(uint defaultValue) const;

    MCFOLD ::Json::ValueConstIterator begin() const;

    MCAPI ::Json::ValueIterator begin();

    MCAPI void clear();

    MCAPI int compare(::Json::Value const& other) const;

    MCAPI bool empty() const;

    MCAPI ::Json::ValueConstIterator end() const;

    MCFOLD ::Json::ValueIterator end();

    MCAPI ::Json::Value get(::std::string const& key, ::Json::Value const& defaultValue) const;

    MCAPI ::Json::Value get(char const* key, ::Json::Value const& defaultValue) const;

    MCAPI ::std::vector<::std::string> getMemberNames() const;

    MCAPI bool isConvertibleTo(::Json::ValueType other) const;

    MCAPI bool isMember(char const* key) const;

    MCAPI bool isMember(::std::string const& key) const;

    MCAPI bool operator!=(::Json::Value const& other) const;

    MCAPI bool operator<(::Json::Value const& other) const;

    MCAPI ::Json::Value& operator=(::Json::Value const& other);

    MCAPI ::Json::Value& operator=(::Json::Value&& other);

    MCAPI bool operator==(::Json::Value const& other) const;

    MCAPI bool operator>(::Json::Value const& other) const;

    MCAPI ::Json::Value const& operator[](int index) const;

    MCAPI ::Json::Value const& operator[](char const* key) const;

    MCAPI ::Json::Value const& operator[](::std::string const& key) const;

    MCAPI ::Json::Value& operator[](uint index);

    MCAPI ::Json::Value& operator[](::std::string const& key);

    MCAPI ::Json::Value removeMember(::std::string const& key);

    MCAPI ::Json::Value removeMember(char const* key);

    MCAPI void resize(uint newSize);

    MCAPI uint size() const;

    MCAPI ::std::string toStyledString() const;

    MCAPI ~Value();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Json::Value const& null();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value const& other);

    MCAPI void* $ctor(::Json::Value&& other);

    MCAPI void* $ctor(::Json::Value::CZString* str);

    MCAPI void* $ctor(::Json::ValueType type);

    MCAPI void* $ctor(char const* value);

    MCAPI void* $ctor(int value);

    MCAPI void* $ctor(uint value);

    MCAPI void* $ctor(double value);

    MCAPI void* $ctor(::std::string const& value);

    MCAPI void* $ctor(uint64 value);

    MCAPI void* $ctor(int64 value);

    MCAPI void* $ctor(bool value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Json
