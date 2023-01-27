/**
 * @file  MeleeAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MeleeAttackGoal.
 *
 */
class MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEATTACKGOAL
public:
    class MeleeAttackGoal& operator=(class MeleeAttackGoal const &) = delete;
    MeleeAttackGoal(class MeleeAttackGoal const &) = delete;
    MeleeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MeleeAttackGoal();
    /**
     * @hash   1278029345
     * @vftbl  1
     * @symbol  ?canUse\@MeleeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   2018291567
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MeleeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   516244394
     * @vftbl  4
     * @symbol  ?start\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1405595626
     * @vftbl  5
     * @symbol  ?stop\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1244634725
     * @vftbl  6
     * @symbol  ?tick\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1736302063
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MeleeAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1204359307
     * @vftbl  10
     * @symbol  ?_attemptMoveToTarget\@MeleeAttackGoal\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void _attemptMoveToTarget(class Actor &);
    /**
     * @hash   -1972917825
     * @vftbl  11
     * @symbol  ?_attemptAttackTarget\@MeleeAttackGoal\@\@MEAAXAEAVActor\@\@MMMAEBVVec3\@\@\@Z
     */
    virtual void _attemptAttackTarget(class Actor &, float, float, float, class Vec3 const &);
    /**
     * @hash   1817489518
     * @symbol  ??0MeleeAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MeleeAttackGoal(class Mob &);
    /**
     * @hash   -1296110269
     * @symbol  ?canReachTarget\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVVec3\@\@MMMMH\@Z
     */
    MCAPI static bool canReachTarget(class Mob const &, class Vec3 const &, float, float, float, float, int);
    /**
     * @hash   558586593
     * @symbol  ?canReachTargetLegacy\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVVec3\@\@MMMMH\@Z
     */
    MCAPI static bool canReachTargetLegacy(class Mob const &, class Vec3 const &, float, float, float, float, int);
    /**
     * @hash   -231900648
     * @symbol  ?isTargetInLineOfSight\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSight(class Mob const &, class Actor const &);
    /**
     * @hash   -816027608
     * @symbol  ?isTargetInLineOfSightLegacy\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const &, class Actor const &);
    /**
     * @hash   -707279475
     * @symbol  ?min3DAttackVersion\@MeleeAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const min3DAttackVersion;
    /**
     * @hash   664322923
     * @symbol  ?minHitThroughWallFixVersion\@MeleeAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion;

//protected:
    /**
     * @hash   -950589965
     * @symbol  ?_attemptMoveToTargetPosition\@MeleeAttackGoal\@\@IEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void _attemptMoveToTargetPosition(class Actor &, float);
    /**
     * @hash   1631753975
     * @symbol  ?_getAttackReachSqr\@MeleeAttackGoal\@\@IEBAMAEBVActor\@\@\@Z
     */
    MCAPI float _getAttackReachSqr(class Actor const &) const;
    /**
     * @hash   1483395991
     * @symbol  ?_inSunlight\@MeleeAttackGoal\@\@IEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _inSunlight(class Actor const &) const;

protected:

};