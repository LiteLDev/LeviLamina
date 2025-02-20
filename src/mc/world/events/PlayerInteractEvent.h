#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerInteractEvent(::PlayerInteractEvent const&);

    MCAPI ~PlayerInteractEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::PlayerInteractEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
