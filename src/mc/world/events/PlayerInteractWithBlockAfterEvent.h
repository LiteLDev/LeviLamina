#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractWithBlockAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mBlockLocation;
    ::ll::TypedStorage<1, 1, uchar>                       mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFaceLocation;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mBeforeItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mAfterItem;
    ::ll::TypedStorage<1, 1, bool>                        mIsFirstEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithBlockAfterEvent& operator=(PlayerInteractWithBlockAfterEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerInteractWithBlockAfterEvent(::PlayerInteractWithBlockAfterEvent const&);

    MCNAPI ~PlayerInteractWithBlockAfterEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerInteractWithBlockAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
