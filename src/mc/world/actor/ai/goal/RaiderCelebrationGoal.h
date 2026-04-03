#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RaiderCelebrationGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, int>                                    mNextJumpTickTimer;
    ::ll::TypedStorage<4, 4, int>                                    mNextSoundTickTimer;
    ::ll::TypedStorage<4, 4, int>                                    mRuntimeTicks;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>              mSoundIntervalRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>              mJumpIntervalRange;
    ::ll::TypedStorage<4, 4, float>                                  mDuration;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mCelebrationEndEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    RaiderCelebrationGoal& operator=(RaiderCelebrationGoal const&);
    RaiderCelebrationGoal(RaiderCelebrationGoal const&);
    RaiderCelebrationGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~RaiderCelebrationGoal() /*override*/ = default;
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
