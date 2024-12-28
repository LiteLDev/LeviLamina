#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
// clang-format on

class ScreenHandlerHUD : public ::ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerHUD& operator=(ScreenHandlerHUD const&);
    ScreenHandlerHUD(ScreenHandlerHUD const&);
    ScreenHandlerHUD();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction) /*override*/;

    // vIndex: 0
    virtual ~ScreenHandlerHUD() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
