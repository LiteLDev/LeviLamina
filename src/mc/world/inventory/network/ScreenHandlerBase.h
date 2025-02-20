#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestAction;
// clang-format on

class ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb78672;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const&);
    ScreenHandlerBase(ScreenHandlerBase const&);
    ScreenHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenHandlerBase() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction);

    // vIndex: 2
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 3
    virtual void endRequestBatch();

    // vIndex: 4
    virtual void postRequest(bool const wasSuccess);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
