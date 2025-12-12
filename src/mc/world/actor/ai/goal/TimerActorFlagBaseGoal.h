#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseDefinition.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TimerActorFlagBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<4, 4, ::ActorFlags>                     mActorFlag;
    ::ll::TypedStorage<8, 240, ::TimerActorFlagBaseDefinition> mDefinition;
    ::ll::TypedStorage<4, 8, ::IntRange>                       mDurationRangeTicks;
    ::ll::TypedStorage<4, 8, ::IntRange>                       mCooldownRangeTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                           mCooldownEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                           mGoalEndTick;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerActorFlagBaseGoal& operator=(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~TimerActorFlagBaseGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TimerActorFlagBaseGoal(::Mob& mob, ::ActorFlags actorFlag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob, ::ActorFlags actorFlag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
