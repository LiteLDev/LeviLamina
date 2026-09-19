#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct RangedAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // RangedAttackGoalDefinition inner types define
    enum class InRangeMovementMode : int {
        HoldPosition = 0,
        FollowTarget = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       mBurstShots;
    ::ll::TypedStorage<4, 4, float>                     mTargetInSightTime;
    ::ll::TypedStorage<4, 4, float>                     mBurstCooldownTime;
    ::ll::TypedStorage<4, 4, float>                     mChargeReadyTime;
    ::ll::TypedStorage<4, 4, float>                     mChargeReloadTime;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mReloadTime;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAttackRange;
    ::ll::TypedStorage<4, 4, float>                     mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                     mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                     mRangedFov;
    ::ll::TypedStorage<4, 4, float>                     mSpeedMultiplier;
    ::ll::TypedStorage<1, 1, bool>                      mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>                      mSwing;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_50::RangedAttackGoalDefinition::InRangeMovementMode>
        mInRangeMovementMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_50::RangedAttackGoalDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
