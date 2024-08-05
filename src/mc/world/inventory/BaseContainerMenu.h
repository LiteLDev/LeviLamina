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
    MCVAPI void broadcastChanges();

    MCVAPI void containerContentChanged(int slot);

    MCVAPI ::ContainerID getContainerId() const;

    MCVAPI ::ContainerType getContainerType() const;

    MCVAPI bool isResultSlot(int slot);

    MCVAPI bool isSlotDirty(int slot);

    MCVAPI void setContainerId(::ContainerID id);

    MCVAPI void setContainerType(::ContainerType type);

    MCVAPI void setData(int id, int value);

    MCVAPI ~BaseContainerMenu();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _saveLastSlots(class Container* container);

    // NOLINTEND
};
