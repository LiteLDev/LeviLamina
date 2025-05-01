#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

struct ItemStartUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<1, 1, uchar>            mFace;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBuildBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStartUseOnEvent& operator=(ItemStartUseOnEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStartUseOnEvent(::ItemStartUseOnEvent&&);

    MCNAPI ItemStartUseOnEvent(::ItemStartUseOnEvent const&);

    MCNAPI ~ItemStartUseOnEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStartUseOnEvent&&);

    MCNAPI void* $ctor(::ItemStartUseOnEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
