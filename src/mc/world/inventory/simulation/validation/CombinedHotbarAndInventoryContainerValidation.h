#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class CombinedHotbarAndInventoryContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    CombinedHotbarAndInventoryContainerValidation& operator=(CombinedHotbarAndInventoryContainerValidation const&);
    CombinedHotbarAndInventoryContainerValidation(CombinedHotbarAndInventoryContainerValidation const&);
    CombinedHotbarAndInventoryContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CombinedHotbarAndInventoryContainerValidation@@UEAA@XZ
    virtual ~CombinedHotbarAndInventoryContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const& container, int slot) const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?isItemAllowedToRemove@CombinedHotbarAndInventoryContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const& item) const;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol:
    // ?getContainerSize@CombinedHotbarAndInventoryContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const& container) const;

    // symbol: ?canItemMoveToContainer@CombinedHotbarAndInventoryContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // NOLINTEND
};
