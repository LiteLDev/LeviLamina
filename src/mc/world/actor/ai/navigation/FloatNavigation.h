#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class NavigationComponent;
class Path;
class Vec3;
// clang-format on

class FloatNavigation : public ::PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za) /*override*/;

    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos) /*override*/;

    virtual ::std::unique_ptr<::Path>
    createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target) /*override*/;

    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed) /*override*/;

    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed) /*override*/;

    virtual bool
    moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed) /*override*/;

    virtual ~FloatNavigation() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);

    MCFOLD ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);

    MCFOLD ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);

    MCFOLD bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);

    MCFOLD bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed);

    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
