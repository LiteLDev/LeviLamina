#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionStartedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONSTARTEDEVENT
public:
    ActorDefinitionStartedEvent& operator=(ActorDefinitionStartedEvent const&) = delete;
    ActorDefinitionStartedEvent(ActorDefinitionStartedEvent const&)            = delete;
    ActorDefinitionStartedEvent()                                              = delete;
#endif

public:
    /**
     * @symbol ??1ActorDefinitionStartedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionStartedEvent();
};
