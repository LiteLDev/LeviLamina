/**
 * @file  FollowTargetCaptainGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowTargetCaptainGoal.
 *
 */
class FollowTargetCaptainGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWTARGETCAPTAINGOAL
public:
    class FollowTargetCaptainGoal& operator=(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FollowTargetCaptainGoal();
    /**
     * @hash   255206475
     * @vftbl  1
     * @symbol  ?canUse\@FollowTargetCaptainGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1403318137
     * @vftbl  2
     * @symbol  ?canContinueToUse\@FollowTargetCaptainGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -454254604
     * @vftbl  4
     * @symbol  ?start\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1266744628
     * @vftbl  5
     * @symbol  ?stop\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -70709041
     * @vftbl  6
     * @symbol  ?tick\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -263233579
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FollowTargetCaptainGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -914700711
     * @symbol  ??0FollowTargetCaptainGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI FollowTargetCaptainGoal(class Mob &, float, float, float);

//private:
    /**
     * @hash   2062534070
     * @symbol  ?_determineMovePos\@FollowTargetCaptainGoal\@\@AEAAXXZ
     */
    MCAPI void _determineMovePos();

private:

};