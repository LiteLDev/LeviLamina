/**
 * @file  MC/NapGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NapGoal.
 *
 */
class NapGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAPGOAL
public:
    class NapGoal& operator=(class NapGoal const &) = delete;
    NapGoal(class NapGoal const &) = delete;
    NapGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NapGoal();
    /**
     * @hash   -1868418064
     * @vftbl  1
     * @symbol ?canUse@NapGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1203717330
     * @vftbl  2
     * @symbol ?canContinueToUse@NapGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -887186759
     * @vftbl  4
     * @symbol ?start@NapGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   685235113
     * @vftbl  5
     * @symbol ?stop@NapGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   460128
     * @vftbl  7
     * @symbol ?appendDebugInfo@NapGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1213038780
     * @symbol ??0NapGoal@@QEAA@AEAVMob@@MMMMAEBVActorFilterGroup@@1@Z
     */
    MCAPI NapGoal(class Mob &, float, float, float, float, class ActorFilterGroup const &, class ActorFilterGroup const &);

//private:
    /**
     * @hash   73390044
     * @symbol ?_canSleep@NapGoal@@AEBA_NAEBUTick@@@Z
     */
    MCAPI bool _canSleep(struct Tick const &) const;
    /**
     * @hash   1210534057
     * @symbol ?_detectsMobs@NapGoal@@AEBA_NXZ
     */
    MCAPI bool _detectsMobs() const;
    /**
     * @hash   1631904346
     * @symbol ?_setCooldown@NapGoal@@AEAAXXZ
     */
    MCAPI void _setCooldown();

private:
    /**
     * @hash   1433411085
     * @symbol ?MOB_DETECT_TIME@NapGoal@@0MB
     */
    MCAPI static float const MOB_DETECT_TIME;

};