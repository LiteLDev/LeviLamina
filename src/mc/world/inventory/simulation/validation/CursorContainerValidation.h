#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

class CursorContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    CursorContainerValidation& operator=(CursorContainerValidation const&);
    CursorContainerValidation(CursorContainerValidation const&);
    CursorContainerValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool canItemMoveToContainer(::ItemStackBase const& item) const /*override*/;

    // vIndex: 8
    virtual int getContainerOffset(::ContainerScreenContext const& screenContext) const /*override*/;

    // vIndex: 0
    virtual ~CursorContainerValidation() /*override*/;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
