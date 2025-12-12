#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct PlayerSelectedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~PlayerSelectedItemChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
