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
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float> mAttackDamage;
    ::ll::TypedStorage<4, 4, float> mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float> mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float> mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float> mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float> mKnockbackHeightCap;
    ::ll::TypedStorage<2, 2, ushort> mAttackCooldownTicks;
    ::ll::TypedStorage<2, 2, ushort> mDurationTicks;
    ::ll::TypedStorage<2, 2, ushort> mDurationTicksUntilAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mChargeSound;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mAnimationLength;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mSoundCooldown;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mSoundDelay;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mSonicBoomCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    SonicBoomGoal& operator=(SonicBoomGoal const&);
    SonicBoomGoal(SonicBoomGoal const&);
    SonicBoomGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SonicBoomGoal() /*override*/ = default;
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
