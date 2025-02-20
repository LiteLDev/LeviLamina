#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
class Player;
class Vec2;
class Vec3;
struct FloatRange;
struct Tick;
// clang-format on

class TemptGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, float>                                  mSpeed;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Player>>                  mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOldPlayerPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>                                 mOldPlayerRotation;
    ::ll::TypedStorage<1, 1, bool>                                   mCanGetScared;
    ::ll::TypedStorage<4, 4, int>                                    mCalmDown;
    ::ll::TypedStorage<1, 1, bool>                                   mIsRunning;
    ::ll::TypedStorage<1, 1, bool>                                   mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                                   mCanTemptWhileRidden;
    ::ll::TypedStorage<4, 4, int>                                    mPathfinderWaitTicks;
    ::ll::TypedStorage<4, 4, float>                                  mTemptDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>       mItems;
    ::ll::TypedStorage<1, 1, bool>                                   mCanTemptVertically;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
    // NOLINTEND

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
    virtual ~TemptGoal() /*override*/;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
