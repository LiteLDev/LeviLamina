#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStartRidingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk96d752;
    ::ll::UntypedStorage<8, 24> mUnk131ef6;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorStartRidingEvent& operator=(ActorStartRidingEvent const&);
    ActorStartRidingEvent(ActorStartRidingEvent const&);
    ActorStartRidingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorStartRidingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
