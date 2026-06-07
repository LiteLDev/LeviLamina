#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class Trade1Ingredient2ContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsServerSide;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade1Ingredient2ContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       item,
        ::ItemStackBase const&,
        int const,
        bool
    ) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Trade1Ingredient2ContainerValidation(bool isServerSide);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isServerSide);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       item,
        ::ItemStackBase const&,
        int const,
        bool
    ) const;

    MCFOLD int $getContainerOffset(::ContainerScreenContext const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
