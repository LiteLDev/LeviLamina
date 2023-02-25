/**
 * @file  StrollTowardsVillageGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveToVillageGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrollTowardsVillageGoal.
 *
 */
class StrollTowardsVillageGoal : public MoveToVillageGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STROLLTOWARDSVILLAGEGOAL
public:
    class StrollTowardsVillageGoal& operator=(class StrollTowardsVillageGoal const &) = delete;
    StrollTowardsVillageGoal(class StrollTowardsVillageGoal const &) = delete;
    StrollTowardsVillageGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StrollTowardsVillageGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@StrollTowardsVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@StrollTowardsVillageGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl  17
     * @symbol  ?_selectRandomPosInVillage\@StrollTowardsVillageGoal\@\@MEAA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage();
    /**
     * @symbol  ??0StrollTowardsVillageGoal\@\@QEAA\@AEAVMob\@\@MMMHM\@Z
     */
    MCAPI StrollTowardsVillageGoal(class Mob &, float, float, float, int, float);

};