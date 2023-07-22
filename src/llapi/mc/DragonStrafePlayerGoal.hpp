/**
 * @file  DragonStrafePlayerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonStrafePlayerGoal.
 *
 */
class DragonStrafePlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSTRAFEPLAYERGOAL
public:
    class DragonStrafePlayerGoal& operator=(class DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal(class DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonStrafePlayerGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@DragonStrafePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DragonStrafePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DragonStrafePlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0DragonStrafePlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonStrafePlayerGoal(class Mob &);

//private:
    /**
     * @symbol  ?findNewTarget\@DragonStrafePlayerGoal\@\@AEAAXXZ
     */
    MCAPI void findNewTarget();
    /**
     * @symbol  ?navigateToNextPathNode\@DragonStrafePlayerGoal\@\@AEAAXXZ
     */
    MCAPI void navigateToNextPathNode();
    /**
     * @symbol  ?setTarget\@DragonStrafePlayerGoal\@\@AEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setTarget(class Actor *);

private:

};