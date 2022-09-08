/**
 * @file  SleepGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SleepGoal.
 *
 */
class SleepGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPGOAL
public:
    class SleepGoal& operator=(class SleepGoal const &) = delete;
    SleepGoal(class SleepGoal const &) = delete;
    SleepGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1060017320
     */
    virtual ~SleepGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SleepGoal@@UEAA_NXZ
     * @hash   1768160598
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SleepGoal@@UEAA_NXZ
     * @hash   1540018340
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SleepGoal@@UEAAXXZ
     * @hash   -364061681
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SleepGoal@@UEAAXXZ
     * @hash   1980729359
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SleepGoal@@UEAAXXZ
     * @hash   654888202
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SleepGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2058602438
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  16
     * @symbol ?_getRepathTime@SleepGoal@@EEBA_KXZ
     * @hash   688435252
     */
    virtual unsigned __int64 _getRepathTime() const;
    /**
     * @symbol ??0SleepGoal@@QEAA@AEAVMob@@MMM_NMHM@Z
     * @hash   1653085724
     */
    MCAPI SleepGoal(class Mob &, float, float, float, bool, float, int, float);

//private:
    /**
     * @symbol ?_lockPosToBedPos@SleepGoal@@AEAAXXZ
     * @hash   929367242
     */
    MCAPI void _lockPosToBedPos();
    /**
     * @symbol ?_setSleepVariables@SleepGoal@@AEAAXXZ
     * @hash   1743617749
     */
    MCAPI void _setSleepVariables();
    /**
     * @symbol ?_wakeUp@SleepGoal@@AEAAXXZ
     * @hash   939222240
     */
    MCAPI void _wakeUp();

private:

};