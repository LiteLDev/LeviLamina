#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class CartographyAdditionalContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    CartographyAdditionalContainerValidation& operator=(CartographyAdditionalContainerValidation const&);
    CartographyAdditionalContainerValidation(CartographyAdditionalContainerValidation const&);
    CartographyAdditionalContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CartographyAdditionalContainerValidation() /*override*/;

    // vIndex: 2
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;

    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
