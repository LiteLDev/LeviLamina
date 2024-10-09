#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

class MeleeAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // prevent constructor by default
    MeleeAttackGoal& operator=(MeleeAttackGoal const&);
    MeleeAttackGoal(MeleeAttackGoal const&);
    MeleeAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackGoal();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit MeleeAttackGoal(class Mob& mob);

    MCAPI static bool _canReachTarget(
        class Mob const&  mob,
        class Vec3 const& targetPosition,
        float             attackReachSq,
        float             targetMinY,
        float             targetMaxY,
        float             targetDistanceSqXZ,
        int               attackTicks
    );

    MCAPI static bool _canReachTargetLegacy(
        class Mob const&  mob,
        class Vec3 const& targetPosition,
        float             attackReachSq,
        float             targetMinY,
        float             targetMaxY,
        float             targetDistanceSqXZ,
        int               attackTicks
    );

    MCAPI static bool _isTargetInLineOfSight(class Mob const& mob, class Actor const& target);

    MCAPI static bool _isTargetInLineOfSightLegacy(class Mob const& mob, class Actor const& target);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI float _getAttackReachSqr(class Actor const& target) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const min3DAttackVersion;

    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion;

    // NOLINTEND
};
