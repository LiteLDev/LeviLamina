#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class FlyingPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    FlyingPathNavigation& operator=(FlyingPathNavigation const&);
    FlyingPathNavigation(FlyingPathNavigation const&);
    FlyingPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlyingPathNavigation() = default;

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

    // private:
    // NOLINTBEGIN
    MCAPI void _restorePreviousGravityFlag(class Mob& mob);

    MCAPI void _storePreviousGravityFlag(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool canUpdatePath$(class Mob const& mob) const;

    MCAPI std::unique_ptr<class Path>
          createPath$(class NavigationComponent& parent, class Mob& mob, class Vec3 const& pos);

    MCAPI std::unique_ptr<class Path>
          createPath$(class NavigationComponent& parent, class Mob& mob, class Actor& target);

    MCAPI class Vec3 getTempMobPos$(class Mob const& mob) const;

    MCAPI void initializeInternal$(class Mob& mob, struct NavigationDescription* description);

    MCAPI void stop$(class NavigationComponent& parent, class Mob& mob);

    MCAPI void tick$(class NavigationComponent& parent, class Mob& mob);

    MCAPI void updatePath$(class NavigationComponent& parent, class Mob& mob);

    // NOLINTEND
};
