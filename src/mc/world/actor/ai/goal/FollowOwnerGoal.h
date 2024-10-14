#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowOwnerGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&);
    FollowOwnerGoal(FollowOwnerGoal const&);
    FollowOwnerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FollowOwnerGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 9
    virtual void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canReachOwner(class Mob& owner, class NavigationComponent& navigationComponent) const;

    MCAPI std::optional<class Vec3> _tryToGetTeleportPosition(class Mob& owner) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void onPlayerDimensionChanged$(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
