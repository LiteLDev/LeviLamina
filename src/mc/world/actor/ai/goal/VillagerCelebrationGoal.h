#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class VillagerCelebrationGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                     mNextFireworkTick;
    ::ll::TypedStorage<8, 8, ::Tick>                     mEndTick;
    ::ll::TypedStorage<4, 4, float>                      mDuration;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>  mFireworksInterval;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mCelebrationEndEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~VillagerCelebrationGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _launchFirework();

    MCAPI void _setNextFireworkTick();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canUse();

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
