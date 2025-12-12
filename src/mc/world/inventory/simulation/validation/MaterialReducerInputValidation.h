#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class MaterialReducerInputValidation : public ::ContainerValidationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk4c444e;
    ::ll::UntypedStorage<8, 264> mUnk31aa8f;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerInputValidation& operator=(MaterialReducerInputValidation const&);
    MaterialReducerInputValidation(MaterialReducerInputValidation const&);
    MaterialReducerInputValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const /*override*/;

    // vIndex: 3
    virtual int getAvailableSetCount(int slot, ::ItemStackBase const& item) const /*override*/;

    // vIndex: 4
    virtual int getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 7
    virtual bool canDestroy(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~MaterialReducerInputValidation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isItemAllowed(::ItemStackBase const& item) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isItemAllowedInSlot(
        ::ContainerScreenContext const& screenContext,
        int const                       slot,
        ::ItemStackBase const&          item,
        int const                       amount,
        bool
    ) const;

    MCNAPI int $getAvailableSetCount(int slot, ::ItemStackBase const& item) const;

    MCNAPI int $getAllowedAddCount(::ContainerScreenContext const&, ::ItemStackBase const&) const;

    MCNAPI int $getContainerOffset(::ContainerScreenContext const& screenContext) const;

    MCNAPI bool $canDestroy(::ContainerScreenContext const& screenContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
