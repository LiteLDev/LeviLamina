#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
class ItemStackRequestActionHandler;
// clang-format on

class ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionHandler&> mRequestHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const&);
    ScreenHandlerBase(ScreenHandlerBase const&);
    ScreenHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenHandlerBase() = default;

    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction);

    virtual ::ItemStackNetResult endRequest();

    virtual void endRequestBatch();

    virtual void postRequest(bool const wasSuccess);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);

    MCNAPI ::ItemStackNetResult $endRequest();

    MCNAPI void $endRequestBatch();

    MCNAPI void $postRequest(bool const wasSuccess);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
