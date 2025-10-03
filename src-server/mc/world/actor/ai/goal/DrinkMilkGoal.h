#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class DrinkMilkGoal : public ::Goal {
public:
    // DrinkMilkGoal inner types declare
    // clang-format off
    class DrinkMilkDefinition;
    // clang-format on

    // DrinkMilkGoal inner types define
    class DrinkMilkDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>               mMaxCooldownSeconds;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~DrinkMilkDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mMaxCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<8, 8, ::Tick>              mNextStartTick;
    ::ll::TypedStorage<8, 8, ::Tick>              mFinishUsingItemTick;
    // NOLINTEND

public:
    // prevent constructor by default
    DrinkMilkGoal& operator=(DrinkMilkGoal const&);
    DrinkMilkGoal(DrinkMilkGoal const&);
    DrinkMilkGoal();

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

    // vIndex: 0
    virtual ~DrinkMilkGoal() /*override*/ = default;
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
