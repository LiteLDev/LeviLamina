#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

class ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const&);
    ScreenHandlerBase(ScreenHandlerBase const&);
    ScreenHandlerBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenHandlerBase();

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const& requestAction);

    // vIndex: 2
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 3
    virtual void endRequestBatch();

    // vIndex: 4
    virtual void postRequest(bool wasSuccess);

    MCAPI explicit ScreenHandlerBase(class ItemStackRequestActionHandler& requestHandler);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ItemStackRequestActionHandler& requestHandler);

    MCAPI void dtor$();

    MCAPI ::ItemStackNetResult endRequest$();

    MCAPI void endRequestBatch$();

    MCAPI ::ItemStackNetResult handleAction$(class ItemStackRequestAction const& requestAction);

    MCAPI void postRequest$(bool wasSuccess);

    // NOLINTEND
};
