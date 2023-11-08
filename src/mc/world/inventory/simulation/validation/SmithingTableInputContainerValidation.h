#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class SmithingTableInputContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    SmithingTableInputContainerValidation& operator=(SmithingTableInputContainerValidation const&);
    SmithingTableInputContainerValidation(SmithingTableInputContainerValidation const&);
    SmithingTableInputContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SmithingTableInputContainerValidation@@UEAA@XZ
    virtual ~SmithingTableInputContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@SmithingTableInputContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // vIndex: 8, symbol: ?getContainerOffset@SmithingTableInputContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const&) const;

    // vIndex: 9, symbol: ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const;

    // NOLINTEND
};
