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
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription* description) /*override*/;

    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;

    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos) /*override*/;

    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target) /*override*/;

    virtual void stop(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;

    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ~FlyingPathNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _disableGravity(::Mob& mob);

    MCNAPI void _restorePreviousGravityFlag(::Mob& mob);

    MCNAPI void _storePreviousGravityFlag(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob, ::NavigationDescription* description);

    MCNAPI void $tick(::NavigationComponent& parent, ::Mob& mob);

    MCNAPI ::Vec3 $getTempMobPos(::Mob const& mob) const;

    MCNAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCNAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCNAPI void $stop(::NavigationComponent& parent, ::Mob& mob);

    MCNAPI bool $canUpdatePath(::Mob const& mob) const;

    MCNAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
