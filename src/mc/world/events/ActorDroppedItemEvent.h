#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDroppedItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk5f347a;
    ::ll::UntypedStorage<8, 128> mUnkd476ff;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDroppedItemEvent& operator=(ActorDroppedItemEvent const&);
    ActorDroppedItemEvent(ActorDroppedItemEvent const&);
    ActorDroppedItemEvent();

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
