#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class OffhandContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const /*override*/;

    virtual bool isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const
        /*override*/;

    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual ~OffhandContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;

    MCNAPI bool
    $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
