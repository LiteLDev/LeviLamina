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
    ::ll::UntypedStorage<8, 24> mUnkf17687;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumValue(EnumValue const&);
    EnumValue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue&&);

    MCAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue const&);
    // NOLINTEND
};

} // namespace cereal::internal
