/**
 * @file  MoveTowardsRestrictionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~MoveTowardsRestrictionGoal();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @hash   834308746
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveTowardsRestrictionGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   393306853
     * @vftbl  4
     * @symbol ?start@MoveTowardsRestrictionGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1314713927
     * @symbol ??0MoveTowardsRestrictionGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MoveTowardsRestrictionGoal(class Mob &);

//protected:
    /**
     * @hash   1093933206
     * @symbol ?_getMob@MoveTowardsRestrictionGoal@@IEBAAEBVMob@@XZ
     */
    MCAPI class Mob const & _getMob() const;
    /**
     * @hash   2027763895
     * @symbol ?_randomizeWantedPositionTowardsRestriction@MoveTowardsRestrictionGoal@@IEAA_NAEBVVec3@@@Z
     */
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const &);

protected:

};