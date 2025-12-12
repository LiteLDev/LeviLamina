#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
// clang-format on

class MaterialReducerOutputValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual ~MaterialReducerOutputValidation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;

    MCNAPI bool $canDestroy(::ContainerScreenContext const& screenContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
