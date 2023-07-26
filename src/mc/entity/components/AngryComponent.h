#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AngryComponent {

public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&) = delete;
    AngryComponent(AngryComponent const&)            = delete;

public:
    /**
     * @symbol ??0AngryComponent\@\@QEAA\@XZ
     */
    MCAPI AngryComponent(); // NOLINT
    /**
     * @symbol ??0AngryComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AngryComponent(class AngryComponent&&); // NOLINT
    /**
     * @symbol ?canGetAngry\@AngryComponent\@\@QEBA_NAEAVMob\@\@PEAV2\@PEAVActor\@\@_N3\@Z
     */
    MCAPI bool canGetAngry(class Mob&, class Mob*, class Actor*, bool, bool) const; // NOLINT
    /**
     * @symbol ?getAngrySound\@AngryComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getAngrySound(class Mob const&) const; // NOLINT
    /**
     * @symbol ?getBroadcastAnger\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAnger() const; // NOLINT
    /**
     * @symbol ?getBroadcastAngerOnAttack\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnAttack() const; // NOLINT
    /**
     * @symbol ?getBroadcastAngerOnBeingAttacked\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnBeingAttacked() const; // NOLINT
    /**
     * @symbol ?getBroadcastFilter\@AngryComponent\@\@QEBAAEBVActorFilterGroup\@\@XZ
     */
    MCAPI class ActorFilterGroup const& getBroadcastFilter() const; // NOLINT
    /**
     * @symbol ?getBroadcastRange\@AngryComponent\@\@QEBAHXZ
     */
    MCAPI int getBroadcastRange() const; // NOLINT
    /**
     * @symbol ?getHasTicked\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasTicked() const; // NOLINT
    /**
     * @symbol ?getNextSoundEventTick\@AngryComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const; // NOLINT
    /**
     * @symbol ??4AngryComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AngryComponent& operator=(class AngryComponent&&); // NOLINT
    /**
     * @symbol ?restartTimer\@AngryComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void restartTimer(class Mob&); // NOLINT
    /**
     * @symbol ?setAngry\@AngryComponent\@\@QEAAXAEAVMob\@\@_N\@Z
     */
    MCAPI void setAngry(class Mob&, bool); // NOLINT
    /**
     * @symbol ?setHasTicked\@AngryComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasTicked(bool); // NOLINT
    /**
     * @symbol ?setNextSoundEventTick\@AngryComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const&); // NOLINT
    /**
     * @symbol ??1AngryComponent\@\@QEAA\@XZ
     */
    MCAPI ~AngryComponent(); // NOLINT
};
