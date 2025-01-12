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

class GenericPathNavigation : public ::PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription* description) /*override*/;

    // vIndex: 2
    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 3
    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;

    // vIndex: 9
    virtual void stop(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 12
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~GenericPathNavigation() /*override*/ = default;
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

    MCAPI void $stop(::NavigationComponent& parent, ::Mob& mob);

    MCAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
