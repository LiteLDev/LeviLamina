#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ActorPlacedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>       mEntity;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPlacedItemEvent& operator=(ActorPlacedItemEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorPlacedItemEvent(::ActorPlacedItemEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorPlacedItemEvent const&);
    // NOLINTEND
};
