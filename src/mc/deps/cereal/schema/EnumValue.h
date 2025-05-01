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
    ::ll::UntypedStorage<8, 32> mUnk39fe59;
    ::ll::UntypedStorage<8, 40> mUnk3f41b8;
    ::ll::UntypedStorage<8, 72> mUnkc03cb8;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumValue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnumValue(::cereal::internal::EnumValue const&);

    MCNAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue&&);

    MCNAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::internal::EnumValue const&);
    // NOLINTEND
};

} // namespace cereal::internal
