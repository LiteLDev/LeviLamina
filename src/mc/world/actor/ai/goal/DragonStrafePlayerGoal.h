#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Path;
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
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~DragonStrafePlayerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void findNewTarget();

    MCAPI void navigateToNextPathNode();

    MCAPI void setTarget(::Actor* target);
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
