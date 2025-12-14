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
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription* description) /*override*/;

    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;

    virtual void stop(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ~GenericPathNavigation() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
