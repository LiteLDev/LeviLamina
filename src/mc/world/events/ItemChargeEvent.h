#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

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
