#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticlesTeleportTrailEvent {

public:
    // prevent constructor by default
    ParticlesTeleportTrailEvent& operator=(ParticlesTeleportTrailEvent const&) = delete;
    ParticlesTeleportTrailEvent(ParticlesTeleportTrailEvent const&)            = delete;
    ParticlesTeleportTrailEvent()                                              = delete;

public:
    /**
     * @symbol
     * ?save\@ParticlesTeleportTrailEvent\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
};
