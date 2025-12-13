#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke4be41;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemPtr& operator=(ItemPtr const&);
    ItemPtr(ItemPtr const&);
    ItemPtr();
};
