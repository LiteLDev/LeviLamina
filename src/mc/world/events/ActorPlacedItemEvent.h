#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

struct ActorPlacedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPlacedItemEvent& operator=(ActorPlacedItemEvent const&);
    ActorPlacedItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorPlacedItemEvent(::ActorPlacedItemEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorPlacedItemEvent const&);
    // NOLINTEND
};
