#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RangedAttackDefinition : public ::BaseGoalDefinition {
public:
    // RangedAttackDefinition inner types define
    using self = ::RangedAttackDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mBurstShots;
    ::ll::TypedStorage<4, 4, float> mTargetInSightTime;
    ::ll::TypedStorage<4, 4, float> mBurstCooldownTime;
    ::ll::TypedStorage<4, 4, float> mChargeReadyTime;
    ::ll::TypedStorage<4, 4, float> mChargeReloadTime;
    ::ll::TypedStorage<4, 4, float> mReloadTimeMin;
    ::ll::TypedStorage<4, 4, float> mReloadTimeMax;
    ::ll::TypedStorage<4, 4, float> mAttackRadius;
    ::ll::TypedStorage<4, 4, float> mAttackRadiusMin;
    ::ll::TypedStorage<4, 4, float> mMaxRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mRangedFov;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<1, 1, bool>  mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>  mSwing;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RangedAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RangedAttackDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
