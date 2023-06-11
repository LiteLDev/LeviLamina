/**
 * @file  AngryComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AngryComponent.
 *
 */
class AngryComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYCOMPONENT
public:
    class AngryComponent& operator=(class AngryComponent const &) = delete;
    AngryComponent(class AngryComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0AngryComponent\@\@QEAA\@XZ
     */
    MCAPI AngryComponent();
    /**
     * @symbol ??0AngryComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AngryComponent(class AngryComponent &&);
    /**
     * @symbol ?canGetAngry\@AngryComponent\@\@QEBA_NAEAVMob\@\@PEAV2\@PEAVActor\@\@_N3\@Z
     */
    MCAPI bool canGetAngry(class Mob &, class Mob *, class Actor *, bool, bool) const;
    /**
     * @symbol ?getAngrySound\@AngryComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getAngrySound(class Mob const &) const;
    /**
     * @symbol ?getBroadcastAnger\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAnger() const;
    /**
     * @symbol ?getBroadcastAngerOnAttack\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnAttack() const;
    /**
     * @symbol ?getBroadcastAngerOnBeingAttacked\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;
    /**
     * @symbol ?getBroadcastFilter\@AngryComponent\@\@QEBAAEBVActorFilterGroup\@\@XZ
     */
    MCAPI class ActorFilterGroup const & getBroadcastFilter() const;
    /**
     * @symbol ?getBroadcastRange\@AngryComponent\@\@QEBAHXZ
     */
    MCAPI int getBroadcastRange() const;
    /**
     * @symbol ?getHasTicked\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasTicked() const;
    /**
     * @symbol ?getNextSoundEventTick\@AngryComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @symbol ??4AngryComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AngryComponent & operator=(class AngryComponent &&);
    /**
     * @symbol ?restartTimer\@AngryComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void restartTimer(class Mob &);
    /**
     * @symbol ?setAngry\@AngryComponent\@\@QEAAXAEAVMob\@\@_N\@Z
     */
    MCAPI void setAngry(class Mob &, bool);
    /**
     * @symbol ?setHasTicked\@AngryComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasTicked(bool);
    /**
     * @symbol ?setNextSoundEventTick\@AngryComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @symbol ??1AngryComponent\@\@QEAA\@XZ
     */
    MCAPI ~AngryComponent();

};
