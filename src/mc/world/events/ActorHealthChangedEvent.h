#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHealthChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk13991e;
    ::ll::UntypedStorage<4, 4>  mUnk9b5fb3;
    ::ll::UntypedStorage<4, 4>  mUnka2729e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHealthChangedEvent& operator=(ActorHealthChangedEvent const&);
    ActorHealthChangedEvent(ActorHealthChangedEvent const&);
    ActorHealthChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorHealthChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
