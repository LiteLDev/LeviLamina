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
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const /*override*/;

    virtual int getAvailableSetCount(int const slot, ::ItemStackBase const& item) const /*override*/;

    virtual bool isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const
        /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    virtual ~ArmorContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const;

    MCNAPI int $getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;

    MCNAPI bool
    $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
