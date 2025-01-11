#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerValidationBase() = default;

    // vIndex: 1
    virtual bool
    isValidSlotForContainer(::ContainerScreenContext const& screenContext, ::Container const& container, int const slot)
        const;

    // vIndex: 2
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;

    // vIndex: 3
    virtual int getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;

    // vIndex: 4
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const& item) const;

    // vIndex: 5
    virtual bool
    isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    // vIndex: 6
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const;

    // vIndex: 7
    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const;

    // vIndex: 9
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidSlotForContainer(
        ::ContainerScreenContext const& screenContext,
        ::Container const&              container,
        int const                       slot
    ) const;

    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;

    MCAPI int $getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;

    MCAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const& item) const;

    MCAPI bool $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    MCAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCAPI bool $canDestroy(::ContainerScreenContext const& screenContext) const;

    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;
    // NOLINTEND
};
