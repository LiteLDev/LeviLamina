#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionDataless.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ChemistryTableBlockActor;
class ContainerScreenContext;
class ItemStack;
class ItemStackRequestAction;
// clang-format on

class ScreenHandlerLabTable : public ::ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<8, 8, ::ChemistryTableBlockActor*>     mChemistryTableBlockActor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>     mConsumedInput;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenHandlerLabTable() /*override*/ = default;

    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction) /*override*/;

    virtual ::ItemStackNetResult endRequest() /*override*/;

    virtual void postRequest(bool const wasSuccess) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult _handleLabTableCombine(::ItemStackRequestActionDataless<9> const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);

    MCNAPI ::ItemStackNetResult $endRequest();

    MCNAPI void $postRequest(bool const wasSuccess);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
