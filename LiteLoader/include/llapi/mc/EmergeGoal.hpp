/**
 * @file  EmergeGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EmergeGoal.
 *
 */
class EmergeGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMERGEGOAL
public:
    class EmergeGoal& operator=(class EmergeGoal const &) = delete;
    EmergeGoal(class EmergeGoal const &) = delete;
    EmergeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EmergeGoal();
    /**
     * @hash   -1435117606
     * @vftbl  1
     * @symbol  ?canUse\@EmergeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -962201608
     * @vftbl  2
     * @symbol  ?canContinueToUse\@EmergeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   330945315
     * @vftbl  4
     * @symbol  ?start\@EmergeGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   645002979
     * @vftbl  5
     * @symbol  ?stop\@EmergeGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -711725346
     * @vftbl  6
     * @symbol  ?tick\@EmergeGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   762795558
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@EmergeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -446610089
     * @symbol  ??0EmergeGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EmergeGoal(class Mob &);

};