#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

namespace ItemStackRequestCereal {

struct SlotInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName>     mFullContainerName;
    ::ll::TypedStorage<1, 1, uchar>                    mSlot;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
