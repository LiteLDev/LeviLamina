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
    // vIndex: 0, symbol: __gen_??1ScreenHandlerBeacon@@UEAA@XZ
    virtual ~ScreenHandlerBeacon() = default;

    // vIndex: 1, symbol: ?handleAction@ScreenHandlerBeacon@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const& requestAction);

    // vIndex: 2, symbol: ?endRequest@ScreenHandlerBeacon@@MEAA?AW4ItemStackNetResult@@XZ
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 4, symbol: ?postRequest@ScreenHandlerBeacon@@MEAAX_N@Z
    virtual void postRequest(bool wasSuccess);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleBeaconPaymentAction@ScreenHandlerBeacon@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionBeaconPayment@@@Z
    MCAPI ::ItemStackNetResult _handleBeaconPaymentAction(class ItemStackRequestActionBeaconPayment const& requestAction
    );

    // NOLINTEND
};
