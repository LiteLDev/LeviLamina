#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionStartedEvent {

public:
    // prevent constructor by default
    ActorDefinitionStartedEvent& operator=(ActorDefinitionStartedEvent const&) = delete;
    ActorDefinitionStartedEvent(ActorDefinitionStartedEvent const&)            = delete;
    ActorDefinitionStartedEvent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ActorDefinitionStartedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionStartedEvent();
    // NOLINTEND
};
