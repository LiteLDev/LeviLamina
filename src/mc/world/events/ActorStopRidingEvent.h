#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStopRidingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke7209e;
    ::ll::UntypedStorage<8, 24> mUnkfef8d2;
    ::ll::UntypedStorage<1, 1>  mUnk4c85b7;
    ::ll::UntypedStorage<1, 1>  mUnk80586e;
    ::ll::UntypedStorage<1, 1>  mUnk9dffe9;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorStopRidingEvent& operator=(ActorStopRidingEvent const&);
    ActorStopRidingEvent(ActorStopRidingEvent const&);
    ActorStopRidingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorStopRidingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
