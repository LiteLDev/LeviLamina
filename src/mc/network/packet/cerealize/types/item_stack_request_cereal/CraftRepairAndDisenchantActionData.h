#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

namespace ItemStackRequestCereal {

struct CraftRepairAndDisenchantActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                    mNumCrafts;
    ::ll::TypedStorage<4, 4, int>                      mRepairCost;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
