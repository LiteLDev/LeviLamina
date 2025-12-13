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

class PreviewContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PreviewContainerValidation() /*override*/ = default;

    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual bool isValidSlotForContainer(
        ::ContainerScreenContext const& screenContext,
        ::Container const&              container,
        int const                       slot
    ) const /*override*/;
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

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI bool $isValidSlotForContainer(
        ::ContainerScreenContext const& screenContext,
        ::Container const&              container,
        int const                       slot
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
