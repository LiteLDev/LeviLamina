#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Mob;
// clang-format on

class DragonFlamingGoal : public ::BaseGoal {
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
    // prevent constructor by default
    DragonFlamingGoal& operator=(DragonFlamingGoal const&);
    DragonFlamingGoal(DragonFlamingGoal const&);
    DragonFlamingGoal();

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
    MCAPI explicit DragonFlamingGoal(::Mob& mob);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
