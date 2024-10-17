#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class ArmorContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    ArmorContainerValidation& operator=(ArmorContainerValidation const&);
    ArmorContainerValidation(ArmorContainerValidation const&);
    ArmorContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ArmorContainerValidation() = default;

    // vIndex: 1
    virtual bool isValidSlotForContainer(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // vIndex: 2
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int slot, class ItemStackBase const& item, int amount)
        const;

    // vIndex: 3
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;

    // vIndex: 4
    virtual bool isItemAllowedToAdd(class ItemStack const&) const;

    // vIndex: 5
    virtual bool
    isItemAllowedToRemove(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    // vIndex: 6
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;

    // vIndex: 7
    virtual bool canDestroy(class ContainerScreenContext const& screenContext) const;

    // vIndex: 8
    virtual int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    // vIndex: 9
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const& container) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool canDestroy$(class ContainerScreenContext const& screenContext) const;

    MCAPI bool canItemMoveToContainer$(class ItemStackBase const&) const;

    MCAPI int getAvailableSetCount$(int, class ItemStackBase const&) const;

    MCAPI int getContainerOffset$(class ContainerScreenContext const& screenContext) const;

    MCAPI int getContainerSize$(class ContainerScreenContext const&, class Container const& container) const;

    MCAPI bool
    isItemAllowedInSlot$(class ContainerScreenContext const&, int slot, class ItemStackBase const& item, int amount)
        const;

    MCAPI bool isItemAllowedToAdd$(class ItemStack const&) const;

    MCAPI bool
    isItemAllowedToRemove$(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    MCAPI bool isValidSlotForContainer$(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // NOLINTEND
};
