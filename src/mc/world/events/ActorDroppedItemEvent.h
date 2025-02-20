#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ActorDroppedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDroppedItemEvent& operator=(ActorDroppedItemEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDroppedItemEvent(::ActorDroppedItemEvent const&);

    MCAPI ~ActorDroppedItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorDroppedItemEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
