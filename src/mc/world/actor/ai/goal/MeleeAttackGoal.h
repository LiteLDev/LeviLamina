#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

class MeleeAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // prevent constructor by default
    MeleeAttackGoal& operator=(MeleeAttackGoal const&);
    MeleeAttackGoal(MeleeAttackGoal const&);
    MeleeAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MeleeAttackGoal@@UEAA@XZ
    virtual ~MeleeAttackGoal();

    // vIndex: 6, symbol: ?tick@MeleeAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MeleeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MeleeAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MeleeAttackGoal(class Mob& mob);

    // symbol: ?_canReachTarget@MeleeAttackGoal@@SA_NAEBVMob@@AEBVVec3@@MMMMH@Z
    MCAPI static bool _canReachTarget(class Mob const&, class Vec3 const&, float, float, float, float, int);

    // symbol: ?_canReachTargetLegacy@MeleeAttackGoal@@SA_NAEBVMob@@AEBVVec3@@MMMMH@Z
    MCAPI static bool _canReachTargetLegacy(class Mob const&, class Vec3 const&, float, float, float, float, int);

    // symbol: ?_isTargetInLineOfSight@MeleeAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
    MCAPI static bool _isTargetInLineOfSight(class Mob const&, class Actor const&);

    // symbol: ?_isTargetInLineOfSightLegacy@MeleeAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
    MCAPI static bool _isTargetInLineOfSightLegacy(class Mob const&, class Actor const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getAttackReachSqr@MeleeAttackGoal@@IEBAMAEBVActor@@@Z
    MCAPI float _getAttackReachSqr(class Actor const& target) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?min3DAttackVersion@MeleeAttackGoal@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const min3DAttackVersion;

    // symbol: ?minHitThroughWallFixVersion@MeleeAttackGoal@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion;

    // NOLINTEND
};
