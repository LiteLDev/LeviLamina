#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParticleEventRequestQueueComponent {

public:
    // prevent constructor by default
    ParticleEventRequestQueueComponent& operator=(ParticleEventRequestQueueComponent const&) = delete;
    ParticleEventRequestQueueComponent(ParticleEventRequestQueueComponent const&)            = delete;
    ParticleEventRequestQueueComponent()                                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ParticleEventRequestQueueComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ParticleEventRequestQueueComponent(struct ParticleEventRequestQueueComponent&&);
    // NOLINTEND
};
