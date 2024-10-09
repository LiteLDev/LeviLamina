#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

class PathNavigation {
public:
    // prevent constructor by default
    PathNavigation& operator=(PathNavigation const&);
    PathNavigation(PathNavigation const&);
    PathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PathNavigation();

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

    // vIndex: 6
    virtual bool moveTo(class NavigationComponent& parent, class Mob& mob, class Vec3 const& pos, float speed);

    // vIndex: 7
    virtual bool moveTo(class NavigationComponent& parent, class Mob& mob, class Actor& target, float speed);

    // vIndex: 8
    virtual bool
    moveTo(class NavigationComponent& parent, class Mob& mob, std::unique_ptr<class Path> newPath, float speed);

    // vIndex: 9
    virtual void stop(class NavigationComponent& parent, class Mob& mob);

    // vIndex: 10
    virtual bool travel(class NavigationComponent& parent, class Mob& mob, float& xa, float& ya, float& za);

    // vIndex: 11
    virtual bool canUpdatePath(class Mob const& mob) const;

    // vIndex: 12
    virtual void updatePath(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI float
    _getHighestBlockHeight(class BlockSource& region, class Mob& mob, class Vec3 const& pos, class Vec2 const& aabb)
        const;

    MCAPI bool
    _isPositionOnlyInAir(class BlockSource const& region, class Vec3 const& pos, class Vec2 const& aabb) const;

    MCAPI ::NodeType isFree(
        class NavigationComponent& parent,
        class Mob&                 mob,
        class BlockPos const&      lastPathPos,
        class BlockPos const&      testPos,
        class BlockPos const&      size,
        ::CanJumpIntoNode          jumpIntoNode
    );

    // NOLINTEND
};
