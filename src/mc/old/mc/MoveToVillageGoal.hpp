/**
 * @file  MoveToVillageGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToVillageGoal.
 *
 */
class MoveToVillageGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOVILLAGEGOAL
public:
    class MoveToVillageGoal& operator=(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveToVillageGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveToVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MoveToVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  6
     * @symbol  ?tick\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveToVillageGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol  ?isValidTarget\@MoveToVillageGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  14
     * @symbol  ?_moveToBlock\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @vftbl  17
     * @symbol  ?_selectRandomPosInVillage\@MoveToVillageGoal\@\@MEAA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage();
    /**
     * @symbol  ??0MoveToVillageGoal\@\@QEAA\@AEAVMob\@\@MMMH\@Z
     */
    MCAPI MoveToVillageGoal(class Mob &, float, float, float, int);

//protected:
    /**
     * @symbol  ?_tryGetCurrentVillage\@MoveToVillageGoal\@\@IEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage();

protected:

};