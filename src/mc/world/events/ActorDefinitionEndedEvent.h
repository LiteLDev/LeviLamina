#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEndedEvent {
public:
    // prevent constructor by default
    ActorDefinitionEndedEvent& operator=(ActorDefinitionEndedEvent const&);
    ActorDefinitionEndedEvent(ActorDefinitionEndedEvent const&);
    ActorDefinitionEndedEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionEndedEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
