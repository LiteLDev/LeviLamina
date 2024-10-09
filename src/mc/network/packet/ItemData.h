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
    MCAPI ~ItemData();

    MCAPI static std::vector<struct ItemData> fromItemRegistry(class ItemRegistryRef itemRegistry);

    // NOLINTEND
};
