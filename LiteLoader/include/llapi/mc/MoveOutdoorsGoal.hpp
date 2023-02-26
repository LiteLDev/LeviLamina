/**
 * @file  MoveOutdoorsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveOutdoorsGoal.
 *
 */
class MoveOutdoorsGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEOUTDOORSGOAL
public:
    class MoveOutdoorsGoal& operator=(class MoveOutdoorsGoal const &) = delete;
    MoveOutdoorsGoal(class MoveOutdoorsGoal const &) = delete;
    MoveOutdoorsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveOutdoorsGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveOutdoorsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@MoveOutdoorsGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  6
     * @symbol  ?tick\@MoveOutdoorsGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveOutdoorsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol  ?isValidTarget\@MoveOutdoorsGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ??0MoveOutdoorsGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveOutdoorsGoal(class Mob &);
    /**
     * @symbol  ?mobHasClearSpaceAbove\@MoveOutdoorsGoal\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool mobHasClearSpaceAbove(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol  ?_setNextTargetTick\@MoveOutdoorsGoal\@\@AEAAXXZ
     */
    MCAPI void _setNextTargetTick();

private:

};