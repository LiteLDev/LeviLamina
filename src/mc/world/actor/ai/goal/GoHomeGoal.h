#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
// clang-format on

class GoHomeGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                   mMob;
    ::ll::TypedStorage<4, 4, float>                                    mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                      mInterval;
    ::ll::TypedStorage<4, 4, float>                                    mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                    mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnFailedTriggers;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mLastEndPos;
    ::ll::TypedStorage<4, 4, float>                                    mGoalRadiusSqr;
    // NOLINTEND

public:
    // prevent constructor by default
    GoHomeGoal& operator=(GoHomeGoal const&);
    GoHomeGoal(GoHomeGoal const&);
    GoHomeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
