#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class InventoryTransactionItemGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mItemId;
    ::ll::TypedStorage<4, 4, int>                              mItemAux;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
    ::ll::TypedStorage<4, 4, int>                              mCount;
    ::ll::TypedStorage<1, 1, bool>                             mOverflow;
    // NOLINTEND
};
