/**
 * @file  MC/RiverFollowingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RiverFollowingGoal.
 *
 */
class RiverFollowingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERFOLLOWINGGOAL
public:
    class RiverFollowingGoal& operator=(class RiverFollowingGoal const &) = delete;
    RiverFollowingGoal(class RiverFollowingGoal const &) = delete;
    RiverFollowingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RiverFollowingGoal();
    /**
     * @hash   -213957880
     * @vftbl  1
     * @symbol ?canUse@RiverFollowingGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   2063510278
     * @vftbl  2
     * @symbol ?canContinueToUse@RiverFollowingGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -197130015
     * @vftbl  4
     * @symbol ?start@RiverFollowingGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1058272385
     * @vftbl  5
     * @symbol ?stop@RiverFollowingGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1118498772
     * @vftbl  6
     * @symbol ?tick@RiverFollowingGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1647095624
     * @vftbl  7
     * @symbol ?appendDebugInfo@RiverFollowingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1205486629
     * @symbol ??0RiverFollowingGoal@@QEAA@AEAVMob@@MM@Z
     */
    MCAPI RiverFollowingGoal(class Mob &, float, float);

//protected:
    /**
     * @hash   1159542684
     * @symbol ?determineSteerDirection@RiverFollowingGoal@@IEAAXXZ
     */
    MCAPI void determineSteerDirection();

protected:

};