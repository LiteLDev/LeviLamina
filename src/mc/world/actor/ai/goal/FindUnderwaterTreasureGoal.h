#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
class Vec3;
// clang-format on

class FindUnderwaterTreasureGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<4, 12, ::BlockPos> mDestination;
    ::ll::TypedStorage<4, 12, ::Vec3>     mLastPos;
    ::ll::TypedStorage<4, 4, int>         mBlocksCounter;
    ::ll::TypedStorage<4, 4, int>         mBlocksToTravel;
    ::ll::TypedStorage<4, 4, int>         mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>         mFailedPathing;
    ::ll::TypedStorage<4, 4, int>         mTotalFailedPathing;
    ::ll::TypedStorage<4, 4, float>       mSpeed;
    ::ll::TypedStorage<4, 4, int>         mSearchArea;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~FindUnderwaterTreasureGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD bool $canBeInterrupted();

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
