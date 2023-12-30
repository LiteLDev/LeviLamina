#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemGroup {
public:
    // prevent constructor by default
    ItemGroup& operator=(ItemGroup const&);
    ItemGroup(ItemGroup const&);
    ItemGroup();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemGroup@@QEAA@AEBVItemInstance@@@Z
    MCAPI explicit ItemGroup(class ItemInstance const& itemInstance);

    // symbol: ?isEmpty@ItemGroup@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ??1ItemGroup@@QEAA@XZ
    MCAPI ~ItemGroup();

    // NOLINTEND
};
