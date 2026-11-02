#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"
#include "mc/world/actor/ai/goal/UseKineticWeaponGoalSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace SharedTypes { struct FloatRange; }
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cacheDamageSettings();

    MCNAPI void _findRearRetreatPosition(::Actor const& target, ::SharedTypes::FloatRange distance);

    MCNAPI void _startCooldown(::Actor const& target);

    MCNAPI void _startRepositioning(::Actor const& target);

    MCNAPI void _tryFindRandomRetreatPosition(::SharedTypes::FloatRange distance);

    MCNAPI void _tryMoveToRetreatPosition(::UseKineticWeaponGoal::ForcePathRecalculation forceRecalculation);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND
};
