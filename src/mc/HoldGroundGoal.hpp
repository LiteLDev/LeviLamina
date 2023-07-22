/**
 * @file  HoldGroundGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoldGroundGoal.
 *
 */
class HoldGroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOLDGROUNDGOAL
public:
    class HoldGroundGoal& operator=(class HoldGroundGoal const &) = delete;
    HoldGroundGoal(class HoldGroundGoal const &) = delete;
    HoldGroundGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HoldGroundGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@HoldGroundGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@HoldGroundGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@HoldGroundGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@HoldGroundGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@HoldGroundGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@HoldGroundGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0HoldGroundGoal\@\@QEAA\@AEAVMob\@\@M_NMAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI HoldGroundGoal(class Mob &, float, bool, float, class ActorDefinitionTrigger const &);

};