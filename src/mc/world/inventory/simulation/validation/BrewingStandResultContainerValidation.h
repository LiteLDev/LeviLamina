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

class BrewingStandResultContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandResultContainerValidation() /*override*/ = default;

    virtual bool
    isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const& item, int const, bool) const
        /*override*/;

    virtual int getAvailableSetCount(int const slot, ::ItemStackBase const& item) const /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const,
        ::ItemStackBase const& item,
        int const,
        bool
    ) const;

    MCNAPI int $getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
