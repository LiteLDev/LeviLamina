/**
 * @file  FindMountGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindMountGoal.
 *
 */
class FindMountGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDMOUNTGOAL
public:
    class FindMountGoal& operator=(class FindMountGoal const &) = delete;
    FindMountGoal(class FindMountGoal const &) = delete;
    FindMountGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FindMountGoal();
    /**
     * @hash   -1794717811
     * @vftbl  1
     * @symbol  ?canUse\@FindMountGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -927891765
     * @vftbl  2
     * @symbol  ?canContinueToUse\@FindMountGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -342304346
     * @vftbl  4
     * @symbol  ?start\@FindMountGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -737906058
     * @vftbl  5
     * @symbol  ?stop\@FindMountGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1222243359
     * @vftbl  6
     * @symbol  ?tick\@FindMountGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1003108509
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FindMountGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1093459314
     * @symbol  ??0FindMountGoal\@\@QEAA\@AEAVMob\@\@MH_N1MH\@Z
     */
    MCAPI FindMountGoal(class Mob &, float, int, bool, bool, float, int);
    /**
     * @hash   1672096490
     * @symbol  ?isInMountRange\@FindMountGoal\@\@QEAA_NXZ
     */
    MCAPI bool isInMountRange();

};