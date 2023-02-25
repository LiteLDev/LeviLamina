/**
 * @file  JumpToBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JumpToBlockGoal.
 *
 */
class JumpToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPTOBLOCKGOAL
public:
    class JumpToBlockGoal& operator=(class JumpToBlockGoal const &) = delete;
    JumpToBlockGoal(class JumpToBlockGoal const &) = delete;
    JumpToBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~JumpToBlockGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol  ?start\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@JumpToBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0JumpToBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI JumpToBlockGoal(class Mob &);
    /**
     * @symbol  ?resetCooldown\@JumpToBlockGoal\@\@QEAAXXZ
     */
    MCAPI void resetCooldown();

//private:
    /**
     * @symbol  ?_calculateJumpCurve\@JumpToBlockGoal\@\@AEAA_NMAEBVBlockPos\@\@AEAUWeightedJumpToBlockPos\@1\@\@Z
     */
    MCAPI bool _calculateJumpCurve(float, class BlockPos const &, struct JumpToBlockGoal::WeightedJumpToBlockPos &);
    /**
     * @symbol  ?_clearGoalState\@JumpToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _clearGoalState();
    /**
     * @symbol  ?_findCandidateBlocks\@JumpToBlockGoal\@\@AEAA_NAEAVNavigationComponent\@\@\@Z
     */
    MCAPI bool _findCandidateBlocks(class NavigationComponent &);
    /**
     * @symbol  ?_findJumpableBlocks\@JumpToBlockGoal\@\@AEAA_N_N\@Z
     */
    MCAPI bool _findJumpableBlocks(bool);
    /**
     * @symbol  ?_findTargetBlock\@JumpToBlockGoal\@\@AEAA_NXZ
     */
    MCAPI bool _findTargetBlock();
    /**
     * @symbol  ?_validTransition\@JumpToBlockGoal\@\@AEBA_NAEBVVec3\@\@0\@Z
     */
    MCAPI bool _validTransition(class Vec3 const &, class Vec3 const &) const;

private:

};