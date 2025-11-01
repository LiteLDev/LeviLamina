#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class Trade1Ingredient1ContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsServerSide;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool isItemAllowedInSlot(::ContainerScreenContext const& screenContext, int const, ::ItemStackBase const& item, int const, bool) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~Trade1Ingredient1ContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedInSlot(::ContainerScreenContext const& screenContext, int const, ::ItemStackBase const& item, int const, bool) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
