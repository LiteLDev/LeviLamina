#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
// clang-format on

namespace cereal::internal {

struct EnumValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8e0140;
    ::ll::UntypedStorage<8, 32> mUnk4d87c7;
    ::ll::UntypedStorage<8, 40> mUnkfb6c04;
    ::ll::UntypedStorage<8, 24> mUnk82e42e;
    ::ll::UntypedStorage<8, 40> mUnk8a44de;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumValue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnumValue(::cereal::internal::EnumValue&&);

    MCNAPI EnumValue(::cereal::internal::EnumValue const&);

    MCNAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue&&);

    MCNAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue const&);

    MCNAPI ~EnumValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::internal::EnumValue&&);

    MCNAPI void* $ctor(::cereal::internal::EnumValue const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
