/**
 * @file  Goal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Goal.
 *
 */
class Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOAL
public:
    class Goal& operator=(class Goal const &) = delete;
    Goal(class Goal const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Goal();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@Goal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@Goal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0;
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
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  ?isTargetGoal\@Goal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOAL
    /**
     * @symbol  ?onPlayerDimensionChanged\@Goal\@\@UEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?start\@Goal\@\@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @symbol  ?stop\@Goal\@\@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @symbol  ?tick\@Goal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol  ??0Goal\@\@QEAA\@XZ
     */
    MCAPI Goal();
    /**
     * @symbol  ?getRequiredControlFlags\@Goal\@\@QEBAHXZ
     */
    MCAPI int getRequiredControlFlags() const;
    /**
     * @symbol  ?getTypeId\@Goal\@\@QEBAGXZ
     */
    MCAPI unsigned short getTypeId() const;
    /**
     * @symbol  ?setRequiredControlFlags\@Goal\@\@QEAAXH\@Z
     */
    MCAPI void setRequiredControlFlags(int);
    /**
     * @symbol  ?setTypeId\@Goal\@\@QEAAXG\@Z
     */
    MCAPI void setTypeId(unsigned short);

};