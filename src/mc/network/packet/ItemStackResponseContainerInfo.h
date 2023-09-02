#pragma once

#include "ItemStackResponseSlotInfo.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct ItemStackResponseContainerInfo {
public:
    ContainerEnumName                      mOpenContainerNetId; // this+0x0
    std::vector<ItemStackResponseSlotInfo> mSlots;              // this+0x8

    // prevent constructor by default
    ItemStackResponseContainerInfo& operator=(ItemStackResponseContainerInfo const&) = delete;
    ItemStackResponseContainerInfo(ItemStackResponseContainerInfo const&)            = delete;
    ItemStackResponseContainerInfo()                                                 = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ItemStackResponseContainerInfo@@QEAA@W4ContainerEnumName@@@Z
    MCAPI ItemStackResponseContainerInfo(::ContainerEnumName);

    // symbol: ??1ItemStackResponseContainerInfo@@QEAA@XZ
    MCAPI ~ItemStackResponseContainerInfo();

    // NOLINTEND
};
