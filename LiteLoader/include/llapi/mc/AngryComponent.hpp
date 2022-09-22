/**
 * @file  AngryComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   875686456
     * @symbol ??0AngryComponent@@QEAA@XZ
     */
    MCAPI AngryComponent();
    /**
     * @hash   790744097
     * @symbol ??0AngryComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI AngryComponent(class AngryComponent &&);
    /**
     * @hash   -2129249821
     * @symbol ?canGetAngry@AngryComponent@@QEBA_NAEAVMob@@PEAV2@PEAVActor@@_N3@Z
     */
    MCAPI bool canGetAngry(class Mob &, class Mob *, class Actor *, bool, bool) const;
    /**
     * @hash   983122571
     * @symbol ?getAngrySound@AngryComponent@@QEBA?BW4LevelSoundEvent@@AEBVMob@@@Z
     */
    MCAPI enum LevelSoundEvent const getAngrySound(class Mob const &) const;
    /**
     * @hash   217781216
     * @symbol ?getBroadcastAnger@AngryComponent@@QEBA_NXZ
     */
    MCAPI bool getBroadcastAnger() const;
    /**
     * @hash   -1460285650
     * @symbol ?getBroadcastAngerOnAttack@AngryComponent@@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnAttack() const;
    /**
     * @hash   1050883372
     * @symbol ?getBroadcastAngerOnBeingAttacked@AngryComponent@@QEBA_NXZ
     */
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;
    /**
     * @hash   52458100
     * @symbol ?getBroadcastFilter@AngryComponent@@QEBAAEBVActorFilterGroup@@XZ
     */
    MCAPI class ActorFilterGroup const & getBroadcastFilter() const;
    /**
     * @hash   520782182
     * @symbol ?getBroadcastRange@AngryComponent@@QEBAHXZ
     */
    MCAPI int getBroadcastRange() const;
    /**
     * @hash   732338422
     * @symbol ?getHasTicked@AngryComponent@@QEBA_NXZ
     */
    MCAPI bool getHasTicked() const;
    /**
     * @hash   1865874000
     * @symbol ?getNextSoundEventTick@AngryComponent@@QEBA?BUTick@@XZ
     */
    MCAPI struct Tick const getNextSoundEventTick() const;
    /**
     * @hash   -159397484
     * @symbol ??4AngryComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class AngryComponent & operator=(class AngryComponent &&);
    /**
     * @hash   -1856927244
     * @symbol ?restartTimer@AngryComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void restartTimer(class Mob &);
    /**
     * @hash   1426123819
     * @symbol ?setAngry@AngryComponent@@QEAAXAEAVMob@@_N@Z
     */
    MCAPI void setAngry(class Mob &, bool);
    /**
     * @hash   994704542
     * @symbol ?setHasTicked@AngryComponent@@QEAAX_N@Z
     */
    MCAPI void setHasTicked(bool);
    /**
     * @hash   818050722
     * @symbol ?setNextSoundEventTick@AngryComponent@@QEAAXAEBVMob@@@Z
     */
    MCAPI void setNextSoundEventTick(class Mob const &);
    /**
     * @hash   498494278
     * @symbol ??1AngryComponent@@QEAA@XZ
     */
    MCAPI ~AngryComponent();

};