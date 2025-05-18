#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomStrollGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<4, 4, float>       mSpeed;
    ::ll::TypedStorage<4, 4, int>         mXZDist;
    ::ll::TypedStorage<4, 4, int>         mYDist;
    ::ll::TypedStorage<4, 4, int>         mInterval;
    ::ll::TypedStorage<4, 12, ::Vec3>     mWantedPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos> mChosenEndPos;
    ::ll::TypedStorage<1, 1, bool>        mReachedTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomStrollGoal& operator=(RandomStrollGoal const&);
    RandomStrollGoal(RandomStrollGoal const&);
    RandomStrollGoal();

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

    // vIndex: 10
    virtual bool _setWantedPosition();

    // vIndex: 0
    virtual ~RandomStrollGoal() /*override*/ = default;
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

    MCNAPI bool $_setWantedPosition();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
