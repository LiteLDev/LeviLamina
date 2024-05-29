#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreenStack {
public:
    // prevent constructor by default
    ItemStackNetManagerScreenStack& operator=(ItemStackNetManagerScreenStack const&);
    ItemStackNetManagerScreenStack(ItemStackNetManagerScreenStack const&);
    ItemStackNetManagerScreenStack();

public:
    // NOLINTBEGIN
    // symbol:
    // ?foreachScreen@ItemStackNetManagerScreenStack@@QEAAXV?$function@$$A6A_NAEAVItemStackNetManagerScreen@@@Z@std@@@Z
    MCAPI void foreachScreen(std::function<bool(class ItemStackNetManagerScreen&)> callback);

    // symbol:
    // ?getScreenForRequest@ItemStackNetManagerScreenStack@@QEAAPEAVItemStackNetManagerScreen@@AEBVItemStackRequestData@@@Z
    MCAPI class ItemStackNetManagerScreen* getScreenForRequest(class ItemStackRequestData const& request);

    // symbol: ?pop@ItemStackNetManagerScreenStack@@QEAA_NXZ
    MCAPI bool pop();

    // symbol:
    // ?push@ItemStackNetManagerScreenStack@@QEAAPEAVItemStackNetManagerScreen@@V?$unique_ptr@VItemStackNetManagerScreen@@U?$default_delete@VItemStackNetManagerScreen@@@std@@@std@@@Z
    MCAPI class ItemStackNetManagerScreen* push(std::unique_ptr<class ItemStackNetManagerScreen> screen);

    // symbol: ?size@ItemStackNetManagerScreenStack@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ?top@ItemStackNetManagerScreenStack@@QEAAPEAVItemStackNetManagerScreen@@XZ
    MCAPI class ItemStackNetManagerScreen* top();

    // symbol: ?top@ItemStackNetManagerScreenStack@@QEBAPEBVItemStackNetManagerScreen@@XZ
    MCAPI class ItemStackNetManagerScreen const* top() const;

    // symbol: ??1ItemStackNetManagerScreenStack@@QEAA@XZ
    MCAPI ~ItemStackNetManagerScreenStack();

    // NOLINTEND
};
