/**
 * @file  StalkAndPounceOnTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StalkAndPounceOnTargetGoal.
 *
 */
class StalkAndPounceOnTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STALKANDPOUNCEONTARGETGOAL
public:
    class StalkAndPounceOnTargetGoal& operator=(class StalkAndPounceOnTargetGoal const &) = delete;
    StalkAndPounceOnTargetGoal(class StalkAndPounceOnTargetGoal const &) = delete;
    StalkAndPounceOnTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StalkAndPounceOnTargetGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol  ?start\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@StalkAndPounceOnTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0StalkAndPounceOnTargetGoal\@\@QEAA\@AEAVMob\@\@AEBVActorFilterGroup\@\@MMMMMMMM_N\@Z
     */
    MCAPI StalkAndPounceOnTargetGoal(class Mob &, class ActorFilterGroup const &, float, float, float, float, float, float, float, float, bool);

//private:
    /**
     * @symbol  ?_isStuckBlock\@StalkAndPounceOnTargetGoal\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isStuckBlock(class BlockPos) const;
    /**
     * @symbol  ?_preparePounce\@StalkAndPounceOnTargetGoal\@\@AEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void _preparePounce(class Vec3 const &, class Vec3 const &);

private:

};