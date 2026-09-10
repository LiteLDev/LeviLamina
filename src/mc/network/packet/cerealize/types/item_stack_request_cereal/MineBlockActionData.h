#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

namespace ItemStackRequestCereal {

struct MineBlockActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      mSlot;
    ::ll::TypedStorage<4, 4, int>                      mPredictedDurability;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
