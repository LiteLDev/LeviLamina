#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/MoveTowardsTargetGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class FollowTargetLeaderGoal : public ::MoveTowardsTargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mLeaderFilters;
    ::ll::TypedStorage<8, 8, ::Tick>              mSearchCooldownInTicks;
    ::ll::TypedStorage<8, 8, ::Tick>              mNextSearchCooldownTick;
    ::ll::TypedStorage<4, 4, float>               mFollowDistSq;
    ::ll::TypedStorage<2, 2, short>               mLocateAttempts;
    ::ll::TypedStorage<1, 1, bool>                mAlwaysLookForLeader;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowTargetLeaderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void stop() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FollowTargetLeaderGoal(
        ::Mob&                    mob,
        float                     speedModifier,
        float                     within,
        float                     followDist,
        bool                      alwaysLookForLeader,
        ::ActorFilterGroup const& leaderFilters,
        int                       searchCooldownInTicks
    );

    MCAPI void _determineMovePos();

    MCAPI bool _evaluateLeaderFilters(::Actor const* actor) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                    mob,
        float                     speedModifier,
        float                     within,
        float                     followDist,
        bool                      alwaysLookForLeader,
        ::ActorFilterGroup const& leaderFilters,
        int                       searchCooldownInTicks
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI bool $canContinueToUse();

    MCFOLD void $stop();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
