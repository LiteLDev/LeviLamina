#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

namespace cereal {

class DynamicValue {
public:
    // DynamicValue inner types define
    enum class Type : int {
        Null    = 0,
        Boolean = 1,
        Integer = 2,
        Number  = 3,
        String  = 4,
        Array   = 5,
        Object  = 6,
    };

    using Array = ::std::vector<::cereal::DynamicValue>;

    using Bool = bool;

    using Integer = int64;

    using Null = ::cereal::NullType;

    using Number = double;

    using Object = ::std::unordered_map<::std::string, ::cereal::DynamicValue>;

    using String = ::std::string;

    using Variant = ::std::variant<
        ::cereal::NullType,
        bool,
        int64,
        double,
        ::std::string,
        ::std::vector<::cereal::DynamicValue>,
        ::std::unordered_map<::std::string, ::cereal::DynamicValue>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        72,
        ::std::variant<
            ::cereal::NullType,
            bool,
            int64,
            double,
            ::std::string,
            ::std::vector<::cereal::DynamicValue>,
            ::std::unordered_map<::std::string, ::cereal::DynamicValue>>>
        mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::cereal::DynamicValue> const& asArray() const;

    MCAPI ::std::vector<::cereal::DynamicValue>& asArray();

    MCAPI bool const& asBool() const;

    MCAPI int64 const& asInteger() const;

    MCAPI double const& asNumber() const;

    MCAPI ::std::unordered_map<::std::string, ::cereal::DynamicValue> const& asObject() const;

    MCAPI ::std::unordered_map<::std::string, ::cereal::DynamicValue>& asObject();

    MCAPI ::std::string const& asString() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string& asString();

    MCAPI bool hasMember(::std::string const& member) const;
#endif

    MCAPI uint64 hash() const;

#ifdef LL_PLAT_C
    MCAPI ::cereal::DynamicValue const& operator[](::std::string const& member) const;

    MCAPI ::cereal::DynamicValue& operator[](::std::string const& member);
#endif

    MCAPI ::cereal::DynamicValue::Type type() const;
    // NOLINTEND
};

} // namespace cereal
