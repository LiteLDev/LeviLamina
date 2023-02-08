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
     * @hash   -1213943815
     * @vftbl  1
     * @symbol  ?canUse\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -473143433
     * @vftbl  2
     * @symbol  ?canContinueToUse\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   368959185
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@JumpToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   1981419730
     * @vftbl  4
     * @symbol  ?start\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1424027198
     * @vftbl  5
     * @symbol  ?stop\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1585387875
     * @vftbl  6
     * @symbol  ?tick\@JumpToBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   141658055
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@JumpToBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1222962358
     * @symbol  ??0JumpToBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI JumpToBlockGoal(class Mob &);
    /**
     * @hash   1936863769
     * @symbol  ?resetCooldown\@JumpToBlockGoal\@\@QEAAXXZ
     */
    MCAPI void resetCooldown();

//private:
    /**
     * @symbol  ?_calculateJumpCurve\@JumpToBlockGoal\@\@AEAA_NMAEBVBlockPos\@\@AEAUWeightedJumpToBlockPos\@1\@\@Z
     */
    MCAPI bool _calculateJumpCurve(float, class BlockPos const &, struct JumpToBlockGoal::WeightedJumpToBlockPos &);
    /**
     * @hash   -326352315
     * @symbol  ?_clearGoalState\@JumpToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _clearGoalState();
    /**
     * @hash   1194845971
     * @symbol  ?_findCandidateBlocks\@JumpToBlockGoal\@\@AEAA_NAEAVNavigationComponent\@\@\@Z
     */
    MCAPI bool _findCandidateBlocks(class NavigationComponent &);
    /**
     * @hash   -640778641
     * @symbol  ?_findJumpableBlocks\@JumpToBlockGoal\@\@AEAA_N_N\@Z
     */
    MCAPI bool _findJumpableBlocks(bool);
    /**
     * @hash   1341029395
     * @symbol  ?_findTargetBlock\@JumpToBlockGoal\@\@AEAA_NXZ
     */
    MCAPI bool _findTargetBlock();
    /**
     * @hash   738325312
     * @symbol  ?_validTransition\@JumpToBlockGoal\@\@AEBA_NAEBVVec3\@\@0\@Z
     */
    MCAPI bool _validTransition(class Vec3 const &, class Vec3 const &) const;

private:

};