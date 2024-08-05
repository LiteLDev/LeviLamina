#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationBase {
public:
    // prevent constructor by default
    ContainerValidationBase& operator=(ContainerValidationBase const&);
    ContainerValidationBase(ContainerValidationBase const&);
    ContainerValidationBase();

public:
    // NOLINTBEGIN
    MCVAPI bool canDestroy(class ContainerScreenContext const& screenContext) const;

    MCVAPI bool canItemMoveToContainer(class ItemStackBase const& item) const;

    MCVAPI int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    MCVAPI int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    MCVAPI int
    getContainerSize(class ContainerScreenContext const& screenContext, class Container const& container) const;

    MCVAPI bool isItemAllowedInSlot(
        class ContainerScreenContext const& screenContext,
        int                                 slot,
        class ItemStackBase const&          item,
        int                                 amount
    ) const;

    MCVAPI bool isItemAllowedToAdd(class ItemStack const& item) const;

    MCVAPI bool
    isItemAllowedToRemove(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    MCVAPI bool isValidSlotForContainer(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // NOLINTEND
};
