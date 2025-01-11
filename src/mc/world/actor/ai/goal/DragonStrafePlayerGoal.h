#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
class WeakEntityRef;
// clang-format on

class DragonStrafePlayerGoal : public ::DragonBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>          mAttackTarget;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mCurrentPath;
    ::ll::TypedStorage<1, 1, bool>                      mClockwise;
    ::ll::TypedStorage<1, 1, bool>                      mDone;
    ::ll::TypedStorage<4, 4, int>                       mHasTargetTicks;
    ::ll::TypedStorage<4, 4, int>                       mRangeAndViewTicks;
    ::ll::TypedStorage<4, 4, float>                     mFireballPower;
    ::ll::TypedStorage<4, 4, float>                     mFireballRange;
    ::ll::TypedStorage<4, 4, float>                     mSwitchDirectionProbability;
    ::ll::TypedStorage<4, 4, float>                     mViewAngle;
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
    virtual ~DragonStrafePlayerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DragonStrafePlayerGoal(::Mob& mob);

    MCAPI void findNewTarget();

    MCAPI void navigateToNextPathNode();

    MCAPI void setTarget(::Actor* target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
