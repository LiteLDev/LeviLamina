#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class FurnaceFuelContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    FurnaceFuelContainerValidation& operator=(FurnaceFuelContainerValidation const&);
    FurnaceFuelContainerValidation(FurnaceFuelContainerValidation const&);
    FurnaceFuelContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FurnaceFuelContainerValidation@@UEAA@XZ
    virtual ~FurnaceFuelContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@FurnaceFuelContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@FurnaceFuelContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;

    // vIndex: 4, symbol: ?isItemAllowedToAdd@FurnaceFuelContainerValidation@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const&) const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // symbol: ?getContainerOffset@FurnaceFuelContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    MCVAPI int getContainerOffset(class ContainerScreenContext const&) const;

    // NOLINTEND
};
