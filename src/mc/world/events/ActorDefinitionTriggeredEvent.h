#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk782da6;
    ::ll::UntypedStorage<8, 32> mUnkb32e03;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTriggeredEvent& operator=(ActorDefinitionTriggeredEvent const&);
    ActorDefinitionTriggeredEvent(ActorDefinitionTriggeredEvent const&);
    ActorDefinitionTriggeredEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionTriggeredEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
