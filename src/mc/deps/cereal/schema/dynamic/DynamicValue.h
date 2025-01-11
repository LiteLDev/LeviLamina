#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class DynamicValue {
public:
    // DynamicValue inner types define
    enum class Type : int {
        Boolean = 0,
        Integer = 1,
        Number  = 2,
        String  = 3,
        Object  = 4,
        Array   = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk35e0d5;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicValue& operator=(DynamicValue const&);
    DynamicValue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DynamicValue(::cereal::DynamicValue const&);

    MCAPI DynamicValue(::cereal::DynamicValue&&);

    MCAPI ::std::vector<::cereal::DynamicValue> const& asArray() const;

    MCFOLD ::std::vector<::cereal::DynamicValue>& asArray();

    MCAPI bool const& asBool() const;

    MCAPI int64 const& asInteger() const;

    MCAPI double const& asNumber() const;

    MCAPI ::std::unordered_map<::std::string, ::cereal::DynamicValue> const& asObject() const;

    MCFOLD ::std::unordered_map<::std::string, ::cereal::DynamicValue>& asObject();

    MCAPI ::std::string const& asString() const;

    MCAPI ::cereal::DynamicValue const& operator[](uint64 pos) const;

    MCAPI ::cereal::DynamicValue::Type type() const;

    MCAPI ~DynamicValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::DynamicValue const&);

    MCAPI void* $ctor(::cereal::DynamicValue&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal
