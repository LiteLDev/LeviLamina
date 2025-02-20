#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ItemStopUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStopUseOnEvent(::ItemStopUseOnEvent const&);

    MCAPI ItemStopUseOnEvent(::ItemStopUseOnEvent&&);

    MCAPI ~ItemStopUseOnEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStopUseOnEvent const&);

    MCAPI void* $ctor(::ItemStopUseOnEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
