/**
 * @file  LayDownGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LayDownGoal.
 *
 */
class LayDownGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAYDOWNGOAL
public:
    class LayDownGoal& operator=(class LayDownGoal const &) = delete;
    LayDownGoal(class LayDownGoal const &) = delete;
    LayDownGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LayDownGoal();
    /**
     * @hash   1087075399
     * @vftbl  1
     * @symbol  ?canUse\@LayDownGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1815577573
     * @vftbl  2
     * @symbol  ?canContinueToUse\@LayDownGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1040516176
     * @vftbl  4
     * @symbol  ?start\@LayDownGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1470602176
     * @vftbl  5
     * @symbol  ?stop\@LayDownGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -592323157
     * @vftbl  6
     * @symbol  ?tick\@LayDownGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1043725495
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@LayDownGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1146128036
     * @symbol  ??0LayDownGoal\@\@QEAA\@AEAVMob\@\@HH\@Z
     */
    MCAPI LayDownGoal(class Mob &, int, int);

};