/**
 * @file  FollowParentGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~FollowParentGoal();
    /**
     * @hash   750916530
     * @vftbl  1
     * @symbol  ?canUse\@FollowParentGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1194807200
     * @vftbl  2
     * @symbol  ?canContinueToUse\@FollowParentGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   429073515
     * @vftbl  4
     * @symbol  ?start\@FollowParentGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1427813413
     * @vftbl  5
     * @symbol  ?stop\@FollowParentGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -197561770
     * @vftbl  6
     * @symbol  ?tick\@FollowParentGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2017868978
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FollowParentGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1421789874
     * @symbol  ??0FollowParentGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI FollowParentGoal(class Mob &, float);

};