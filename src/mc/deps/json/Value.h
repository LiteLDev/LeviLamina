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
        // member functions
        // NOLINTBEGIN
        MCAPI CZString();

        MCAPI explicit CZString(char const* cstr);

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
    };

    using ObjectValues = ::std::map<::Json::Value::CZString, ::Json::Value, ::Json::Value::CZStringCompare>;

    using ArrayValues = ::std::vector<::Json::Value*>;

    union ValueHolder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4f1c50;
        ::ll::UntypedStorage<8, 8> mUnk330383;
        ::ll::UntypedStorage<8, 8> mUnkf4e697;
        ::ll::UntypedStorage<1, 8> mUnk219d49;
        ::ll::UntypedStorage<8, 8> mUnkddcfb0;
        ::ll::UntypedStorage<8, 8> mUnk796975;
        ::ll::UntypedStorage<8, 8> mUnk835d26;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value::ValueHolder> value_;
    ::ll::TypedStorage<1, 1, ::Json::ValueType>          type_;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Value(::Json::Value const& other);

    MCAPI Value(::Json::Value&& other);

    MCAPI explicit Value(::Json::Value::CZString* str);

    MCAPI explicit Value(::Json::ValueType type);

    MCAPI explicit Value(char const* value);

    MCAPI explicit Value(int value);

    MCAPI explicit Value(uint value);

    MCAPI explicit Value(double value);

    MCAPI explicit Value(::std::string const& value);

    MCAPI explicit Value(uint64 value);

    MCAPI explicit Value(int64 value);

    MCAPI explicit Value(bool value);

    MCAPI void _insert(::Json::Value::CZString&& key, ::Json::Value&& value, bool overwrite);

    MCAPI ::Json::Value& _resolveReference(char const* key);

    MCAPI ::Json::Value& append(::Json::Value&& value);

    MCAPI ::Json::Value& append(::Json::Value const& value);

    MCAPI bool asBool(bool defaultValue) const;

    MCFOLD char const* asCString() const;

    MCAPI double asDouble(double defaultValue) const;

    MCAPI float asFloat(float defaultValue) const;

    MCAPI int asInt(int defaultValue) const;

    MCAPI int64 asInt64(int64 defaultValue) const;

    MCAPI int64 asLargestInt() const;

    MCAPI uint64 asLargestUInt() const;

    MCAPI ::std::string asString(::std::string const& defaultValue) const;

    MCAPI uint asUInt(uint defaultValue) const;

    MCAPI uint64 asUInt64(uint64 defaultValue) const;

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

    MCAPI bool isArray() const;

    MCAPI bool isBool() const;

    MCAPI bool isConvertibleTo(::Json::ValueType other) const;

    MCAPI bool isDouble() const;

    MCAPI bool isInt() const;

    MCAPI bool isIntegral() const;

    MCAPI bool isMember(char const* key) const;

    MCAPI bool isMember(::std::string const& key) const;

    MCFOLD bool isNull() const;

    MCAPI bool isNumeric() const;

    MCAPI bool isObject() const;

    MCAPI bool isString() const;

    MCAPI bool isUInt() const;

    MCAPI bool operator!=(::Json::Value const& other) const;

    MCAPI bool operator<(::Json::Value const& other) const;

    MCAPI ::Json::Value& operator=(::Json::Value const& other);

    MCAPI ::Json::Value& operator=(::Json::Value&& other);

    MCAPI bool operator==(::Json::Value const& other) const;

    MCAPI bool operator>(::Json::Value const& other) const;

    MCAPI ::Json::Value const& operator[](int index) const;

    MCAPI ::Json::Value const& operator[](uint index) const;

    MCAPI ::Json::Value const& operator[](char const* key) const;

    MCAPI ::Json::Value const& operator[](::std::string const& key) const;

    MCFOLD ::Json::Value& operator[](int index);

    MCAPI ::Json::Value& operator[](char const* key);

    MCAPI ::Json::Value& operator[](::std::string const& key);

    MCAPI ::Json::Value& operator[](uint);

    MCAPI ::Json::Value removeMember(::std::string const& key);

    MCAPI ::Json::Value removeMember(char const* key);

    MCAPI void resize(uint newSize);

    MCAPI uint size() const;

    MCAPI ::std::string toStyledString() const;

    MCFOLD ::Json::ValueType type() const;

    MCAPI ~Value();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& maxInt();

    MCAPI static int64 const& maxInt64();

    MCAPI static int64 const& maxLargestInt();

    MCAPI static uint64 const& maxLargestUInt();

    MCAPI static uint const& maxUInt();

    MCAPI static uint64 const& maxUInt64();

    MCAPI static int const& minInt();

    MCAPI static int64 const& minInt64();

    MCAPI static int64 const& minLargestInt();

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
