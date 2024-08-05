#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticlesTeleportTrailEvent {
public:
    // prevent constructor by default
    ParticlesTeleportTrailEvent& operator=(ParticlesTeleportTrailEvent const&);
    ParticlesTeleportTrailEvent(ParticlesTeleportTrailEvent const&);
    ParticlesTeleportTrailEvent();

public:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // NOLINTEND
};
