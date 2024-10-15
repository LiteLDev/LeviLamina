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
    MCAPI explicit ItemGroup(class ItemInstance const& itemInstance);

    MCAPI bool isEmpty() const;

    MCAPI ~ItemGroup();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ItemInstance const& itemInstance);

    MCAPI void dtor$();

    // NOLINTEND
};
