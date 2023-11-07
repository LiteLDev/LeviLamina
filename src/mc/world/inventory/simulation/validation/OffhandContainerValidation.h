#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class OffhandContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    OffhandContainerValidation& operator=(OffhandContainerValidation const&);
    OffhandContainerValidation(OffhandContainerValidation const&);
    OffhandContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OffhandContainerValidation@@UEAA@XZ
    virtual ~OffhandContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@OffhandContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?isItemAllowedToRemove@OffhandContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // symbol: ?canItemMoveToContainer@OffhandContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const&) const;

    // symbol: ?getContainerOffset@OffhandContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    MCVAPI int getContainerOffset(class ContainerScreenContext const&) const;

    // NOLINTEND
};
