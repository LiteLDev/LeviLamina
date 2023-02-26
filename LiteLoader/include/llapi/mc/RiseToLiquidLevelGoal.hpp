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
     * @vftbl  6
     * @symbol  ?tick\@RiseToLiquidLevelGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RiseToLiquidLevelGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0RiseToLiquidLevelGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI RiseToLiquidLevelGoal(class Mob &, float, float, float);

//private:
    /**
     * @symbol  ?findLiquidLevel\@RiseToLiquidLevelGoal\@\@AEAAMXZ
     */
    MCAPI float findLiquidLevel();

private:

};