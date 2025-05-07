#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomLookAroundGoal.h"
#include "mc/world/level/Tick.h"

class RandomLookAroundAndSitGoal : public ::RandomLookAroundGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mContinueSittingOnReload;
    ::ll::TypedStorage<1, 1, bool>   mContinueIfLeashed;
    ::ll::TypedStorage<4, 4, int>    mMinLookCount;
    ::ll::TypedStorage<4, 4, int>    mMaxLookCount;
    ::ll::TypedStorage<4, 4, int>    mRemainingLookCount;
    ::ll::TypedStorage<4, 4, int>    mRandomLookAroundCooldown;
    ::ll::TypedStorage<8, 8, ::Tick> mNextAvailableSitTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RandomLookAroundAndSitGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
