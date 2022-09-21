/**
 * @file  MC/FollowParentGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowParentGoal.
 *
 */
class FollowParentGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWPARENTGOAL
public:
    class FollowParentGoal& operator=(class FollowParentGoal const &) = delete;
    FollowParentGoal(class FollowParentGoal const &) = delete;
    FollowParentGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FollowParentGoal();
    /**
     * @hash   532992482
     * @vftbl  1
     * @symbol ?canUse@FollowParentGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   976883152
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowParentGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   210273035
     * @vftbl  4
     * @symbol ?start@FollowParentGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1646613893
     * @vftbl  5
     * @symbol ?stop@FollowParentGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -415547322
     * @vftbl  6
     * @symbol ?tick@FollowParentGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   2059174270
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowParentGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1203881202
     * @symbol ??0FollowParentGoal@@QEAA@AEAVMob@@M@Z
     */
    MCAPI FollowParentGoal(class Mob &, float);

};