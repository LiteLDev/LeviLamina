#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemInstance.h"

struct ItemChargeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInstance;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<4, 4, int>              mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&);
    ItemChargeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemChargeEvent(::ItemChargeEvent&&);

    MCAPI ItemChargeEvent(::ItemChargeEvent const&);

    MCAPI ItemChargeEvent(::ItemInstance const& inst, ::WeakEntityRef actor, int useDuration);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemChargeEvent&&);

    MCAPI void* $ctor(::ItemChargeEvent const&);

    MCAPI void* $ctor(::ItemInstance const& inst, ::WeakEntityRef actor, int useDuration);
    // NOLINTEND
};
