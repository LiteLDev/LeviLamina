#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class ArmorContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& slot,
        int const                       item,
        ::ItemStackBase const&          amount,
        int const,
        bool
    ) const /*override*/;

    virtual int getAvailableSetCount(int const, ::ItemStackBase const&) const /*override*/;

    virtual bool isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const
        /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& container, ::Container const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& slot,
        int const                       item,
        ::ItemStackBase const&          amount,
        int const,
        bool
    ) const;

    MCFOLD int $getAvailableSetCount(int const, ::ItemStackBase const&) const;

    MCAPI bool $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    MCFOLD int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCFOLD bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCFOLD int $getContainerSize(::ContainerScreenContext const& container, ::Container const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
