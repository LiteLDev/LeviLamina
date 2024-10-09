#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionDataless.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

class ScreenHandlerLabTable : public ::ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenHandlerLabTable() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const& requestAction);

    // vIndex: 2
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 4
    virtual void postRequest(bool wasSuccess);

    MCAPI ScreenHandlerLabTable(
        class ContainerScreenContext const&  screenContext,
        class ItemStackRequestActionHandler& craftRequestHandler
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult _handleLabTableCombine(class ItemStackRequestActionDataless<9> const&);

    // NOLINTEND
};
