#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class DigGoal : public ::Goal {
public:
    // DigGoal inner types define
    enum class CanUseResult : int {
        CanDig                               = 0,
        IsDigging                            = 1,
        NamedAndNotAllowedToDigWhenNamed     = 2,
        NotOnGoundOrInWaterOrInLava          = 3,
        CanSeeDaylightAndShouldDigInDaylight = 4,
        DisturbedByVibration                 = 5,
        DisturbedBySuspicion                 = 6,
        IdlingBeforeStartingGoalAgain        = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                     mGoalInitializationTick;
    ::ll::TypedStorage<4, 4, uint>                       mIdleTimeTicks;
    ::ll::TypedStorage<2, 2, ushort>                     mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                     mEndTick;
    ::ll::TypedStorage<1, 1, bool>                       mAllowDigWhenNamed;
    ::ll::TypedStorage<1, 1, bool>                       mVibrationIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                       mSuspicionIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                       mDigsInDaylight;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStartEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    DigGoal& operator=(DigGoal const&);
    DigGoal(DigGoal const&);
    DigGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~DigGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DigGoal::CanUseResult _canUse() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCFOLD void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
