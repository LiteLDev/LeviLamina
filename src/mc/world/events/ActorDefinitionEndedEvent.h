#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEndedEvent {

public:
    // prevent constructor by default
    ActorDefinitionEndedEvent& operator=(ActorDefinitionEndedEvent const&) = delete;
    ActorDefinitionEndedEvent(ActorDefinitionEndedEvent const&)            = delete;
    ActorDefinitionEndedEvent()                                            = delete;

public:
    /**
     * @symbol ??1ActorDefinitionEndedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionEndedEvent(); // NOLINT
};
