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
    isItemAllowedInSlot(::ContainerScreenContext const& item, int const, ::ItemStackBase const&, int const, bool) const
        /*override*/;

    virtual int getAvailableSetCount(int const item, ::ItemStackBase const&) const /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const&) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const&, ::Container const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& item,
        int const,
        ::ItemStackBase const&,
        int const,
        bool
    ) const;

    MCAPI int $getAvailableSetCount(int const item, ::ItemStackBase const&) const;

    MCFOLD int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCFOLD int $getContainerOffset(::ContainerScreenContext const&) const;

    MCFOLD int $getContainerSize(::ContainerScreenContext const&, ::Container const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
