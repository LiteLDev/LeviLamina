#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

struct PlayerHotbarSelectedSlotChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<4, 4, int>              mPreviousSlotSelected;
    ::ll::TypedStorage<4, 4, int>              mNewSlotSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerHotbarSelectedSlotChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
