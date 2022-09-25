/**
 * @file  ParticlesBlockExplosionEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ParticlesBlockExplosionEvent.
 *
 */
class ParticlesBlockExplosionEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLESBLOCKEXPLOSIONEVENT
public:
    class ParticlesBlockExplosionEvent& operator=(class ParticlesBlockExplosionEvent const &) = delete;
    ParticlesBlockExplosionEvent(class ParticlesBlockExplosionEvent const &) = delete;
    ParticlesBlockExplosionEvent() = delete;
#endif

public:
    /**
     * @hash   -162369196
     * @symbol ?addExplodePosition@ParticlesBlockExplosionEvent@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void addExplodePosition(class Vec3 const &);
    /**
     * @hash   -1979588878
     * @symbol ?save@ParticlesBlockExplosionEvent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   2037514271
     * @symbol ??1ParticlesBlockExplosionEvent@@QEAA@XZ
     */
    MCAPI ~ParticlesBlockExplosionEvent();

};