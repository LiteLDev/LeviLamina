#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorKilledEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk65a2d8;
    ::ll::UntypedStorage<8, 16> mUnkcc0766;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorKilledEvent& operator=(ActorKilledEvent const&);
    ActorKilledEvent(ActorKilledEvent const&);
    ActorKilledEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorKilledEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
