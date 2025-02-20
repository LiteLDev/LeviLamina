#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ActorCarriedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mPreviouslyCarriedItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mCarriedItem;
    ::ll::TypedStorage<4, 4, ::HandSlot>             mHandSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorCarriedItemChangedEvent(::ActorCarriedItemChangedEvent const&);

    MCAPI ~ActorCarriedItemChangedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorCarriedItemChangedEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
