#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/actor/DragonBaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct DragonStrafePlayerGoalDefinition : public ::SharedTypes::v1_26_0::DragonBaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSwitchDirectionProbability;
    ::ll::TypedStorage<4, 4, float> mRangeAndViewTime;
    ::ll::TypedStorage<4, 4, float> mFireballRange;
    ::ll::TypedStorage<4, 4, float> mViewAngle;
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

} // namespace SharedTypes::v1_26_0
