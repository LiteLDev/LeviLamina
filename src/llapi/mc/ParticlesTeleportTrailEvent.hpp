/**
 * @file  ParticlesTeleportTrailEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ParticlesTeleportTrailEvent.
 *
 */
class ParticlesTeleportTrailEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLESTELEPORTTRAILEVENT
public:
    class ParticlesTeleportTrailEvent& operator=(class ParticlesTeleportTrailEvent const &) = delete;
    ParticlesTeleportTrailEvent(class ParticlesTeleportTrailEvent const &) = delete;
    ParticlesTeleportTrailEvent() = delete;
#endif

public:
    /**
     * @symbol  ?save\@ParticlesTeleportTrailEvent\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;

};