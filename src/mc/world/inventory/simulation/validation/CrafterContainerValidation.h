#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class CrafterContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    CrafterContainerValidation& operator=(CrafterContainerValidation const&);
    CrafterContainerValidation(CrafterContainerValidation const&);
    CrafterContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrafterContainerValidation() = default;

    // vIndex: 1
    virtual bool isValidSlotForContainer(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // vIndex: 2
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;

    // vIndex: 3
    virtual int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // vIndex: 4
    virtual bool isItemAllowedToAdd(class ItemStack const& item) const;

    // vIndex: 5
    virtual bool
    isItemAllowedToRemove(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    // vIndex: 6
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 7
    virtual bool canDestroy(class ContainerScreenContext const& screenContext) const;

    // vIndex: 8
    virtual int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    // vIndex: 9
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const;

    // NOLINTEND
};
