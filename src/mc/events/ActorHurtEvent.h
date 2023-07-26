#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHurtEvent {

public:
    // prevent constructor by default
    ActorHurtEvent& operator=(ActorHurtEvent const&) = delete;
    ActorHurtEvent(ActorHurtEvent const&)            = delete;
    ActorHurtEvent()                                 = delete;

public:
    /**
     * @symbol ??1ActorHurtEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorHurtEvent(); // NOLINT
};
