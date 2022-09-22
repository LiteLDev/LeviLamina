/**
 * @file  TargetWhenPushedGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetWhenPushedGoal.
 *
 */
class TargetWhenPushedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETWHENPUSHEDGOAL
public:
    class TargetWhenPushedGoal& operator=(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TargetWhenPushedGoal();
    /**
     * @hash   1351802745
     * @vftbl  1
     * @symbol ?canUse@TargetWhenPushedGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   706174450
     * @vftbl  4
     * @symbol ?start@TargetWhenPushedGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -764574990
     * @vftbl  5
     * @symbol ?stop@TargetWhenPushedGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1378154153
     * @vftbl  6
     * @symbol ?appendDebugInfo@TargetWhenPushedGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETWHENPUSHEDGOAL
    /**
     * @hash   888209233
     * @symbol ?canBeInterrupted@TargetWhenPushedGoal@@UEAA_NXZ
     */
    MCVAPI bool canBeInterrupted();
    /**
     * @hash   -1418143177
     * @symbol ?canContinueToUse@TargetWhenPushedGoal@@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
#endif
    /**
     * @hash   1174561966
     * @symbol ??0TargetWhenPushedGoal@@QEAA@AEAVMob@@V?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@M@Z
     */
    MCAPI TargetWhenPushedGoal(class Mob &, std::vector<struct MobDescriptor>, float);

};