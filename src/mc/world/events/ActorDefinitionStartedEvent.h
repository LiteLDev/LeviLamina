#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionStartedEvent {
public:
    // prevent constructor by default
    ActorDefinitionStartedEvent& operator=(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionStartedEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
