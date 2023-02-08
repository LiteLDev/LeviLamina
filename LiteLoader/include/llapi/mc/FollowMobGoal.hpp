/**
 * @file  FollowMobGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowMobGoal.
 *
 */
class FollowMobGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWMOBGOAL
public:
    class FollowMobGoal& operator=(class FollowMobGoal const &) = delete;
    FollowMobGoal(class FollowMobGoal const &) = delete;
    FollowMobGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FollowMobGoal();
    /**
     * @hash   -429846530
     * @vftbl  1
     * @symbol  ?canUse\@FollowMobGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   436994892
     * @vftbl  2
     * @symbol  ?canContinueToUse\@FollowMobGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -44329449
     * @vftbl  4
     * @symbol  ?start\@FollowMobGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -440146425
     * @vftbl  5
     * @symbol  ?stop\@FollowMobGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -924575982
     * @vftbl  6
     * @symbol  ?tick\@FollowMobGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   366319522
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FollowMobGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -9510072
     * @symbol  ??0FollowMobGoal\@\@QEAA\@AEAVMob\@\@MMH\@Z
     */
    MCAPI FollowMobGoal(class Mob &, float, float, int);

//private:
    /**
     * @hash   -950782878
     * @symbol  ?_setWantedMob\@FollowMobGoal\@\@AEAA_NXZ
     */
    MCAPI bool _setWantedMob();

private:

};