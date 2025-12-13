#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class FurnaceFuelContainerValidation : public ::ContainerValidationBase {
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

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const& itemInSlot) const
        /*override*/;

    virtual int getAvailableSetCount(int slot, ::ItemStackBase const& item) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual ~FurnaceFuelContainerValidation() /*override*/ = default;
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

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const& itemInSlot) const;

    MCNAPI int $getAvailableSetCount(int slot, ::ItemStackBase const& item) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
