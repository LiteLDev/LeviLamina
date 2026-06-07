#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/goal/AquaticChargeAttackSettings.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class AquaticChargeAttackGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<4, 36, ::AquaticChargeAttackSettings>    mSettings;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mTargetId;
    ::ll::TypedStorage<1, 1, bool>                              mHasAttacked;
    ::ll::TypedStorage<1, 1, bool>                              mHasMissed;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mLockedTargetPosition;
    ::ll::TypedStorage<8, 8, ::Tick>                            mNextChargeTick;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mRandomSwimTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mRandomSwimLastPosition;
    ::ll::TypedStorage<8, 8, ::Tick>                            mRandomSwimNoProgressTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    AquaticChargeAttackGoal& operator=(AquaticChargeAttackGoal const&);
    AquaticChargeAttackGoal(AquaticChargeAttackGoal const&);
    AquaticChargeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AquaticChargeAttackGoal(::Mob& mob);

    MCAPI bool _isCloseEnoughToAttack() const;

    MCAPI void _performKnockbackAttack(::Actor& target);

    MCAPI void _resetForNextCharge();

    MCAPI void _transitionToCooldown(bool hasAttacked);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
