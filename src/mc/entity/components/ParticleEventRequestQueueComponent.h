#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParticleEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc78ed1;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventRequestQueueComponent& operator=(ParticleEventRequestQueueComponent const&);
    ParticleEventRequestQueueComponent(ParticleEventRequestQueueComponent const&);
    ParticleEventRequestQueueComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ParticleEventRequestQueueComponent& operator=(::ParticleEventRequestQueueComponent&&);
    // NOLINTEND
};
