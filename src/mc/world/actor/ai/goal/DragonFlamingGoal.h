#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
// clang-format on

class DragonFlamingGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&>   mDragon;
    ::ll::TypedStorage<4, 4, int>              mGroundFlameAttackCount;
    ::ll::TypedStorage<4, 4, int>              mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>              mFlameTicks;
    ::ll::TypedStorage<4, 4, int>              mFlameDurationTicks;
    ::ll::TypedStorage<4, 4, int>              mRoarTicks;
    ::ll::TypedStorage<4, 4, int>              mRoarDurationTicks;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mSmokeDurationTicks;
    ::ll::TypedStorage<4, 4, float>            mSmokeRadius;
    ::ll::TypedStorage<4, 16, ::mce::Color>    mSmokeColor;
    // NOLINTEND

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
    virtual ~DragonFlamingGoal() /*override*/ = default;
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
