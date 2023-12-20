#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct HandEquippedItemComponent {
public:
    // prevent constructor by default
    HandEquippedItemComponent& operator=(HandEquippedItemComponent const&);
    HandEquippedItemComponent(HandEquippedItemComponent const&);
    HandEquippedItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@HandEquippedItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
