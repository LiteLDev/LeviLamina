#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorAcquiredItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    ::ll::TypedStorage<4, 4, int> mAmountAcquired;
    ::ll::TypedStorage<4, 4, ::ItemAcquisitionMethod> mAcquireMethod;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mSecondaryActorContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&);
    ActorAcquiredItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAcquiredItemEvent(::ActorAcquiredItemEvent const&);

    MCAPI ~ActorAcquiredItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorAcquiredItemEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
