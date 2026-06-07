#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct RepairItemResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mResultItem;
    ::ll::TypedStorage<4, 4, int>           mMaterialUsed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RepairItemResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
