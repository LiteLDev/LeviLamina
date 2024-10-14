#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionTriggeredEvent {
public:
    // prevent constructor by default
    ActorDefinitionTriggeredEvent& operator=(ActorDefinitionTriggeredEvent const&);
    ActorDefinitionTriggeredEvent(ActorDefinitionTriggeredEvent const&);
    ActorDefinitionTriggeredEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionTriggeredEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
