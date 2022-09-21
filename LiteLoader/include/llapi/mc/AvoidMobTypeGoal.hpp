/**
 * @file  MC/AvoidMobTypeGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AvoidMobTypeGoal.
 *
 */
class AvoidMobTypeGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDMOBTYPEGOAL
public:
    class AvoidMobTypeGoal& operator=(class AvoidMobTypeGoal const &) = delete;
    AvoidMobTypeGoal(class AvoidMobTypeGoal const &) = delete;
    AvoidMobTypeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AvoidMobTypeGoal();
    /**
     * @hash   -218643880
     * @vftbl  1
     * @symbol ?canUse@AvoidMobTypeGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   224278102
     * @vftbl  2
     * @symbol ?canContinueToUse@AvoidMobTypeGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -525160111
     * @vftbl  4
     * @symbol ?start@AvoidMobTypeGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1913104769
     * @vftbl  5
     * @symbol ?stop@AvoidMobTypeGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1160298324
     * @vftbl  6
     * @symbol ?tick@AvoidMobTypeGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   582569224
     * @vftbl  7
     * @symbol ?appendDebugInfo@AvoidMobTypeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -500764875
     * @symbol ??0AvoidMobTypeGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI AvoidMobTypeGoal(class Mob &);
    /**
     * @hash   961363932
     * @symbol ?canFindAvoidPath@AvoidMobTypeGoal@@QEAA_NPEAVActor@@@Z
     */
    MCAPI bool canFindAvoidPath(class Actor *);
    /**
     * @hash   -1036781986
     * @symbol ?findNearestEntityToAvoid@AvoidMobTypeGoal@@QEAAPEAVActor@@M@Z
     */
    MCAPI class Actor * findNearestEntityToAvoid(float);

};