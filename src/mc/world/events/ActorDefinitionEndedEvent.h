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
    // symbol: ??1ActorDefinitionEndedEvent@@QEAA@XZ
    MCAPI ~ActorDefinitionEndedEvent();

    // NOLINTEND
};
