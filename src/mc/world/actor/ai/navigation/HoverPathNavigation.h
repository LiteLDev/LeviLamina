#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class HoverPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    HoverPathNavigation& operator=(HoverPathNavigation const&);
    HoverPathNavigation(HoverPathNavigation const&);
    HoverPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoverPathNavigation() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct NavigationDescription* description);

    // vIndex: 2
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 3
    virtual class Vec3 getTempMobPos(class Mob const& mob) const;

    // vIndex: 4
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Vec3 const& pos);

    // vIndex: 5
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Actor& target);

    // vIndex: 9
    virtual void stop(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 11
    virtual bool canUpdatePath(class Mob const& mob) const;

    // vIndex: 12
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
