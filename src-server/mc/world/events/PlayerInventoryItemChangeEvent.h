#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"

struct PlayerInventoryItemChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack> mPreviousItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mNewItem;
    ::ll::TypedStorage<4, 4, int> mSlotNumber;
    ::ll::TypedStorage<1, 1, bool> mIsQuantityChangedOnly;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInventoryItemChangeEvent& operator=(PlayerInventoryItemChangeEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerInventoryItemChangeEvent();

    MCAPI PlayerInventoryItemChangeEvent(::PlayerInventoryItemChangeEvent const&);

    MCAPI ~PlayerInventoryItemChangeEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PlayerInventoryItemChangeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
