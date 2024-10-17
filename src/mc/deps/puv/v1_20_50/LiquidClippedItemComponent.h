#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct LiquidClippedItemComponent {
public:
    // prevent constructor by default
    LiquidClippedItemComponent& operator=(LiquidClippedItemComponent const&);
    LiquidClippedItemComponent(LiquidClippedItemComponent const&);
    LiquidClippedItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
