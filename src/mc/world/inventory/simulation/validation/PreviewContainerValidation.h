#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class PreviewContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    PreviewContainerValidation& operator=(PreviewContainerValidation const&);
    PreviewContainerValidation(PreviewContainerValidation const&);
    PreviewContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PreviewContainerValidation();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

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

    // symbol:
    // ?isItemAllowedInSlot@PreviewContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;

    // symbol: ?isItemAllowedToAdd@PreviewContainerValidation@@UEBA_NAEBVItemStack@@@Z
    MCVAPI bool isItemAllowedToAdd(class ItemStack const&) const;

    // symbol: ?isValidSlotForContainer@PreviewContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;

    // NOLINTEND
};
