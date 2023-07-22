/**
 * @file  ExploreOutskirtsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExploreOutskirtsGoal.
 *
 */
class ExploreOutskirtsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOREOUTSKIRTSGOAL
public:
    class ExploreOutskirtsGoal& operator=(class ExploreOutskirtsGoal const &) = delete;
    ExploreOutskirtsGoal(class ExploreOutskirtsGoal const &) = delete;
    ExploreOutskirtsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExploreOutskirtsGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@ExploreOutskirtsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@ExploreOutskirtsGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@ExploreOutskirtsGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@ExploreOutskirtsGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@ExploreOutskirtsGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@ExploreOutskirtsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0ExploreOutskirtsGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ExploreOutskirtsGoal(class Mob &);

};