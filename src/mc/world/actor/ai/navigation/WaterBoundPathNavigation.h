#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Mob;
class NavigationComponent;
class Vec3;
struct NavigationDescription;
// clang-format on

class WaterBoundPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mAllowRiverFollow;
    ::ll::TypedStorage<1, 1, bool>  mFollowingRiver;
    ::ll::TypedStorage<4, 4, int>   mHeadingTicks;
    ::ll::TypedStorage<4, 4, float> mCenteredThreshold;
    ::ll::TypedStorage<4, 4, float> mLookAheadDistance;
    ::ll::TypedStorage<4, 4, float> mMinDepth;
    ::ll::TypedStorage<4, 4, float> mMaxDepth;
    ::ll::TypedStorage<4, 4, float> mSteerDampening;
    ::ll::TypedStorage<4, 4, float> mTerrainAvoidDistance;
    ::ll::TypedStorage<4, 4, float> mXBodyRotation;
    ::ll::TypedStorage<4, 4, float> mYBodyRotation;
    ::ll::TypedStorage<4, 4, float> mZBodyRotation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription* description) /*override*/;

    // vIndex: 2
    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 3
    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;

    // vIndex: 10
    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za) /*override*/;

    // vIndex: 11
    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;

    // vIndex: 12
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~WaterBoundPathNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeInternal(::Mob& mob, ::NavigationDescription* description);

    MCAPI void $tick(::NavigationComponent& parent, ::Mob& mob);

    MCAPI ::Vec3 $getTempMobPos(::Mob const& mob) const;

    MCAPI bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);

    MCAPI bool $canUpdatePath(::Mob const& mob) const;

    MCAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
