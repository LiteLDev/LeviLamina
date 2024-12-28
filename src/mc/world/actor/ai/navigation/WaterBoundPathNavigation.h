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
    ::ll::UntypedStorage<1, 1> mUnk547318;
    ::ll::UntypedStorage<1, 1> mUnk598e6c;
    ::ll::UntypedStorage<4, 4> mUnk6af2a7;
    ::ll::UntypedStorage<4, 4> mUnkf8a3ad;
    ::ll::UntypedStorage<4, 4> mUnk495db7;
    ::ll::UntypedStorage<4, 4> mUnk518298;
    ::ll::UntypedStorage<4, 4> mUnk434fd2;
    ::ll::UntypedStorage<4, 4> mUnkb145ae;
    ::ll::UntypedStorage<4, 4> mUnk82ab9f;
    ::ll::UntypedStorage<4, 4> mUnkc911ec;
    ::ll::UntypedStorage<4, 4> mUnke4028d;
    ::ll::UntypedStorage<4, 4> mUnk82861a;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterBoundPathNavigation& operator=(WaterBoundPathNavigation const&);
    WaterBoundPathNavigation(WaterBoundPathNavigation const&);
    WaterBoundPathNavigation();

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
    virtual ~WaterBoundPathNavigation() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
