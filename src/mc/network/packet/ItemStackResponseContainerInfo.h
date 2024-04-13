#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/ItemStackResponseSlotInfo.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct ItemStackResponseContainerInfo {
public:
    ContainerEnumName                      mOpenContainerNetId; // this+0x0
    std::vector<ItemStackResponseSlotInfo> mSlots;              // this+0x8

    // prevent constructor by default
    ItemStackResponseContainerInfo& operator=(ItemStackResponseContainerInfo const&);
    ItemStackResponseContainerInfo(ItemStackResponseContainerInfo const&);
    ItemStackResponseContainerInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemStackResponseContainerInfo@@QEAA@W4ContainerEnumName@@@Z
    MCAPI explicit ItemStackResponseContainerInfo(::ContainerEnumName openContainerNetId);

    // symbol: ??1ItemStackResponseContainerInfo@@QEAA@XZ
    MCAPI ~ItemStackResponseContainerInfo();

    // NOLINTEND
};
