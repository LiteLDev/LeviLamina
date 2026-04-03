#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TakeFlowerGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mSpeedModifier;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mFilters;
    ::ll::TypedStorage<4, 4, float>                      mMinPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 4, float>                      mMaxPickupFlowerWaitTicks;
    ::ll::TypedStorage<4, 12, ::Vec3>                    mSearchArea;
    ::ll::TypedStorage<4, 4, float>                      mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                      mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                      mMinDistanceToTargetSquared;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnTakeFlower;
    ::ll::TypedStorage<4, 4, int>                        mPickupFlowerTick;
    ::ll::TypedStorage<1, 1, bool>                       mTakeFlower;
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>           mOfferFlowerMob;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeFlowerGoal& operator=(TakeFlowerGoal const&);
    TakeFlowerGoal(TakeFlowerGoal const&);
    TakeFlowerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~TakeFlowerGoal() /*override*/;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
