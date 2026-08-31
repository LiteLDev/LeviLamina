#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/CraftableCompounds.h"
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class MaterialReducerInputValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockReducer*>        mBlockReducer;
    ::ll::TypedStorage<8, 264, ::CraftableCompounds> mCraftableCompounds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const /*override*/;

    virtual int getAvailableSetCount(int slot, ::ItemStackBase const& item) const /*override*/;

    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool isItemAllowed(::ItemStackBase const& item) const;
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;

    MCFOLD int $getAvailableSetCount(int slot, ::ItemStackBase const& item) const;

    MCFOLD int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCFOLD int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCFOLD bool $canDestroy(::ContainerScreenContext const& screenContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
