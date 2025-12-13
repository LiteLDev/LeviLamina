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

class HotbarContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const
        /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    virtual ~HotbarContainerValidation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $isItemAllowedToRemove(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item) const;

    MCNAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;

    MCNAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
