/**
 * @file  SquidOutOfWaterGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SquidOutOfWaterGoal.
 *
 */
class SquidOutOfWaterGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDOUTOFWATERGOAL
public:
    class SquidOutOfWaterGoal& operator=(class SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal(class SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SquidOutOfWaterGoal();
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
     * @hash   933452146
     * @vftbl  4
     * @symbol  ?start\@SquidOutOfWaterGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -2072911385
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SquidOutOfWaterGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDOUTOFWATERGOAL
    /**
     * @hash   -1271515049
     * @symbol  ?canContinueToUse\@SquidOutOfWaterGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @hash   -2107574151
     * @symbol  ?canUse\@SquidOutOfWaterGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
    /**
     * @hash   1114091058
     * @symbol  ?stop\@SquidOutOfWaterGoal\@\@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @hash   -13911315
     * @symbol  ?tick\@SquidOutOfWaterGoal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif

};