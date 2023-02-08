/**
 * @file  HarvestFarmBlockGoal.hpp
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
 * @brief MC class HarvestFarmBlockGoal.
 *
 */
class HarvestFarmBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARVESTFARMBLOCKGOAL
public:
    class HarvestFarmBlockGoal& operator=(class HarvestFarmBlockGoal const &) = delete;
    HarvestFarmBlockGoal(class HarvestFarmBlockGoal const &) = delete;
    HarvestFarmBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HarvestFarmBlockGoal();
    /**
     * @hash   -1549267313
     * @vftbl  1
     * @symbol  ?canUse\@HarvestFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1844845245
     * @vftbl  2
     * @symbol  ?canContinueToUse\@HarvestFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -77380488
     * @vftbl  4
     * @symbol  ?start\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1548514328
     * @vftbl  5
     * @symbol  ?stop\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   151715571
     * @vftbl  6
     * @symbol  ?tick\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -21836367
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@HarvestFarmBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @hash   1643573130
     * @vftbl  11
     * @symbol  ?isValidTarget\@HarvestFarmBlockGoal\@\@MEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -844852948
     * @symbol  ??0HarvestFarmBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI HarvestFarmBlockGoal(class Mob &);

//protected:
    /**
     * @hash   -138910710
     * @symbol  ?trySowCrop\@HarvestFarmBlockGoal\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool trySowCrop(class BlockSource &, class BlockPos const &);

protected:

};