#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"
#include "mc/world/actor/ai/goal/UseKineticWeaponGoalSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

class UseKineticWeaponGoal : public ::MeleeAttackBaseGoal {
public:
    // UseKineticWeaponGoal inner types define
    enum class ForcePathRecalculation : int {
        No  = 0,
        Yes = 1,
    };

    enum class State : int {
        Approaching   = 0,
        Attacking     = 1,
        Repositioning = 2,
        Cooldown      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::UseKineticWeaponGoalSettings> mSettings;
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings>        mCachedDamageSettings;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>        mCooldownEndTick;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>    mRetreatPosition;
    ::ll::TypedStorage<4, 4, ::UseKineticWeaponGoal::State>   mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND
};
