/**
 * @file  MoveToLiquidGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToLiquidGoal.
 *
 */
class MoveToLiquidGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLIQUIDGOAL
public:
    class MoveToLiquidGoal& operator=(class MoveToLiquidGoal const &) = delete;
    MoveToLiquidGoal(class MoveToLiquidGoal const &) = delete;
    MoveToLiquidGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveToLiquidGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveToLiquidGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol  ?isValidTarget\@MoveToLiquidGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol  ?findTargetBlock\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @symbol  ??0MoveToLiquidGoal\@\@QEAA\@AEAVMob\@\@MHHHW4MaterialType\@\@M\@Z
     */
    MCAPI MoveToLiquidGoal(class Mob &, float, int, int, int, enum class MaterialType, float);

};