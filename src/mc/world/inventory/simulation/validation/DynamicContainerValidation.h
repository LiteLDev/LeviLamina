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

class DynamicContainerValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk65b6f4;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerValidation& operator=(DynamicContainerValidation const&);
    DynamicContainerValidation(DynamicContainerValidation const&);
    DynamicContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 9
    virtual int getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const
        /*override*/;

    // vIndex: 2
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const,
        ::ItemStackBase const& item,
        int const              amount,
        bool                   isInternalTransfer
    ) const /*override*/;

    // vIndex: 4
    virtual int
    getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const
        /*override*/;

    // vIndex: 0
    virtual ~DynamicContainerValidation() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canItemMoveToContainer(::ItemStackBase const& item) const;

    MCAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCAPI int $getContainerSize(::ContainerScreenContext const& screenContext, ::Container const& container) const;

    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const,
        ::ItemStackBase const& item,
        int const              amount,
        bool                   isInternalTransfer
    ) const;

    MCAPI int
    $getAllowedAddCount(::ContainerScreenContext const& screenContext, ::ItemStackBase const& itemInSlot) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
