#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MeleeAttackGoal {

public:
    // prevent constructor by default
    MeleeAttackGoal& operator=(MeleeAttackGoal const&) = delete;
    MeleeAttackGoal(MeleeAttackGoal const&)            = delete;
    MeleeAttackGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MeleeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MeleeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MeleeAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_attemptMoveToTarget\@MeleeAttackGoal\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void _attemptMoveToTarget(class Actor&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?_attemptAttackTarget\@MeleeAttackGoal\@\@MEAAXAEAVActor\@\@MMMAEBVVec3\@\@\@Z
     */
    virtual void _attemptAttackTarget(class Actor&, float, float, float, class Vec3 const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEATTACKGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MeleeAttackGoal(); // NOLINT
#endif
    /**
     * @symbol ??0MeleeAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MeleeAttackGoal(class Mob&); // NOLINT
    /**
     * @symbol ?canReachTarget\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVVec3\@\@MMMMH\@Z
     */
    MCAPI static bool canReachTarget(class Mob const&, class Vec3 const&, float, float, float, float, int); // NOLINT
    /**
     * @symbol ?canReachTargetLegacy\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVVec3\@\@MMMMH\@Z
     */
    MCAPI static bool
    canReachTargetLegacy(class Mob const&, class Vec3 const&, float, float, float, float, int); // NOLINT
    /**
     * @symbol ?isTargetInLineOfSight\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSight(class Mob const&, class Actor const&); // NOLINT
    /**
     * @symbol ?isTargetInLineOfSightLegacy\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const&, class Actor const&); // NOLINT
    /**
     * @symbol ?min3DAttackVersion\@MeleeAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const min3DAttackVersion; // NOLINT
    /**
     * @symbol ?minHitThroughWallFixVersion\@MeleeAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion; // NOLINT

    // protected:
    /**
     * @symbol ?_attemptMoveToTargetPosition\@MeleeAttackGoal\@\@IEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void _attemptMoveToTargetPosition(class Actor&, float); // NOLINT
    /**
     * @symbol ?_getAttackReachSqr\@MeleeAttackGoal\@\@IEBAMAEBVActor\@\@\@Z
     */
    MCAPI float _getAttackReachSqr(class Actor const&) const; // NOLINT
    /**
     * @symbol ?_inSunlight\@MeleeAttackGoal\@\@IEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _inSunlight(class Actor const&) const; // NOLINT

protected:
};
