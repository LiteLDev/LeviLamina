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
    class CZString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char*> cstr_;
        // NOLINTEND

    public:
        // prevent constructor by default
        CZString& operator=(CZString const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CZString();

        MCNAPI explicit CZString(char const* cstr);

        MCNAPI CZString(::Json::Value::CZString&& other);

        MCNAPI CZString(::Json::Value::CZString const& other);

        MCNAPI CZString(char* cstr, bool duplicate);

        MCNAPI char const* c_str() const;

        MCNAPI ~CZString();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(char const* cstr);

        MCNAPI void* $ctor(::Json::Value::CZString&& other);

        MCNAPI void* $ctor(::Json::Value::CZString const& other);

        MCNAPI void* $ctor(char* cstr, bool duplicate);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CZStringCompare {
    public:
        // CZStringCompare inner types define
        using is_transparent = void;
    };

    union ValueHolder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::vector<::Json::Value*>*> array_;
        ::ll::TypedStorage<1, 8, bool>                           bool_;
        ::ll::TypedStorage<8, 8, int64>                          int_;
        ::ll::TypedStorage<8, 8, ::std::map<::Json::Value::CZString, ::Json::Value, ::Json::Value::CZStringCompare>*>
                                                           map_;
        ::ll::TypedStorage<8, 8, double>                   real_;
        ::ll::TypedStorage<8, 8, ::Json::Value::CZString*> string_;
        ::ll::TypedStorage<8, 8, uint64>                   uint_;
        // NOLINTEND
    };
    using ArrayIndex = uint;

    using ArrayValues = ::std::vector<::Json::Value*>;

    using Int = int;

    using Int64 = int64;

    using LargestInt = int64;

    using LargestUInt = uint64;

    using Members = ::std::vector<::std::string>;

    using ObjectValues = ::std::map<::Json::Value::CZString, ::Json::Value, ::Json::Value::CZStringCompare>;

    using UInt = uint;

    using UInt64 = uint64;

    using const_iterator = ::Json::ValueConstIterator;

    using iterator = ::Json::ValueIterator;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value::ValueHolder> value_;
    ::ll::TypedStorage<1, 1, ::Json::ValueType>          type_;
    // NOLINTEND

public:
    // prevent constructor by default
    Value();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Value(::Json::Value&& other);

    MCAPI Value(::Json::Value const& other);

    MCNAPI explicit Value(::Json::Value::CZString* str);

    MCAPI explicit Value(::Json::ValueType type);

    MCAPI explicit Value(::std::string const& value);

    MCNAPI explicit Value(int value);

    MCNAPI explicit Value(uint value);

    MCNAPI explicit Value(double value);

    MCAPI explicit Value(char const* value);

    MCNAPI explicit Value(int64 value);

    MCNAPI explicit Value(uint64 value);

    MCNAPI explicit Value(bool value);

    MCNAPI ::std::vector<::Json::Value*>* _copyArray(::std::vector<::Json::Value*> const& values);

    MCNAPI void _insert(::Json::Value::CZString&& key, ::Json::Value&& value, bool overwrite);

    MCNAPI ::Json::Value& _resolveReference(char const* key);

    MCAPI ::Json::Value& append(::Json::Value&& value);

    MCAPI ::Json::Value& append(::Json::Value const& value);

    MCAPI bool asBool(bool defaultValue) const;

    MCNAPI char const* asCString() const;

    MCAPI double asDouble(double defaultValue) const;

    MCNAPI float asFloat(float defaultValue) const;

    MCAPI int asInt(int defaultValue) const;

    MCNAPI int64 asInt64(int64 defaultValue) const;

    MCNAPI int64 asLargestInt() const;

    MCNAPI uint64 asLargestUInt() const;

    MCAPI ::std::string asString(::std::string const& defaultValue) const;

    MCNAPI uint asUInt(uint defaultValue) const;

    MCNAPI uint64 asUInt64(uint64 defaultValue) const;

    MCFOLD ::Json::ValueConstIterator begin() const;

    MCNAPI ::Json::ValueIterator begin();

    MCNAPI void clear();

    MCNAPI int compare(::Json::Value const& other) const;

    MCAPI bool empty() const;

    MCFOLD ::Json::ValueConstIterator end() const;

    MCNAPI ::Json::ValueIterator end();

    MCNAPI ::Json::Value get(uint index, ::Json::Value const& defaultValue) const;

    MCNAPI ::Json::Value get(::std::string const& key, ::Json::Value const& defaultValue) const;

    MCAPI ::Json::Value get(char const* key, ::Json::Value const& defaultValue) const;

    MCAPI ::std::vector<::std::string> getMemberNames() const;

    MCNAPI bool isArray() const;

    MCNAPI bool isBool() const;

    MCNAPI bool isConvertibleTo(::Json::ValueType other) const;

    MCNAPI bool isDouble() const;

    MCNAPI bool isInt() const;

    MCNAPI bool isIntegral() const;

    MCAPI bool isMember(::std::string const& key) const;

    MCAPI bool isMember(char const* key) const;

    MCNAPI bool isNull() const;

    MCNAPI bool isNumeric() const;

    MCNAPI bool isObject() const;

    MCNAPI bool isString() const;

    MCNAPI bool isUInt() const;

#ifdef LL_PLAT_C
    MCNAPI bool isValidIndex(uint index) const;

    MCNAPI bool operator!() const;
#endif

    MCNAPI bool operator!=(::Json::Value const& other) const;

    MCNAPI bool operator<(::Json::Value const& other) const;

    MCAPI ::Json::Value& operator=(::Json::Value&& other);

    MCAPI ::Json::Value& operator=(::Json::Value const& other);

    MCNAPI bool operator==(::Json::Value const& other) const;

    MCNAPI bool operator>(::Json::Value const& other) const;

    MCAPI ::Json::Value const& operator[](int index) const;

    MCNAPI ::Json::Value const& operator[](uint index) const;

    MCAPI ::Json::Value const& operator[](::std::string const& key) const;

    MCAPI ::Json::Value const& operator[](char const* key) const;

    MCNAPI ::Json::Value& operator[](int index);

    MCAPI ::Json::Value& operator[](uint index);

    MCAPI ::Json::Value& operator[](::std::string const& key);

    MCNAPI ::Json::Value& operator[](char const* key);

    MCNAPI ::Json::Value removeMember(::std::string const& key);

    MCAPI ::Json::Value removeMember(char const* key);

    MCNAPI void resize(uint newSize);

    MCAPI uint size() const;

#ifdef LL_PLAT_C
    MCNAPI void swap(::Json::Value& other);
#endif

    MCAPI ::std::string toStyledString() const;

    MCNAPI ::Json::ValueType type() const;

    MCAPI ~Value();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& maxInt();

    MCNAPI static int64 const& maxInt64();

    MCNAPI static int64 const& maxLargestInt();

    MCNAPI static uint64 const& maxLargestUInt();

    MCNAPI static uint const& maxUInt();

    MCNAPI static uint64 const& maxUInt64();

    MCNAPI static int const& minInt();

    MCNAPI static int64 const& minInt64();

    MCNAPI static int64 const& minLargestInt();

    MCNAPI static ::Json::Value const& null();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value&& other);

    MCAPI void* $ctor(::Json::Value const& other);

    MCNAPI void* $ctor(::Json::Value::CZString* str);

    MCAPI void* $ctor(::Json::ValueType type);

    MCAPI void* $ctor(::std::string const& value);

    MCNAPI void* $ctor(int value);

    MCNAPI void* $ctor(uint value);

    MCNAPI void* $ctor(double value);

    MCAPI void* $ctor(char const* value);

    MCNAPI void* $ctor(int64 value);

    MCNAPI void* $ctor(uint64 value);

    MCNAPI void* $ctor(bool value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Json

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::Json::Value>();
// clang-format on
