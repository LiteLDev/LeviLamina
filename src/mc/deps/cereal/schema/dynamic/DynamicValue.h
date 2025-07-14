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
    ::ll::UntypedStorage<8, 72> mUnk3bb901;
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

    MCNAPI uint64 hash() const;

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
