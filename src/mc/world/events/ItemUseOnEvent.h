#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

struct ItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemBeforeUse;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<1, 1, uchar>            mFace;
    ::ll::TypedStorage<4, 12, ::Vec3>          mFaceLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPosition;
    ::ll::TypedStorage<1, 1, bool>             mIsFirstEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUseOnEvent& operator=(ItemUseOnEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemUseOnEvent();

    MCNAPI ItemUseOnEvent(::ItemUseOnEvent const&);

    MCNAPI ItemUseOnEvent(::ItemUseOnEvent&&);

    MCNAPI ~ItemUseOnEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ItemUseOnEvent const&);

    MCNAPI void* $ctor(::ItemUseOnEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
