#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class WallClimberPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    WallClimberPathNavigation& operator=(WallClimberPathNavigation const&);
    WallClimberPathNavigation(WallClimberPathNavigation const&);
    WallClimberPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WallClimberPathNavigation() = default;

    // vIndex: 2
    virtual void tick(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 4
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Vec3 const& pos);

    // vIndex: 5
    virtual std::unique_ptr<class Path>
    createPath(class NavigationComponent& parent, class Mob& mob, class Actor& target);

    // vIndex: 7
    virtual bool moveTo(class NavigationComponent& parent, class Mob& mob, class Actor& target, float speed);

    // vIndex: 11
    virtual bool canUpdatePath(class Mob const& mob) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isInsideBorderBlock(class AABB const& aabb, class BlockSource const& region, float grow) const;

    // NOLINTEND
};
