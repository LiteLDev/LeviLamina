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
        // prevent constructor by default
        CZString& operator=(CZString const&);

    public:
        // NOLINTBEGIN
        MCAPI CZString();

        MCAPI explicit CZString(char const*);

        MCAPI CZString(class Json::Value::CZString&& other);

        MCAPI CZString(class Json::Value::CZString const& other);

        MCAPI CZString(char*, bool);

        MCAPI char const* c_str() const;

        MCAPI ~CZString();

        // NOLINTEND
    };

    struct CZStringCompare {
    public:
        // prevent constructor by default
        CZStringCompare& operator=(CZStringCompare const&);
        CZStringCompare(CZStringCompare const&);
        CZStringCompare();

    public:
        // NOLINTBEGIN
        MCAPI bool operator()(class Json::Value::CZString const&, class Json::Value::CZString const&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Value();

public:
    // NOLINTBEGIN
    MCAPI explicit Value(int64 value);

    MCAPI explicit Value(bool value);

    MCAPI explicit Value(char const* value);

    MCAPI Value(class Json::Value&&);

    MCAPI Value(class Json::Value const& other);

    MCAPI explicit Value(class Json::Value::CZString*);

    MCAPI explicit Value(std::string const& value);

    MCAPI explicit Value(double value);

    MCAPI explicit Value(::Json::ValueType type);

    MCAPI explicit Value(int value);

    MCAPI explicit Value(uint64 value);

    MCAPI explicit Value(uint value);

    MCAPI class Json::Value& append(class Json::Value&&);

    MCAPI class Json::Value& append(class Json::Value const& value);

    MCAPI bool asBool(bool defaultValue) const;

    MCAPI char const* asCString() const;

    MCAPI double asDouble(double defaultValue) const;

    MCAPI float asFloat(float defaultValue) const;

    MCAPI int asInt(int defaultValue) const;

    MCAPI int64 asInt64(int64 defaultValue) const;

    MCAPI int64 asLargestInt() const;

    MCAPI uint64 asLargestUInt() const;

    MCAPI std::string asString(std::string const& defaultValue) const;

    MCAPI uint asUInt(uint defaultValue) const;

    MCAPI uint64 asUInt64(uint64 defaultValue) const;

    MCAPI class Json::ValueConstIterator begin() const;

    MCAPI class Json::ValueIterator begin();

    MCAPI void clear();

    MCAPI int compare(class Json::Value const& other) const;

    MCAPI bool empty() const;

    MCAPI class Json::ValueConstIterator end() const;

    MCAPI class Json::ValueIterator end();

    MCAPI class Json::Value get(char const* key, class Json::Value const& defaultValue) const;

    MCAPI class Json::Value get(std::string const& key, class Json::Value const& defaultValue) const;

    MCAPI std::vector<std::string> getMemberNames() const;

    MCAPI bool isArray() const;

    MCAPI bool isBool() const;

    MCAPI bool isConvertibleTo(::Json::ValueType other) const;

    MCAPI bool isDouble() const;

    MCAPI bool isInt() const;

    MCAPI bool isIntegral() const;

    MCAPI bool isMember(char const* key) const;

    MCAPI bool isMember(std::string const& key) const;

    MCAPI bool isNull() const;

    MCAPI bool isNumeric() const;

    MCAPI bool isObject() const;

    MCAPI bool isString() const;

    MCAPI bool operator!=(class Json::Value const& other) const;

    MCAPI bool operator<(class Json::Value const& other) const;

    MCAPI class Json::Value& operator=(class Json::Value&&);

    MCAPI class Json::Value& operator=(class Json::Value const& other);

    MCAPI bool operator==(class Json::Value const& other) const;

    MCAPI class Json::Value& operator[](char const* key);

    MCAPI class Json::Value& operator[](std::string const& key);

    MCAPI class Json::Value& operator[](int index);

    MCAPI class Json::Value& operator[](uint index);

    MCAPI class Json::Value const& operator[](char const* key) const;

    MCAPI class Json::Value const& operator[](std::string const& key) const;

    MCAPI class Json::Value const& operator[](int index) const;

    MCAPI class Json::Value const& operator[](uint index) const;

    MCAPI class Json::Value removeMember(char const* key);

    MCAPI class Json::Value removeMember(std::string const& key);

    MCAPI void resize(uint newSize);

    MCAPI uint size() const;

    MCAPI std::string toStyledString() const;

    MCAPI ::Json::ValueType type() const;

    MCAPI ~Value();

    MCAPI static int const maxInt;

    MCAPI static int64 const maxInt64;

    MCAPI static int64 const maxLargestInt;

    MCAPI static uint64 const maxLargestUInt;

    MCAPI static uint const maxUInt;

    MCAPI static uint64 const maxUInt64;

    MCAPI static int const minInt;

    MCAPI static int64 const minInt64;

    MCAPI static int64 const minLargestInt;

    MCAPI static class Json::Value const null;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _insert(class Json::Value::CZString&&, class Json::Value&&, bool);

    MCAPI class Json::Value& _resolveReference(char const*);

    // NOLINTEND
};

}; // namespace Json
