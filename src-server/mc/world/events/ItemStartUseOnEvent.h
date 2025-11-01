#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/item/ItemInstance.h"

struct ItemStartUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<1, 1, uchar> mFace;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBuildBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStartUseOnEvent& operator=(ItemStartUseOnEvent const&);
    ItemStartUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStartUseOnEvent(::ItemStartUseOnEvent&&);

    MCAPI ItemStartUseOnEvent(::ItemStartUseOnEvent const&);

    MCAPI ~ItemStartUseOnEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStartUseOnEvent&&);

    MCAPI void* $ctor(::ItemStartUseOnEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
