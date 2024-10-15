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
    MCAPI explicit ItemStackResponseContainerInfo(::ContainerEnumName openContainerNetId);

    MCAPI ~ItemStackResponseContainerInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(::ContainerEnumName openContainerNetId);

    MCAPI void dtor$();

    // NOLINTEND
};
