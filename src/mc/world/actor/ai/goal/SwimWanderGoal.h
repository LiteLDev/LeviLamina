#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SwimWanderGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, int>     mTicks;
    ::ll::TypedStorage<4, 4, int>     mWanderTicks;
    ::ll::TypedStorage<4, 4, float>   mInterval;
    ::ll::TypedStorage<4, 4, float>   mLookAheadDistance;
    ::ll::TypedStorage<4, 4, float>   mSpeedMultiplier;
    ::ll::TypedStorage<4, 12, ::Vec3> mWanted;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWanderGoal& operator=(SwimWanderGoal const&);
    SwimWanderGoal(SwimWanderGoal const&);
    SwimWanderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SwimWanderGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _setWantedPosition();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
