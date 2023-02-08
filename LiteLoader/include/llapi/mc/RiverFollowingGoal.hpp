/**
 * @file  RiverFollowingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RiverFollowingGoal.
 *
 */
class RiverFollowingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERFOLLOWINGGOAL
public:
    class RiverFollowingGoal& operator=(class RiverFollowingGoal const &) = delete;
    RiverFollowingGoal(class RiverFollowingGoal const &) = delete;
    RiverFollowingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RiverFollowingGoal();
    /**
     * @hash   -1264599960
     * @vftbl  1
     * @symbol  ?canUse\@RiverFollowingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1012868198
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RiverFollowingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1247741343
     * @vftbl  4
     * @symbol  ?start\@RiverFollowingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   7661057
     * @vftbl  5
     * @symbol  ?stop\@RiverFollowingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   2125857196
     * @vftbl  6
     * @symbol  ?tick\@RiverFollowingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   596453544
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RiverFollowingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   154844549
     * @symbol  ??0RiverFollowingGoal\@\@QEAA\@AEAVMob\@\@MM\@Z
     */
    MCAPI RiverFollowingGoal(class Mob &, float, float);

//protected:
    /**
     * @hash   108915980
     * @symbol  ?determineSteerDirection\@RiverFollowingGoal\@\@IEAAXXZ
     */
    MCAPI void determineSteerDirection();

protected:

};