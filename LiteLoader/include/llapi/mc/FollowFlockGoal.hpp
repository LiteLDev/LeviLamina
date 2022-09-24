/**
 * @file  FollowFlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowFlockGoal.
 *
 */
class FollowFlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWFLOCKGOAL
public:
    class FollowFlockGoal& operator=(class FollowFlockGoal const &) = delete;
    FollowFlockGoal(class FollowFlockGoal const &) = delete;
    FollowFlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FollowFlockGoal();
    /**
     * @hash   662164701
     * @vftbl  1
     * @symbol ?canUse@FollowFlockGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1402995835
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowFlockGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   292509397
     * @vftbl  3
     * @symbol ?canBeInterrupted@FollowFlockGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   2136258118
     * @vftbl  4
     * @symbol ?start@FollowFlockGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1269234938
     * @vftbl  5
     * @symbol ?stop@FollowFlockGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1430580239
     * @vftbl  6
     * @symbol ?tick@FollowFlockGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   2111415315
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowFlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   284775127
     * @symbol ??0FollowFlockGoal@@QEAA@AEAVMob@@M@Z
     */
    MCAPI FollowFlockGoal(class Mob &, float);

};