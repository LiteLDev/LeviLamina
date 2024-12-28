#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Mob;
class NavigationComponent;
class Path;
class Vec2;
class Vec3;
struct NavigationDescription;
// clang-format on

class PathNavigation {
public:
    // prevent constructor by default
    PathNavigation& operator=(PathNavigation const&);
    PathNavigation(PathNavigation const&);
    PathNavigation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PathNavigation();

    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription* description);

    // vIndex: 2
    virtual void tick(::NavigationComponent& parent, ::Mob& mob);

    // vIndex: 3
    virtual ::Vec3 getTempMobPos(::Mob const& mob) const;

    // vIndex: 5
    virtual ::std::unique_ptr<::Path> createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    // vIndex: 4
    virtual ::std::unique_ptr<::Path> createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    // vIndex: 8
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);

    // vIndex: 7
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor& target, float speed);

    // vIndex: 6
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed);

    // vIndex: 9
    virtual void stop(::NavigationComponent& parent, ::Mob& mob);

    // vIndex: 10
    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);

    // vIndex: 11
    virtual bool canUpdatePath(::Mob const& mob) const;

    // vIndex: 12
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float _getHighestBlockHeight(::BlockSource& region, ::Mob& mob, ::Vec3 const& pos, ::Vec2 const& aabb) const;

    MCAPI bool _isPositionOnlyInAir(::BlockSource const& region, ::Vec3 const& pos, ::Vec2 const& aabb) const;

    MCAPI ::NodeType isFree(
        ::NavigationComponent& parent,
        ::Mob&                 mob,
        ::BlockPos const&      lastPathPos,
        ::BlockPos const&      testPos,
        ::BlockPos const&      size,
        ::CanJumpIntoNode      jumpIntoNode
    );
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

    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);

    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor& target, float speed);

    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed);

    MCAPI void $stop(::NavigationComponent& parent, ::Mob& mob);

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
