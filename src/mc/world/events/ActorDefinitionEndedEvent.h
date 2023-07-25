#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEndedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONENDEDEVENT
public:
    ActorDefinitionEndedEvent& operator=(ActorDefinitionEndedEvent const&) = delete;
    ActorDefinitionEndedEvent(ActorDefinitionEndedEvent const&)            = delete;
    ActorDefinitionEndedEvent()                                            = delete;
#endif

public:
    /**
     * @symbol ??1ActorDefinitionEndedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionEndedEvent();
};
