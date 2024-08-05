#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ScreenHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"

class ScreenHandlerBeacon : public ::ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerBeacon& operator=(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenHandlerBeacon() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const& requestAction);

    // vIndex: 2
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 4
    virtual void postRequest(bool wasSuccess);

    MCAPI ScreenHandlerBeacon(class ContainerScreenContext const& screenContext, class ItemStackRequestActionHandler&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult _handleBeaconPaymentAction(class ItemStackRequestActionBeaconPayment const& requestAction
    );

    // NOLINTEND
};
