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

class CompoundCreatorInputValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundCreatorInputValidation() /*override*/ = default;

    virtual bool
    isItemAllowedInSlot(::ContainerScreenContext const&, int const, ::ItemStackBase const&, int const, bool) const
        /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
