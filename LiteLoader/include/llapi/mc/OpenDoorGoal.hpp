/**
 * @file  OpenDoorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OpenDoorGoal.
 *
 */
class OpenDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORGOAL
public:
    class OpenDoorGoal& operator=(class OpenDoorGoal const &) = delete;
    OpenDoorGoal(class OpenDoorGoal const &) = delete;
    OpenDoorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OpenDoorGoal();
    /**
     * @hash   -144946555
     * @vftbl  1
     * @symbol  ?canUse\@OpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -83192141
     * @vftbl  2
     * @symbol  ?canContinueToUse\@OpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1098856430
     * @vftbl  4
     * @symbol  ?start\@OpenDoorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1204070334
     * @vftbl  5
     * @symbol  ?stop\@OpenDoorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1819065257
     * @vftbl  6
     * @symbol  ?tick\@OpenDoorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1817124789
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@OpenDoorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -399075325
     * @symbol  ??0OpenDoorGoal\@\@QEAA\@AEAVMob\@\@_N\@Z
     */
    MCAPI OpenDoorGoal(class Mob &, bool);

};