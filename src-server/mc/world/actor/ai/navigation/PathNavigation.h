#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PathNavigation() = default;

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
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed);

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
    MCNAPI float _getHighestBlockHeight(::BlockSource& region, ::Mob& mob, ::Vec3 const& pos, ::Vec2 const& aabb) const;

    MCNAPI bool _isPositionOnlyInAir(::BlockSource const& region, ::Vec3 const& pos, ::Vec2 const& aabb) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob, ::NavigationDescription* description);

    MCNAPI void $tick(::NavigationComponent& parent, ::Mob& mob);

    MCNAPI ::Vec3 $getTempMobPos(::Mob const& mob) const;

    MCNAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCNAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCNAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);

    MCNAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed);

    MCNAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed);

    MCNAPI void $stop(::NavigationComponent& parent, ::Mob& mob);

    MCNAPI bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);

    MCNAPI bool $canUpdatePath(::Mob const& mob) const;

    MCNAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
