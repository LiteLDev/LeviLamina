#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class BrewingStandResultContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    BrewingStandResultContainerValidation& operator=(BrewingStandResultContainerValidation const&) = delete;
    BrewingStandResultContainerValidation(BrewingStandResultContainerValidation const&)            = delete;
    BrewingStandResultContainerValidation()                                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@BrewingStandResultContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@BrewingStandResultContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;

    // vIndex: 4, symbol: ?isItemAllowedToAdd@BrewingStandResultContainerValidation@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const&) const;

    // vIndex: 5, symbol:
    // ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // vIndex: 8, symbol: ?getContainerOffset@BrewingStandResultContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const&) const;

    // vIndex: 9, symbol:
    // ?getContainerSize@BrewingStandResultContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const;

    // NOLINTEND
};
