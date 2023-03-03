/**
 * @file  FollowCaravanGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowCaravanGoal.
 *
 */
class FollowCaravanGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWCARAVANGOAL
public:
    class FollowCaravanGoal& operator=(class FollowCaravanGoal const &) = delete;
    FollowCaravanGoal(class FollowCaravanGoal const &) = delete;
    FollowCaravanGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FollowCaravanGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@FollowCaravanGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@FollowCaravanGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FollowCaravanGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0FollowCaravanGoal\@\@QEAA\@AEAVMob\@\@MHAEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI FollowCaravanGoal(class Mob &, float, int, std::vector<struct MobDescriptor> const &);

//private:
    /**
     * @symbol  ?checkCaravanType\@FollowCaravanGoal\@\@AEAA_NPEAVMob\@\@\@Z
     */
    MCAPI bool checkCaravanType(class Mob *);
    /**
     * @symbol  ?firstIsLeashed\@FollowCaravanGoal\@\@AEAA_NPEAVMob\@\@H\@Z
     */
    MCAPI bool firstIsLeashed(class Mob *, int);

private:

};