#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MeleeAttackBaseGoal;
// clang-format on

class MeleeAttackBaseDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAttackOnce;
    ::ll::TypedStorage<1, 1, bool> mRequireCompletePath;
    ::ll::TypedStorage<1, 1, bool> mTrackTarget;
    ::ll::TypedStorage<4, 4, int> mRandomStopInterval;
    ::ll::TypedStorage<4, 4, float> mCooldownTime;
    ::ll::TypedStorage<4, 4, float> mMinPathTime;
    ::ll::TypedStorage<4, 4, float> mMaxPathTime;
    ::ll::TypedStorage<4, 4, float> mPathFailTimeIncrease;
    ::ll::TypedStorage<4, 4, float> mInnerBoundaryTimeIncrease;
    ::ll::TypedStorage<4, 4, float> mOuterBoundaryTimeIncrease;
    ::ll::TypedStorage<4, 4, float> mPathInnerBoundary;
    ::ll::TypedStorage<4, 4, float> mPathOuterBoundary;
    ::ll::TypedStorage<4, 4, float> mMeleeFov;
    ::ll::TypedStorage<4, 4, float> mMaxRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<8, 32, ::std::string> mAttackTypes;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnKill;
    ::ll::TypedStorage<1, 1, bool> mSetPersistent;
    ::ll::TypedStorage<1, 1, bool> mCanSpreadOnFire;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackBaseDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeleeAttackBaseDefinition();

    MCAPI void initialize(::EntityContext& entity, ::MeleeAttackBaseGoal& goal) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
