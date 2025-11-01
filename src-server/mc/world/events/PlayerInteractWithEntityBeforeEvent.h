#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractWithEntityBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mTargetEntity;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithEntityBeforeEvent& operator=(PlayerInteractWithEntityBeforeEvent const&);
    PlayerInteractWithEntityBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerInteractWithEntityBeforeEvent(::PlayerInteractWithEntityBeforeEvent const&);

    MCAPI ~PlayerInteractWithEntityBeforeEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::PlayerInteractWithEntityBeforeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
