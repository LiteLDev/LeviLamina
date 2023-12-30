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
    // symbol: ?addExplodePosition@ParticlesBlockExplosionEvent@@QEAAXAEBVVec3@@@Z
    MCAPI void addExplodePosition(class Vec3 const& position);

    // symbol:
    // ?save@ParticlesBlockExplosionEvent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // symbol: ??1ParticlesBlockExplosionEvent@@QEAA@XZ
    MCAPI ~ParticlesBlockExplosionEvent();

    // NOLINTEND
};
