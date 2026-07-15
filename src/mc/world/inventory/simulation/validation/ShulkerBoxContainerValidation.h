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

class ShulkerBoxContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isItemAllowedInSlot(
        ::ContainerScreenContext const&,
        int const              slot,
        ::ItemStackBase const& item,
        int const              amount,
        bool
    ) const;

    MCFOLD int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;


    // NOLINTEND
};
