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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
