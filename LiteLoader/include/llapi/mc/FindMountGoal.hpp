/**
 * @file  MC/FindMountGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindMountGoal.
 *
 */
class FindMountGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDMOUNTGOAL
public:
    class FindMountGoal& operator=(class FindMountGoal const &) = delete;
    FindMountGoal(class FindMountGoal const &) = delete;
    FindMountGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FindMountGoal();
    /**
     * @hash   -2013964195
     * @vftbl  1
     * @symbol ?canUse@FindMountGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1147122773
     * @vftbl  2
     * @symbol ?canContinueToUse@FindMountGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -561519978
     * @vftbl  4
     * @symbol ?start@FindMountGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -957137066
     * @vftbl  5
     * @symbol ?stop@FindMountGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1441474367
     * @vftbl  6
     * @symbol ?tick@FindMountGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1222339517
     * @vftbl  7
     * @symbol ?appendDebugInfo@FindMountGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1312690322
     * @symbol ??0FindMountGoal@@QEAA@AEAVMob@@MH_N1MH@Z
     */
    MCAPI FindMountGoal(class Mob &, float, int, bool, bool, float, int);
    /**
     * @hash   1452880858
     * @symbol ?isInMountRange@FindMountGoal@@QEAA_NXZ
     */
    MCAPI bool isInMountRange();

};