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
    // prevent constructor by default
    FindUnderwaterTreasureGoal& operator=(FindUnderwaterTreasureGoal const&);
    FindUnderwaterTreasureGoal(FindUnderwaterTreasureGoal const&);
    FindUnderwaterTreasureGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual bool canBeInterrupted() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~FindUnderwaterTreasureGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI bool $canBeInterrupted();

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
