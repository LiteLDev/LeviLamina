#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct RepairItemResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mResultItem;
    ::ll::TypedStorage<4, 4, int> mMaterialUsed;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairItemResult& operator=(RepairItemResult const&);
    RepairItemResult(RepairItemResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RepairItemResult();

    MCAPI ::RepairItemResult& operator=(::RepairItemResult&&);

    MCAPI ~RepairItemResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
