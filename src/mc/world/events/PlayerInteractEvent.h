#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mTargetEntity;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&);
    PlayerInteractEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerInteractEvent(::PlayerInteractEvent const&);

    MCNAPI ~PlayerInteractEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerInteractEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
