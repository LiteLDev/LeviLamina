#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Mob;
// clang-format on

class DelayedAttackGoal : public ::MeleeAttackGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mAttackDurationTicks;
    ::ll::TypedStorage<4, 4, int>                                    mPostPathingTicks;
    ::ll::TypedStorage<4, 4, int>                                    mHitDelayTicks;
    ::ll::TypedStorage<4, 4, ::ActorFlags>                           mAttackFlag;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSound;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual int getAttackTicksResetValue() const /*override*/;

    virtual ~DelayedAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _attemptAttack(::Actor& target, bool canReach, bool hasLineOfSight);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isTargetInLineOfSightLegacy(::Mob const& mob, ::Actor const& target);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& mMinLineOfSightFixVersion();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI int $getAttackTicksResetValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
