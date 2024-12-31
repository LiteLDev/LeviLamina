#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionDataless.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackRequestAction;
class ItemStackRequestActionHandler;
// clang-format on

class ScreenHandlerLabTable : public ::ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk66a3ac;
    ::ll::UntypedStorage<8, 8>  mUnk9700fd;
    ::ll::UntypedStorage<8, 24> mUnkbd0017;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenHandlerLabTable() /*override*/ = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction) /*override*/;

    // vIndex: 2
    virtual ::ItemStackNetResult endRequest() /*override*/;

    // vIndex: 4
    virtual void postRequest(bool const wasSuccess) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenHandlerLabTable(
        ::ContainerScreenContext const&  screenContext,
        ::ItemStackRequestActionHandler& craftRequestHandler
    );

    MCAPI ::ItemStackNetResult _handleLabTableCombine(::ItemStackRequestActionDataless<9> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ContainerScreenContext const& screenContext, ::ItemStackRequestActionHandler& craftRequestHandler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);

    MCAPI ::ItemStackNetResult $endRequest();

    MCAPI void $postRequest(bool const wasSuccess);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
