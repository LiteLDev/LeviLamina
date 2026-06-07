#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class BeaconPaymentContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconPaymentContainerValidation() /*override*/ = default;

    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& item,
        int const                       amount,
        ::ItemStackBase const&,
        int const,
        bool
    ) const /*override*/;

    virtual int getAvailableSetCount(int, ::ItemStackBase const&) const /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const&) const /*override*/;

    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& item,
        int const                       amount,
        ::ItemStackBase const&,
        int const,
        bool
    ) const;

    MCFOLD int $getAvailableSetCount(int, ::ItemStackBase const&) const;

    MCFOLD int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCFOLD int $getContainerOffset(::ContainerScreenContext const&) const;

    MCFOLD bool $canDestroy(::ContainerScreenContext const& screenContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
