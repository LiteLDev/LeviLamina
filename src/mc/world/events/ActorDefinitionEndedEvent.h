#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEndedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk17fb1f;
    ::ll::UntypedStorage<8, 32> mUnka88937;
    ::ll::UntypedStorage<8, 24> mUnk2555df;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionEndedEvent& operator=(ActorDefinitionEndedEvent const&);
    ActorDefinitionEndedEvent(ActorDefinitionEndedEvent const&);
    ActorDefinitionEndedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionEndedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
