#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
class Player;
// clang-format on

class TemptBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Player>> mPlayer;
    ::ll::TypedStorage<4, 4, float> mSpeed;
    ::ll::TypedStorage<1, 1, bool> mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool> mCanTemptVertically;
    ::ll::TypedStorage<4, 12, ::Vec3> mMobPlayerDelta;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange> mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnEndEvent;
    ::ll::TypedStorage<4, 4, int const> COOLDOWN_TICKS;
    ::ll::TypedStorage<1, 1, bool> mCanGetScared;
    ::ll::TypedStorage<4, 4, int> mCooldown;
    ::ll::TypedStorage<1, 1, bool> mCanMove;
    ::ll::TypedStorage<4, 4, float> mTemptDistance;
    ::ll::TypedStorage<4, 4, float> mStopDistance;
    ::ll::TypedStorage<4, 12, ::Vec3> mOldPlayerPosition;
    ::ll::TypedStorage<4, 8, ::Vec2> mOldPlayerRotation;
    ::ll::TypedStorage<1, 1, bool> mCanTemptWhileRidden;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    TemptBaseGoal& operator=(TemptBaseGoal const&);
    TemptBaseGoal(TemptBaseGoal const&);
    TemptBaseGoal();

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

    // vIndex: 10
    virtual void updateMovement() = 0;

    // vIndex: 11
    virtual void stopMovement() = 0;

    // vIndex: 0
    virtual ~TemptBaseGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TemptBaseGoal(::Mob& mob, float speed, ::std::vector<::ItemDescriptor> const& itemList, ::SharedTypes::Legacy::LevelSoundEvent sound, ::FloatRange soundIntervalRange, bool canGetScared, float temptDistance, float stopDistance, bool canTemptVertically, bool canTemptWhileRidden, ::ActorDefinitionTrigger const& onStartEvent, ::ActorDefinitionTrigger const& onEndEvent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speed, ::std::vector<::ItemDescriptor> const& itemList, ::SharedTypes::Legacy::LevelSoundEvent sound, ::FloatRange soundIntervalRange, bool canGetScared, float temptDistance, float stopDistance, bool canTemptVertically, bool canTemptWhileRidden, ::ActorDefinitionTrigger const& onStartEvent, ::ActorDefinitionTrigger const& onEndEvent);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
