#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class BeaconBlockActor;
class ContainerScreenContext;
class ItemStackRequestAction;
class ItemStackRequestActionBeaconPayment;
// clang-format on

class ScreenHandlerBeacon : public ::ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<1, 1, bool>                            mIsPaymentAction;
    ::ll::TypedStorage<4, 4, int>                             mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                             mSecondaryEffectId;
    ::ll::TypedStorage<8, 8, ::BeaconBlockActor*>             mBeaconBlockActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerBeacon& operator=(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenHandlerBeacon() /*override*/ = default;

    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction) /*override*/;

    virtual ::ItemStackNetResult endRequest() /*override*/;

    virtual void postRequest(bool const wasSuccess) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult _handleBeaconPaymentAction(::ItemStackRequestActionBeaconPayment const& requestAction);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);

    MCNAPI ::ItemStackNetResult $endRequest();

    MCNAPI void $postRequest(bool const wasSuccess);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
