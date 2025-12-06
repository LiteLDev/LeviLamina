#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

struct ActorDroppedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDroppedItemEvent& operator=(ActorDroppedItemEvent const&);
    ActorDroppedItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDroppedItemEvent(::ActorDroppedItemEvent const&);

    MCAPI ~ActorDroppedItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorDroppedItemEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
