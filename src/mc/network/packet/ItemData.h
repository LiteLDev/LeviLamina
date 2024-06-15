#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemData {
public:
    // prevent constructor by default
    ItemData& operator=(ItemData const&);
    ItemData(ItemData const&);
    ItemData();

public:
    // NOLINTBEGIN
    // symbol: ??1ItemData@@QEAA@XZ
    MCAPI ~ItemData();

    // symbol:
    // ?fromItemRegistry@ItemData@@SA?AV?$vector@UItemData@@V?$allocator@UItemData@@@std@@@std@@VItemRegistryRef@@@Z
    MCAPI static std::vector<struct ItemData> fromItemRegistry(class ItemRegistryRef);

    // NOLINTEND
};
