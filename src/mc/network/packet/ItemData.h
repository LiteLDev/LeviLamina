#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

struct ItemData {
public:
    HashedString mName;             // this+0x0
    short        mId;               // this+0x30
    bool         mIsComponentBased; // this+0x32

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
