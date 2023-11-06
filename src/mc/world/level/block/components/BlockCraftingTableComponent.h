#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockCraftingTableComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockCraftingTableComponent& operator=(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent(BlockCraftingTableComponent const&);
    BlockCraftingTableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockCraftingTableComponent@@UEAA@XZ
    virtual ~BlockCraftingTableComponent();

    // symbol: ??4BlockCraftingTableComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockCraftingTableComponent& operator=(struct BlockCraftingTableComponent&&);

    // symbol: ?usesNewComponentStorage@BlockCraftingTableComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
