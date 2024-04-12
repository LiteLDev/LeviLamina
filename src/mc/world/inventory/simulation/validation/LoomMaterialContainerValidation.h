#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class LoomMaterialContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    LoomMaterialContainerValidation& operator=(LoomMaterialContainerValidation const&);
    LoomMaterialContainerValidation(LoomMaterialContainerValidation const&);
    LoomMaterialContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LoomMaterialContainerValidation@@UEAA@XZ
    virtual ~LoomMaterialContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@LoomMaterialContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(
        class ContainerScreenContext const& screenContext,
        int                                 slot,
        class ItemStackBase const&          item,
        int                                 amount
    ) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // vIndex: 4, symbol: ?isItemAllowedToAdd@ContainerValidationBase@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const& item) const;

    // vIndex: 5, symbol:
    // ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
    virtual bool
    isItemAllowedToRemove(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const& screenContext) const;

    // vIndex: 8, symbol: ?getContainerOffset@LoomMaterialContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    // vIndex: 9, symbol: ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int
    getContainerSize(class ContainerScreenContext const& screenContext, class Container const& container) const;

    // NOLINTEND
};
