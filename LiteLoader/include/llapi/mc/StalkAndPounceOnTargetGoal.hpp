/**
 * @file  StalkAndPounceOnTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1994699211
     * @vftbl  1
     * @symbol  ?canUse\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1099749991
     * @vftbl  2
     * @symbol  ?canContinueToUse\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   116802195
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   1468713380
     * @vftbl  4
     * @symbol  ?start\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   440179124
     * @vftbl  5
     * @symbol  ?stop\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1695892895
     * @vftbl  6
     * @symbol  ?tick\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1252579307
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@StalkAndPounceOnTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1436584060
     * @symbol  ??0StalkAndPounceOnTargetGoal\@\@QEAA\@AEAVMob\@\@AEBVActorFilterGroup\@\@MMMMMMMM_N\@Z
     */
    MCAPI StalkAndPounceOnTargetGoal(class Mob &, class ActorFilterGroup const &, float, float, float, float, float, float, float, float, bool);

//private:
    /**
     * @hash   1298390592
     * @symbol  ?_isStuckBlock\@StalkAndPounceOnTargetGoal\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isStuckBlock(class BlockPos) const;
    /**
     * @hash   -1908116919
     * @symbol  ?_preparePounce\@StalkAndPounceOnTargetGoal\@\@AEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void _preparePounce(class Vec3 const &, class Vec3 const &);

private:

};