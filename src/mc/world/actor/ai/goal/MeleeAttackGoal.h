#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MeleeAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    MeleeAttackGoal& operator=(MeleeAttackGoal const&);
    MeleeAttackGoal(MeleeAttackGoal const&);
    MeleeAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MeleeAttackGoal@@UEAA@XZ
    virtual ~MeleeAttackGoal();

    // vIndex: 1, symbol: ?canUse@MeleeAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MeleeAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MeleeAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MeleeAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MeleeAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MeleeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 10, symbol: ?_attemptMoveToTarget@MeleeAttackGoal@@MEAAXAEAVActor@@@Z
    virtual void _attemptMoveToTarget(class Actor&);

    // vIndex: 11, symbol: ?_attemptAttackTarget@MeleeAttackGoal@@MEAAXAEAVActor@@MMMAEBVVec3@@@Z
    virtual void _attemptAttackTarget(class Actor&, float, float, float, class Vec3 const&);

    // symbol: ??0MeleeAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MeleeAttackGoal(class Mob&);

    // symbol: ?canReachTarget@MeleeAttackGoal@@SA_NAEBVMob@@AEBVVec3@@MMMMH@Z
    MCAPI static bool canReachTarget(class Mob const&, class Vec3 const&, float, float, float, float, int);

    // symbol: ?canReachTargetLegacy@MeleeAttackGoal@@SA_NAEBVMob@@AEBVVec3@@MMMMH@Z
    MCAPI static bool canReachTargetLegacy(class Mob const&, class Vec3 const&, float, float, float, float, int);

    // symbol: ?isTargetInLineOfSight@MeleeAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
    MCAPI static bool isTargetInLineOfSight(class Mob const&, class Actor const&);

    // symbol: ?isTargetInLineOfSightLegacy@MeleeAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const&, class Actor const&);

    // symbol: ?min3DAttackVersion@MeleeAttackGoal@@2VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const min3DAttackVersion;

    // symbol: ?minHitThroughWallFixVersion@MeleeAttackGoal@@2VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_attemptMoveToTargetPosition@MeleeAttackGoal@@IEAAXAEAVActor@@M@Z
    MCAPI void _attemptMoveToTargetPosition(class Actor&, float);

    // symbol: ?_getAttackReachSqr@MeleeAttackGoal@@IEBAMAEBVActor@@@Z
    MCAPI float _getAttackReachSqr(class Actor const&) const;

    // symbol: ?_inSunlight@MeleeAttackGoal@@IEBA_NAEBVActor@@@Z
    MCAPI bool _inSunlight(class Actor const&) const;

    // NOLINTEND
};
