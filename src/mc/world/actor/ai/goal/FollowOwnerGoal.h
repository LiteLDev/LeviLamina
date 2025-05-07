#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Mob;
class NavigationComponent;
class Player;
// clang-format on

class FollowOwnerGoal : public ::Goal {
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

    // vIndex: 9
    virtual void
    onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;

    // vIndex: 0
    virtual ~FollowOwnerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FollowOwnerGoal(
        ::Mob& mob,
        float  speed,
        float  startDistance,
        float  stopDistance,
        bool   canTeleport,
        int    postTeleportDistance,
        bool   ignoreVibrations,
        float  maxDistance
    );

    MCNAPI bool _canReachOwner(::Mob& owner, ::NavigationComponent& navigationComponent) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Mob& mob,
        float  speed,
        float  startDistance,
        float  stopDistance,
        bool   canTeleport,
        int    postTeleportDistance,
        bool   ignoreVibrations,
        float  maxDistance
    );
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

    MCNAPI void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
