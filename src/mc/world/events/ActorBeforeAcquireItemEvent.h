#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemAcquisitionMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorBeforeAcquireItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                mActor;
    ::ll::TypedStorage<8, 8, ::Actor&>                mItem;
    ::ll::TypedStorage<4, 4, int>                     mAmountAcquired;
    ::ll::TypedStorage<4, 4, ::ItemAcquisitionMethod> mAcquireMethod;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>        mSecondaryActorContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBeforeAcquireItemEvent& operator=(ActorBeforeAcquireItemEvent const&);
    ActorBeforeAcquireItemEvent(ActorBeforeAcquireItemEvent const&);
    ActorBeforeAcquireItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorBeforeAcquireItemEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
