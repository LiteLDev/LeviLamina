#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class GenericPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    GenericPathNavigation& operator=(GenericPathNavigation const&);
    GenericPathNavigation(GenericPathNavigation const&);
    GenericPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenericPathNavigation() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct NavigationDescription* description);

    // vIndex: 2
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 3
    virtual class Vec3 getTempMobPos(class Mob const& mob) const;

    // vIndex: 9
    virtual void stop(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 12
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
