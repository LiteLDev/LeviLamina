#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemInstance;
class Vec3;
class WeakEntityRef;
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemUseOnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
