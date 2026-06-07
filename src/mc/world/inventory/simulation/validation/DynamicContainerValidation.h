#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ItemDescriptor;
class ItemStackBase;
// clang-format on

class DynamicContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mContainerName;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const&) const /*override*/;

    virtual int getContainerSize(::ContainerScreenContext const& container, ::Container const&) const /*override*/;

    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       item,
        ::ItemStackBase const&          amount,
        int const                       isInternalTransfer,
        bool
    ) const /*override*/;

    virtual int
    getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DynamicContainerValidation(::FullContainerName containerName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    isAllowedItemInVector(::ItemDescriptor const& item, ::std::vector<::ItemDescriptor> const& allowedItems);

    MCAPI static bool
    isBannedItemInVector(::ItemDescriptor const& item, ::std::vector<::ItemDescriptor> const& bannedItems);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FullContainerName containerName);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCFOLD int $getContainerOffset(::ContainerScreenContext const&) const;

    MCFOLD int $getContainerSize(::ContainerScreenContext const& container, ::Container const&) const;

    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       item,
        ::ItemStackBase const&          amount,
        int const                       isInternalTransfer,
        bool
    ) const;

    MCAPI int
    $getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
