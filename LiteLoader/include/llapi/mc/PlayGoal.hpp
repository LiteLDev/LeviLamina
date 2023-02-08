/**
 * @file  PlayGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayGoal.
 *
 */
class PlayGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYGOAL
public:
    class PlayGoal& operator=(class PlayGoal const &) = delete;
    PlayGoal(class PlayGoal const &) = delete;
    PlayGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayGoal();
    /**
     * @hash   -1133596903
     * @vftbl  1
     * @symbol  ?canUse\@PlayGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1248170855
     * @vftbl  2
     * @symbol  ?canContinueToUse\@PlayGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -326647950
     * @vftbl  4
     * @symbol  ?start\@PlayGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1806727074
     * @vftbl  5
     * @symbol  ?stop\@PlayGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -99056531
     * @vftbl  6
     * @symbol  ?tick\@PlayGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   968921607
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PlayGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -334521642
     * @symbol  ??0PlayGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayGoal(class Mob &);

};