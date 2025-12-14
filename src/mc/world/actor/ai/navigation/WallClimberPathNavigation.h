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
    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;

    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos) /*override*/;

    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target) /*override*/;

    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed) /*override*/;

    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;

    virtual ~WallClimberPathNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isInsideBorderBlock(::AABB const& aabb, ::BlockSource const& region, float grow) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::NavigationComponent& parent, ::Mob& mob);

    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCAPI ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed);

    MCAPI bool $canUpdatePath(::Mob const& mob) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
