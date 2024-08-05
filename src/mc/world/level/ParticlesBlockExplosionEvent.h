#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticlesBlockExplosionEvent {
public:
    // prevent constructor by default
    ParticlesBlockExplosionEvent& operator=(ParticlesBlockExplosionEvent const&);
    ParticlesBlockExplosionEvent(ParticlesBlockExplosionEvent const&);
    ParticlesBlockExplosionEvent();

public:
    // NOLINTBEGIN
    MCAPI void addExplodePosition(class Vec3 const& position);

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI ~ParticlesBlockExplosionEvent();

    // NOLINTEND
};
