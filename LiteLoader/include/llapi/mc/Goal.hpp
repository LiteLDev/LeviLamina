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
     * @hash   783357947
     * @vftbl  2
     * @symbol  ?canContinueToUse\@Goal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -237841755
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
     * @hash   1403256531
     * @vftbl  8
     * @symbol  ?isTargetGoal\@Goal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOAL
    /**
     * @hash   -457824779
     * @symbol  ?onPlayerDimensionChanged\@Goal\@\@UEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @hash   1244003350
     * @symbol  ?start\@Goal\@\@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @hash   -1105361034
     * @symbol  ?stop\@Goal\@\@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @hash   -267036943
     * @symbol  ?tick\@Goal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @hash   -1018910769
     * @symbol  ??0Goal\@\@QEAA\@XZ
     */
    MCAPI Goal();
    /**
     * @hash   592094182
     * @symbol  ?getRequiredControlFlags\@Goal\@\@QEBAHXZ
     */
    MCAPI int getRequiredControlFlags() const;
    /**
     * @hash   286173813
     * @symbol  ?getTypeId\@Goal\@\@QEBAGXZ
     */
    MCAPI unsigned short getTypeId() const;
    /**
     * @hash   357040312
     * @symbol  ?setRequiredControlFlags\@Goal\@\@QEAAXH\@Z
     */
    MCAPI void setRequiredControlFlags(int);
    /**
     * @hash   -1587687721
     * @symbol  ?setTypeId\@Goal\@\@QEAAXG\@Z
     */
    MCAPI void setTypeId(unsigned short);

};