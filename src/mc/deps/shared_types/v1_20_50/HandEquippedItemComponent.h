#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct HandEquippedItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3de180;
    // NOLINTEND

public:
    // prevent constructor by default
    HandEquippedItemComponent& operator=(HandEquippedItemComponent const&);
    HandEquippedItemComponent(HandEquippedItemComponent const&);
    HandEquippedItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
