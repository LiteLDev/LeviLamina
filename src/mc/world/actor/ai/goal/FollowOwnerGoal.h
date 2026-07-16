#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Player;
struct DimensionType;
// clang-format on

class FollowOwnerGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>> mOwner;
    ::ll::TypedStorage<4, 4, int>                mTimeToRecalculatePath;
    ::ll::TypedStorage<4, 4, float>              mSpeed;
    ::ll::TypedStorage<4, 4, float>              mStartDistance;
    ::ll::TypedStorage<4, 4, float>              mStopDistance;
    ::ll::TypedStorage<4, 4, float>              mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>               mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>               mOldAvoidPortals;
    ::ll::TypedStorage<1, 1, bool>               mCanTeleport;
    ::ll::TypedStorage<1, 1, bool>               mIgnoreVibrations;
    ::ll::TypedStorage<4, 4, int>                mPostTeleportDistance;
    ::ll::TypedStorage<1, 1, bool>               mRandomizeAndCheckForClearanceWhenTeleporting;
    ::ll::TypedStorage<1, 1, bool>               mKeepFollowingAfterTeleporting;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&);
    FollowOwnerGoal(FollowOwnerGoal const&);
    FollowOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void
    onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FollowOwnerGoal(::Mob& mob);
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

    MCAPI void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
