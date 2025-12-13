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
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

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
