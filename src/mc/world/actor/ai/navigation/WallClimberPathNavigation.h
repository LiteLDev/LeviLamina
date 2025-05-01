#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockSource;
class Mob;
class NavigationComponent;
class Path;
class Vec3;
// clang-format on

class WallClimberPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPathToPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos) /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target) /*override*/;

    // vIndex: 7
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor& target, float speed) /*override*/;

    // vIndex: 11
    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;

    // vIndex: 0
    virtual ~WallClimberPathNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isInsideBorderBlock(::AABB const& aabb, ::BlockSource const& region, float grow) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::NavigationComponent& parent, ::Mob& mob);

    MCNAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCNAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCNAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor& target, float speed);

    MCNAPI bool $canUpdatePath(::Mob const& mob) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
