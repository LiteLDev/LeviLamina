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
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDroppedItemEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
