/**
 * @file  MoveThroughVillageGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveThroughVillageGoal.
 *
 */
class MoveThroughVillageGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETHROUGHVILLAGEGOAL
public:
    class MoveThroughVillageGoal& operator=(class MoveThroughVillageGoal const &) = delete;
    MoveThroughVillageGoal(class MoveThroughVillageGoal const &) = delete;
    MoveThroughVillageGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveThroughVillageGoal();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
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
     * @hash   1477804110
     * @vftbl  4
     * @symbol  ?start\@MoveThroughVillageGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1922358014
     * @vftbl  5
     * @symbol  ?stop\@MoveThroughVillageGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1132413559
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveThroughVillageGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETHROUGHVILLAGEGOAL
    /**
     * @hash   -1701760669
     * @symbol  ?canContinueToUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @hash   -110067451
     * @symbol  ?canUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
#endif
    /**
     * @hash   -315209436
     * @symbol  ??0MoveThroughVillageGoal\@\@QEAA\@AEAVMob\@\@M_N\@Z
     */
    MCAPI MoveThroughVillageGoal(class Mob &, float, bool);

};