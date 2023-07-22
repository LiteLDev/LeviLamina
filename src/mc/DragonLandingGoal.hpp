/**
 * @file  DragonLandingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonLandingGoal.
 *
 */
class DragonLandingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONLANDINGGOAL
public:
    class DragonLandingGoal& operator=(class DragonLandingGoal const &) = delete;
    DragonLandingGoal(class DragonLandingGoal const &) = delete;
    DragonLandingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonLandingGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@DragonLandingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DragonLandingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@DragonLandingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@DragonLandingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@DragonLandingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DragonLandingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0DragonLandingGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonLandingGoal(class EnderDragon &);

//private:
    /**
     * @symbol  ?findNewTarget\@DragonLandingGoal\@\@AEAAXXZ
     */
    MCAPI void findNewTarget();

private:

};