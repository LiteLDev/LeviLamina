/**
 * @file  MoveTowardsRestrictionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsRestrictionGoal.
 *
 */
class MoveTowardsRestrictionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSRESTRICTIONGOAL
public:
    class MoveTowardsRestrictionGoal& operator=(class MoveTowardsRestrictionGoal const &) = delete;
    MoveTowardsRestrictionGoal(class MoveTowardsRestrictionGoal const &) = delete;
    MoveTowardsRestrictionGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveTowardsRestrictionGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveTowardsHomeRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse() = 0;
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MoveTowardsRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@MoveTowardsRestrictionGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveTowardsHomeRestrictionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const = 0;
    /**
     * @symbol  ??0MoveTowardsRestrictionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveTowardsRestrictionGoal(class Mob &);

//protected:
    /**
     * @symbol  ?_getMob\@MoveTowardsRestrictionGoal\@\@IEBAAEBVMob\@\@XZ
     */
    MCAPI class Mob const & _getMob() const;
    /**
     * @symbol  ?_randomizeWantedPositionTowardsRestriction\@MoveTowardsRestrictionGoal\@\@IEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const &);

protected:

};