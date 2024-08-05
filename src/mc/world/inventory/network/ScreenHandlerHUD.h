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
    // vIndex: 0
    virtual ~ScreenHandlerHUD() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const& requestAction);

    // NOLINTEND
};
