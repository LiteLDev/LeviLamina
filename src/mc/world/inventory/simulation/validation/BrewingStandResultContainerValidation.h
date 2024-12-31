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
    // prevent constructor by default
    BrewingStandResultContainerValidation& operator=(BrewingStandResultContainerValidation const&);
    BrewingStandResultContainerValidation(BrewingStandResultContainerValidation const&);
    BrewingStandResultContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrewingStandResultContainerValidation() /*override*/ = default;

    // vIndex: 2
    virtual bool
    isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const& item, int const, bool) const
        /*override*/;

    // vIndex: 3
    virtual int getAvailableSetCount(int const slot, ::ItemStackBase const& item) const /*override*/;

    // vIndex: 4
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 9
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const& item, int const, bool)
        const;

    MCAPI int $getAvailableSetCount(int const slot, ::ItemStackBase const& item) const;

    MCAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
