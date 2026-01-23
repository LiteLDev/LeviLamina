#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/item/ItemStack.h"

struct PlayerSwingStartEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>   mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>      mHeldItem;
    ::ll::TypedStorage<1, 1, ::ActorSwingSource> mSwingSource;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSwingStartEvent& operator=(PlayerSwingStartEvent const&);
    PlayerSwingStartEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerSwingStartEvent(::PlayerSwingStartEvent const&);

    MCAPI ~PlayerSwingStartEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerSwingStartEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
