#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

struct ItemStackRequestSlotInfo {
public:
    // prevent constructor by default
    ItemStackRequestSlotInfo() = delete;

    ContainerEnumName     mOpenContainerNetId; // this+0x0
    uchar                 mSlot;               // this+0x1
    ItemStackNetIdVariant mNetIdVariant;       // this+0x8
public:
    // NOLINTBEGIN
    // symbol: ??1ItemStackRequestSlotInfo@@QEAA@XZ
    MCAPI ~ItemStackRequestSlotInfo();

    // NOLINTEND
};
