/**
 * @file  RiseToLiquidLevelGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RiseToLiquidLevelGoal.
 *
 */
class RiseToLiquidLevelGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RISETOLIQUIDLEVELGOAL
public:
    class RiseToLiquidLevelGoal& operator=(class RiseToLiquidLevelGoal const &) = delete;
    RiseToLiquidLevelGoal(class RiseToLiquidLevelGoal const &) = delete;
    RiseToLiquidLevelGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RiseToLiquidLevelGoal();
    /**
     * @hash   -264024807
     * @vftbl  1
     * @symbol  ?canUse\@RiseToLiquidLevelGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   1417378925
     * @vftbl  6
     * @symbol  ?tick\@RiseToLiquidLevelGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   217168919
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RiseToLiquidLevelGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1772339941
     * @symbol  ??0RiseToLiquidLevelGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI RiseToLiquidLevelGoal(class Mob &, float, float, float);

//private:
    /**
     * @hash   1468693436
     * @symbol  ?findLiquidLevel\@RiseToLiquidLevelGoal\@\@AEAAMXZ
     */
    MCAPI float findLiquidLevel();

private:

};