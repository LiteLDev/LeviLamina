#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class NavigationComponent;
class Path;
class Vec3;
struct NavigationDescription;
// clang-format on

class FlyingPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mHadGravity;
    ::ll::TypedStorage<1, 1, bool>        mCanPathFromAir;
    ::ll::TypedStorage<4, 4, float const> mMinWaypointRadius;
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

    // vIndex: 5
    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos) /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target) /*override*/;

    // vIndex: 9
    virtual void stop(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 11
    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;

    // vIndex: 12
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~FlyingPathNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _disableGravity(::Mob& mob);

    MCAPI void _restorePreviousGravityFlag(::Mob& mob);

    MCAPI void _storePreviousGravityFlag(::Mob& mob);
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

    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCAPI void $stop(::NavigationComponent& parent, ::Mob& mob);

    MCAPI bool $canUpdatePath(::Mob const& mob) const;

    MCAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
