#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct LiquidClippedItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk629cbc;
    // NOLINTEND

public:
    // prevent constructor by default
    LiquidClippedItemComponent& operator=(LiquidClippedItemComponent const&);
    LiquidClippedItemComponent(LiquidClippedItemComponent const&);
    LiquidClippedItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
