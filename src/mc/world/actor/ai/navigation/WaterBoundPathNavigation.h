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
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription* description) /*override*/;

    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;

    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za) /*override*/;

    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;

    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ~WaterBoundPathNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob, ::NavigationDescription* description);

    MCNAPI void $tick(::NavigationComponent& parent, ::Mob& mob);

    MCNAPI ::Vec3 $getTempMobPos(::Mob const& mob) const;

    MCNAPI bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);

    MCNAPI bool $canUpdatePath(::Mob const& mob) const;

    MCNAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
