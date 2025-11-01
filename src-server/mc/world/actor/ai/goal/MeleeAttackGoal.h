#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Mob;
class Vec3;
// clang-format on

class MeleeAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // MeleeAttackGoal inner types define
    using LineOfSightEvaluator = bool(*) (::Mob const&, ::Actor const&);
    
    using AttackReachEvaluator = bool(*) (::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const);
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, bool(*) (::Mob const&, ::Vec3 const&, float const, float const, float const, float const, int const)> mReachEvaluator;
    ::ll::TypedStorage<8, 8, bool(*) (::Mob const&, ::Actor const&)> mLineOfSightEvaluator;
    ::ll::TypedStorage<4, 4, float> mReachMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackGoal() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MeleeAttackGoal(::Mob& mob);

    MCAPI float _getAttackReachSqr(::Actor const& target) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canReachTarget(::Mob const& mob, ::Vec3 const& targetPosition, float attackReachSq, float targetMinY, float targetMaxY, float targetDistanceSqXZ, int attackTicks);

    MCAPI static bool _canReachTargetLegacy(::Mob const& mob, ::Vec3 const& targetPosition, float attackReachSq, float targetMinY, float targetMaxY, float targetDistanceSqXZ, int attackTicks);

    MCFOLD static bool _isTargetInLineOfSight(::Mob const& mob, ::Actor const& target);

    MCAPI static bool _isTargetInLineOfSightLegacy(::Mob const& mob, ::Actor const& target);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& min3DAttackVersion();

    MCAPI static ::BaseGameVersion const& minHitThroughWallFixVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
