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
    virtual ~ScreenHandlerBase();

    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction);

    virtual ::ItemStackNetResult endRequest();

    virtual void endRequestBatch();

    virtual void postRequest(bool const wasSuccess);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenHandlerBase(::ItemStackRequestActionHandler& requestHandler);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackRequestActionHandler& requestHandler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);

    MCFOLD ::ItemStackNetResult $endRequest();

    MCFOLD void $endRequestBatch();

    MCFOLD void $postRequest(bool const wasSuccess);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
