#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
// clang-format on

class CraftingInputContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
