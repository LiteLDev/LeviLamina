#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ScreenHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionDataless.h"

class ScreenHandlerLabTable : public ::ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?handleAction@ScreenHandlerLabTable@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const&);

    // vIndex: 2, symbol: ?endRequest@ScreenHandlerLabTable@@MEAA?AW4ItemStackNetResult@@XZ
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 4, symbol: ?postRequest@ScreenHandlerLabTable@@MEAAX_N@Z
    virtual void postRequest(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleLabTableCombine@ScreenHandlerLabTable@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionDataless@$08@@@Z
    MCAPI ::ItemStackNetResult _handleLabTableCombine(class ItemStackRequestActionDataless<9> const&);

    // NOLINTEND
};
