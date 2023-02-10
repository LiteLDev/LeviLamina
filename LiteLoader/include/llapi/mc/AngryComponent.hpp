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
     * @hash   32112968
     * @symbol  ??0AngryComponent\@\@QEAA\@XZ
     */
    MCAPI AngryComponent();
    /**
     * @hash   1011866353
     * @symbol  ??0AngryComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AngryComponent(class AngryComponent &&);
    /**
     * @hash   1321313683
     * @symbol  ?canGetAngry\@AngryComponent\@\@QEBA_NAEAVMob\@\@PEAV2\@PEAVActor\@\@_N3\@Z
     */
    MCAPI bool canGetAngry(class Mob &, class Mob *, class Actor *, bool, bool) const;
    /**
     * @hash   138764907
     * @symbol  ?getAngrySound\@AngryComponent\@\@QEBA?BW4LevelSoundEvent\@\@AEBVMob\@\@\@Z
     */
    MCAPI enum class LevelSoundEvent const getAngrySound(class Mob const &) const;
    /**
     * @hash   -632803728
     * @symbol  ?getBroadcastAnger\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAnger() const;
    /**
     * @hash   1984096702
     * @symbol  ?getBroadcastAngerOnAttack\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnAttack() const;
    /**
     * @hash   200298428
     * @symbol  ?getBroadcastAngerOnBeingAttacked\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;
    /**
     * @hash   1390989620
     * @symbol  ?getBroadcastFilter\@AngryComponent\@\@QEBAAEBVActorFilterGroup\@\@XZ
     */
    MCAPI class ActorFilterGroup const & getBroadcastFilter() const;
    /**
     * @hash   648218470
     * @symbol  ?getBroadcastRange\@AngryComponent\@\@QEBAHXZ
     */
    MCAPI int getBroadcastRange() const;
    /**
     * @hash   -118246522
     * @symbol  ?getHasTicked\@AngryComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasTicked() const;
    /**
     * @hash   1021500960
     * @symbol  ?getNextSoundEventTick\@AngryComponent\@\@QEBA?BUTick\@\@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @hash   61878532
     * @symbol  ??4AngryComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AngryComponent & operator=(class AngryComponent &&);
    /**
     * @hash   1593667012
     * @symbol  ?restartTimer\@AngryComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void restartTimer(class Mob &);
    /**
     * @hash   581750779
     * @symbol  ?setAngry\@AngryComponent\@\@QEAAXAEAVMob\@\@_N\@Z
     */
    MCAPI void setAngry(class Mob &, bool);
    /**
     * @hash   150346878
     * @symbol  ?setHasTicked\@AngryComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasTicked(bool);
    /**
     * @hash   -26306942
     * @symbol  ?setNextSoundEventTick\@AngryComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @hash   719739542
     * @symbol  ??1AngryComponent\@\@QEAA\@XZ
     */
    MCAPI ~AngryComponent();

};