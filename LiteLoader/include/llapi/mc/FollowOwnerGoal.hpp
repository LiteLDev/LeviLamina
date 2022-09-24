/**
 * @file  FollowOwnerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowOwnerGoal.
 *
 */
class FollowOwnerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWOWNERGOAL
public:
    class FollowOwnerGoal& operator=(class FollowOwnerGoal const &) = delete;
    FollowOwnerGoal(class FollowOwnerGoal const &) = delete;
    FollowOwnerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FollowOwnerGoal();
    /**
     * @hash   681489051
     * @vftbl  1
     * @symbol ?canUse@FollowOwnerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1422058793
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowOwnerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -579223756
     * @vftbl  4
     * @symbol ?start@FollowOwnerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   310127476
     * @vftbl  5
     * @symbol ?stop@FollowOwnerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   150119887
     * @vftbl  6
     * @symbol ?tick@FollowOwnerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1208934197
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   2015189105
     * @vftbl  9
     * @symbol ?onPlayerDimensionChanged@FollowOwnerGoal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>);
    /**
     * @hash   793954656
     * @symbol ??0FollowOwnerGoal@@QEAA@AEAVMob@@MMM_N1M@Z
     */
    MCAPI FollowOwnerGoal(class Mob &, float, float, float, bool, bool, float);

};