#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class BrewingStandInputContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandInputContainerValidation() /*override*/ = default;

    virtual bool
    isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const& item, int const, bool) const
        /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;
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

    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
