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

class CrafterContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&,
        int const,
        bool
    ) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    virtual ~CrafterContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&,
        int const,
        bool
    ) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
