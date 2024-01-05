#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreen {
public:
    // prevent constructor by default
    ItemStackNetManagerScreen& operator=(ItemStackNetManagerScreen const&);
    ItemStackNetManagerScreen(ItemStackNetManagerScreen const&);
    ItemStackNetManagerScreen();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackNetManagerScreen@@UEAA@XZ
    virtual ~ItemStackNetManagerScreen() = default;

    // symbol: ??0ItemStackNetManagerScreen@@QEAA@AEAVEntityRegistry@@@Z
    MCAPI explicit ItemStackNetManagerScreen(class EntityRegistry& registry);

    // symbol: ?getEntity@ItemStackNetManagerScreen@@QEAAAEAVEntityContext@@XZ
    MCAPI class EntityContext& getEntity();

    // symbol: ?getEntity@ItemStackNetManagerScreen@@QEBAAEBVEntityContext@@XZ
    MCAPI class EntityContext const& getEntity() const;

    // NOLINTEND
};
