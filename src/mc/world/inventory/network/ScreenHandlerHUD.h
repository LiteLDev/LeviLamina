#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ScreenHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"

class ScreenHandlerHUD : public ::ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerHUD& operator=(ScreenHandlerHUD const&);
    ScreenHandlerHUD(ScreenHandlerHUD const&);
    ScreenHandlerHUD();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScreenHandlerHUD@@UEAA@XZ
    virtual ~ScreenHandlerHUD() = default;

    // vIndex: 1, symbol: ?handleAction@ScreenHandlerHUD@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const& requestAction);

    // NOLINTEND
};
