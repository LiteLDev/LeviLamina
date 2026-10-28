#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

namespace EntityAttack {

struct ItemDefinedInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ItemStack const*>> mItem;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mAimDirection;
    ::ll::TypedStorage<1, 1, ::HandSlot>                          mHand;
    // NOLINTEND
};

} // namespace EntityAttack
