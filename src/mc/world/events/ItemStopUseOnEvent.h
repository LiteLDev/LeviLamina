#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/BlockPos.h"

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
    ItemStopUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStopUseOnEvent(::ItemStopUseOnEvent&&);

    MCNAPI ItemStopUseOnEvent(::ItemStopUseOnEvent const&);

    MCNAPI ~ItemStopUseOnEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStopUseOnEvent&&);

    MCNAPI void* $ctor(::ItemStopUseOnEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
