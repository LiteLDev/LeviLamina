#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
class Vec3;
// clang-format on

struct PlayerInteractWithBlockBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mBlockLocation;
    ::ll::TypedStorage<1, 1, uchar>                       mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFaceLocation;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mItem;
    ::ll::TypedStorage<1, 1, bool>                        mIsFirstEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithBlockBeforeEvent& operator=(PlayerInteractWithBlockBeforeEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerInteractWithBlockBeforeEvent(::PlayerInteractWithBlockBeforeEvent const&);

    MCAPI ~PlayerInteractWithBlockBeforeEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerInteractWithBlockBeforeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
