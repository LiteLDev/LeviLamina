#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionTriggeredEvent {

public:
    // prevent constructor by default
    ActorDefinitionTriggeredEvent& operator=(ActorDefinitionTriggeredEvent const&) = delete;
    ActorDefinitionTriggeredEvent(ActorDefinitionTriggeredEvent const&)            = delete;
    ActorDefinitionTriggeredEvent()                                                = delete;

public:
    /**
     * @symbol ??1ActorDefinitionTriggeredEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionTriggeredEvent(); // NOLINT
};
