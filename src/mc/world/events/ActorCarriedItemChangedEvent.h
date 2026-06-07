#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemInstance.h"

struct ActorCarriedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mPreviouslyCarriedItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mCarriedItem;
    ::ll::TypedStorage<4, 4, ::HandSlot>             mHandSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorCarriedItemChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
