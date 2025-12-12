#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SonicBoomGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, float>                                  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                  mAttackDamage;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHeightCap;
    ::ll::TypedStorage<2, 2, ushort>                                 mAttackCooldownTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDurationTicksUntilAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mChargeSound;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mAnimationLength;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSoundCooldown;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSoundDelay;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSonicBoomCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    SonicBoomGoal& operator=(SonicBoomGoal const&);
    SonicBoomGoal(SonicBoomGoal const&);
    SonicBoomGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SonicBoomGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
