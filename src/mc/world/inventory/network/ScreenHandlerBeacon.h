#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackRequestAction;
class ItemStackRequestActionBeaconPayment;
class ItemStackRequestActionHandler;
// clang-format on

class ScreenHandlerBeacon : public ::ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkeb402e;
    ::ll::UntypedStorage<1, 1> mUnk808e7a;
    ::ll::UntypedStorage<4, 4> mUnk1cc159;
    ::ll::UntypedStorage<4, 4> mUnk2bd231;
    ::ll::UntypedStorage<8, 8> mUnk3df537;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerBeacon& operator=(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenHandlerBeacon() /*override*/ = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction) /*override*/;

    // vIndex: 2
    virtual ::ItemStackNetResult endRequest() /*override*/;

    // vIndex: 4
    virtual void postRequest(bool const wasSuccess) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScreenHandlerBeacon(::ContainerScreenContext const& screenContext, ::ItemStackRequestActionHandler& requestHandler);

    MCAPI ::ItemStackNetResult _handleBeaconPaymentAction(::ItemStackRequestActionBeaconPayment const& requestAction);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerScreenContext const& screenContext, ::ItemStackRequestActionHandler& requestHandler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);

    MCAPI ::ItemStackNetResult $endRequest();

    MCAPI void $postRequest(bool const wasSuccess);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
