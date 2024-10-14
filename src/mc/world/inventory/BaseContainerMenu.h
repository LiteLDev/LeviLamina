#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForIContainerManager();

    MCAPI void dtor$();

    MCAPI void broadcastChanges$();

    MCAPI void containerContentChanged$(int slot);

    MCAPI ::ContainerID getContainerId$() const;

    MCAPI ::ContainerType getContainerType$() const;

    MCAPI bool isResultSlot$(int slot);

    MCAPI bool isSlotDirty$(int slot);

    MCAPI void setContainerId$(::ContainerID id);

    MCAPI void setContainerType$(::ContainerType type);

    MCAPI void setData$(int id, int value);

    // NOLINTEND
};
