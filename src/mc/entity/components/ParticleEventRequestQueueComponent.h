#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParticleEventRequestQueueComponent {
public:
    // prevent constructor by default
    ParticleEventRequestQueueComponent& operator=(ParticleEventRequestQueueComponent const&);
    ParticleEventRequestQueueComponent(ParticleEventRequestQueueComponent const&);
    ParticleEventRequestQueueComponent();

public:
    // NOLINTBEGIN
    MCAPI ParticleEventRequestQueueComponent(struct ParticleEventRequestQueueComponent&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ParticleEventRequestQueueComponent&&);

    // NOLINTEND
};
