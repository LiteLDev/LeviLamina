#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class AnvilInputContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    AnvilInputContainerValidation& operator=(AnvilInputContainerValidation const&);
    AnvilInputContainerValidation(AnvilInputContainerValidation const&);
    AnvilInputContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AnvilInputContainerValidation@@UEAA@XZ
    virtual ~AnvilInputContainerValidation() = default;

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

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // symbol: ?getContainerOffset@AnvilInputContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    MCVAPI int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    // NOLINTEND
};
