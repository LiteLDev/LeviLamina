#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class Mob;
class Path;
class WeakEntityRef;
// clang-format on

class PickupItemsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnEndEvent;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>             mTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mExcludedItemsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>  mFilteredPickupTargets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>        mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mTargetPos;
    ::ll::TypedStorage<4, 4, int>                              mSearchRange;
    ::ll::TypedStorage<4, 4, int>                              mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                              mRandomStopInterval;
    ::ll::TypedStorage<4, 4, int>                              mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                              mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<4, 4, float>                            mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                            mGoalRadiusSq;
    ::ll::TypedStorage<1, 1, bool>                             mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                             mTrackTarget;
    ::ll::TypedStorage<1, 1, bool>                             mCanPickupAnyItem;
    ::ll::TypedStorage<1, 1, bool>                             mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                             mPickupSameItemsAsInHand;
    ::ll::TypedStorage<1, 1, bool>                             mStopIfHoldingItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PickupItemsGoal& operator=(PickupItemsGoal const&);
    PickupItemsGoal(PickupItemsGoal const&);
    PickupItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
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
