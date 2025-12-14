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
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool _setWantedPosition();

    virtual ~RandomStrollGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCFOLD bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $_setWantedPosition();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
