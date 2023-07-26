/**
 * @file  MoveToRandomBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToRandomBlockGoal.
 *
 */
class MoveToRandomBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETORANDOMBLOCKGOAL
public:
    class MoveToRandomBlockGoal& operator=(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveToRandomBlockGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveToRandomBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MoveToRandomBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveToRandomBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0MoveToRandomBlockGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI MoveToRandomBlockGoal(class Mob &, float, float, float);

//private:
    /**
     * @symbol  ?_isValidDestinationBlock\@MoveToRandomBlockGoal\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isValidDestinationBlock(class BlockSource &, class BlockPos const &);

private:

};