#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct JumpAroundTargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<4, 4, float>                                      mCooldownSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mCooldownWhenHurtSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mLastHurtDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mPrepareJumpDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool>                                       mCheckCollision;
    ::ll::TypedStorage<4, 4, float>                                      mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int>                                        mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDistanceToTargetRange;
    ::ll::TypedStorage<4, 4, int>                                        mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mLandingPositionRange;
    ::ll::TypedStorage<4, 4, int>                                        mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int>                                        mSnapToSurfaceBlockRange;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                      mAllowedJumpAngles;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpAroundTargetGoalDefinition& operator=(JumpAroundTargetGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpAroundTargetGoalDefinition();

    MCAPI JumpAroundTargetGoalDefinition(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<float> const& DEFAULT_JUMP_ANGLES();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
