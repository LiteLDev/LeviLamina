#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class BaseContainerMenu {
public:
    // prevent constructor by default
    BaseContainerMenu& operator=(BaseContainerMenu const&);
    BaseContainerMenu(BaseContainerMenu const&);
    BaseContainerMenu();

public:
    // NOLINTBEGIN
    // symbol: ?broadcastChanges@BaseContainerMenu@@UEAAXXZ
    MCVAPI void broadcastChanges();

    // symbol: ?containerContentChanged@BaseContainerMenu@@UEAAXH@Z
    MCVAPI void containerContentChanged(int slot);

    // symbol: ?getContainerId@BaseContainerMenu@@UEBA?AW4ContainerID@@XZ
    MCVAPI ::ContainerID getContainerId() const;

    // symbol: ?getContainerType@BaseContainerMenu@@UEBA?AW4ContainerType@@XZ
    MCVAPI ::ContainerType getContainerType() const;

    // symbol: ?isResultSlot@BaseContainerMenu@@UEAA_NH@Z
    MCVAPI bool isResultSlot(int slot);

    // symbol: ?isSlotDirty@BaseContainerMenu@@UEAA_NH@Z
    MCVAPI bool isSlotDirty(int slot);

    // symbol: ?setContainerId@BaseContainerMenu@@UEAAXW4ContainerID@@@Z
    MCVAPI void setContainerId(::ContainerID id);

    // symbol: ?setContainerType@BaseContainerMenu@@UEAAXW4ContainerType@@@Z
    MCVAPI void setContainerType(::ContainerType type);

    // symbol: ?setData@BaseContainerMenu@@UEAAXHH@Z
    MCVAPI void setData(int id, int value);

    // symbol: ??1BaseContainerMenu@@UEAA@XZ
    MCVAPI ~BaseContainerMenu();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_saveLastSlots@BaseContainerMenu@@IEAAXPEAVContainer@@@Z
    MCAPI void _saveLastSlots(class Container* container);

    // NOLINTEND
};
