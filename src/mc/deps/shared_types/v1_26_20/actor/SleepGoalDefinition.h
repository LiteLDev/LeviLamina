#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/MoveToPOIGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct SleepGoalDefinition : public ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                     mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float>                                                     mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool>                                                      mCanSleepWhileRiding;
    ::ll::TypedStorage<4, 4, float>                                                     mSleepYOffset;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType> mPOIType;
    ::ll::TypedStorage<4, 4, float>                                                     mCooldown;
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
