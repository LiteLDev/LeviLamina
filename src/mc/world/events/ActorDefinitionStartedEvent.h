#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk37ee8b;
    ::ll::UntypedStorage<8, 32> mUnk711cf2;
    ::ll::UntypedStorage<8, 8>  mUnkce13e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionStartedEvent& operator=(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionStartedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
