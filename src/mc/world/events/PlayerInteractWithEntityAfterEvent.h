#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractWithEntityAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mTargetEntity;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mBeforeItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mAfterItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithEntityAfterEvent& operator=(PlayerInteractWithEntityAfterEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerInteractWithEntityAfterEvent(::PlayerInteractWithEntityAfterEvent const&);

    MCNAPI ~PlayerInteractWithEntityAfterEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerInteractWithEntityAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
