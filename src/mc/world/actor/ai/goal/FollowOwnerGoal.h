#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Mob;
class NavigationComponent;
class Player;
// clang-format on

class FollowOwnerGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk74efe6;
    ::ll::UntypedStorage<8, 40> mUnk864621;
    ::ll::UntypedStorage<4, 4>  mUnk6a9953;
    ::ll::UntypedStorage<4, 4>  mUnk4e73d3;
    ::ll::UntypedStorage<4, 4>  mUnke166c4;
    ::ll::UntypedStorage<4, 4>  mUnk4d82e8;
    ::ll::UntypedStorage<4, 4>  mUnkcaf3c7;
    ::ll::UntypedStorage<1, 1>  mUnk3a442c;
    ::ll::UntypedStorage<1, 1>  mUnke91834;
    ::ll::UntypedStorage<1, 1>  mUnk3c25f4;
    ::ll::UntypedStorage<1, 1>  mUnk8cf048;
    ::ll::UntypedStorage<4, 4>  mUnk849675;
    ::ll::UntypedStorage<1, 1>  mUnke625ce;
    ::ll::UntypedStorage<1, 1>  mUnk951725;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&);
    FollowOwnerGoal(FollowOwnerGoal const&);
    FollowOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 9
    virtual void
    onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;

    // vIndex: 0
    virtual ~FollowOwnerGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canReachOwner(::Mob& owner, ::NavigationComponent& navigationComponent) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
