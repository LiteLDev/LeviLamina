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
    // symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    MCVAPI bool canDestroy(class ContainerScreenContext const& screenContext) const;

    // symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    MCVAPI int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // symbol: ?getContainerOffset@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@@Z
    MCVAPI int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    // symbol: ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    MCVAPI int
    getContainerSize(class ContainerScreenContext const& screenContext, class Container const& container) const;

    // symbol: ?isItemAllowedInSlot@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    MCVAPI bool isItemAllowedInSlot(
        class ContainerScreenContext const& screenContext,
        int                                 slot,
        class ItemStackBase const&          item,
        int                                 amount
    ) const;

    // symbol: ?isItemAllowedToAdd@ContainerValidationBase@@UEBA_NAEBVItemStack@@@Z
    MCVAPI bool isItemAllowedToAdd(class ItemStack const& item) const;

    // symbol: ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
    MCVAPI bool
    isItemAllowedToRemove(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    // symbol: ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    MCVAPI bool isValidSlotForContainer(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // NOLINTEND
};
