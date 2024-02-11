#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class GrindstoneAdditionalContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    GrindstoneAdditionalContainerValidation& operator=(GrindstoneAdditionalContainerValidation const&);
    GrindstoneAdditionalContainerValidation(GrindstoneAdditionalContainerValidation const&);
    GrindstoneAdditionalContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GrindstoneAdditionalContainerValidation@@UEAA@XZ
    virtual ~GrindstoneAdditionalContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const& container, int slot) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@GrindstoneAdditionalContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int slot, class ItemStackBase const& item, int amount)
        const;

    // vIndex: 3, symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // vIndex: 8, symbol:
    // ?getContainerOffset@GrindstoneAdditionalContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const&) const;

    // vIndex: 9, symbol: ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const& container) const;

    // NOLINTEND
};
