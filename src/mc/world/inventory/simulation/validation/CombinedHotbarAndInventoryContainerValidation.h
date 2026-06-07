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

class CombinedHotbarAndInventoryContainerValidation : public ::ContainerValidationBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedToRemove(::ContainerScreenContext const& item, ::ItemStackBase const&) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& container, ::Container const&) const /*override*/;

    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isItemAllowedToRemove(::ContainerScreenContext const& item, ::ItemStackBase const&) const;

    MCFOLD int $getContainerSize(::ContainerScreenContext const& container, ::Container const&) const;

    MCFOLD bool $canItemMoveToContainer(::ItemStackBase const& item) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
