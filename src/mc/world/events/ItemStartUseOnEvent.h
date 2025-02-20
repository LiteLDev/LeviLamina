#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemInstance;
class WeakEntityRef;
// clang-format on

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
