/**
 * @file  RandomLookAroundAndSitGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomLookAroundAndSitGoal.
 *
 */
class RandomLookAroundAndSitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDANDSITGOAL
public:
    class RandomLookAroundAndSitGoal& operator=(class RandomLookAroundAndSitGoal const &) = delete;
    RandomLookAroundAndSitGoal(class RandomLookAroundAndSitGoal const &) = delete;
    RandomLookAroundAndSitGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomLookAroundAndSitGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@RandomLookAroundAndSitGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RandomLookAroundAndSitGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@RandomLookAroundAndSitGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@RandomLookAroundAndSitGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@RandomLookAroundAndSitGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RandomLookAroundAndSitGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0RandomLookAroundAndSitGoal\@\@QEAA\@AEAVMob\@\@_NHHMMHHMH\@Z
     */
    MCAPI RandomLookAroundAndSitGoal(class Mob &, bool, int, int, float, float, int, int, float, int);

};