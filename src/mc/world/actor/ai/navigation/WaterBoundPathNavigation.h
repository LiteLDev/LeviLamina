#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class WaterBoundPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    WaterBoundPathNavigation& operator=(WaterBoundPathNavigation const&);
    WaterBoundPathNavigation(WaterBoundPathNavigation const&);
    WaterBoundPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WaterBoundPathNavigation() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct NavigationDescription* description);

    // vIndex: 2
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 3
    virtual class Vec3 getTempMobPos(class Mob const& mob) const;

    // vIndex: 10
    virtual bool travel(class NavigationComponent& parent, class Mob& mob, float& xa, float& ya, float& za);

    // vIndex: 11
    virtual bool canUpdatePath(class Mob const& mob) const;

    // vIndex: 12
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
