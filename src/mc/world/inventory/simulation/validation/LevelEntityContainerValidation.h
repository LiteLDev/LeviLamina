#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class LevelEntityContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    LevelEntityContainerValidation& operator=(LevelEntityContainerValidation const&);
    LevelEntityContainerValidation(LevelEntityContainerValidation const&);
    LevelEntityContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelEntityContainerValidation@@UEAA@XZ
    virtual ~LevelEntityContainerValidation() = default;

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

    // vIndex: 8, symbol: ?getContainerOffset@LevelEntityContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const&) const;

    // vIndex: 9, symbol:
    // ?getContainerSize@LevelEntityContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const& container) const;

    // NOLINTEND
};
