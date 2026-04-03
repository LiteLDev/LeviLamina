#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk82a702;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicValue& operator=(DynamicValue const&);
    DynamicValue(DynamicValue const&);
    DynamicValue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DynamicValue(::cereal::DynamicValue&&);

    MCNAPI ::std::vector<::cereal::DynamicValue> const& asArray() const;

    MCNAPI ::std::vector<::cereal::DynamicValue>& asArray();

    MCNAPI bool const& asBool() const;

    MCNAPI int64 const& asInteger() const;

    MCNAPI double const& asNumber() const;

    MCNAPI ::std::unordered_map<::std::string, ::cereal::DynamicValue> const& asObject() const;

    MCNAPI ::std::unordered_map<::std::string, ::cereal::DynamicValue>& asObject();

    MCNAPI ::std::string const& asString() const;

    MCNAPI uint64 hash() const;

    MCNAPI ::cereal::DynamicValue& operator=(::cereal::DynamicValue&&);

    MCNAPI ~DynamicValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::DynamicValue&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
