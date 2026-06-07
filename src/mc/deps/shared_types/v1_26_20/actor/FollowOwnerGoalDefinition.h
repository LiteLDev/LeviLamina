#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct FollowOwnerGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float> mStartDistance;
    ::ll::TypedStorage<4, 4, float> mStopDistance;
    ::ll::TypedStorage<1, 1, bool>  mCanTeleport;
    ::ll::TypedStorage<4, 4, int>   mPostTeleportDistance;
    ::ll::TypedStorage<1, 1, bool>  mIgnoreVibrations;
    ::ll::TypedStorage<4, 4, float> mMaxDistance;
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

} // namespace SharedTypes::v1_26_20
