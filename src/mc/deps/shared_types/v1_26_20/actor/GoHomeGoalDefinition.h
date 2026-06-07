#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct GoHomeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                            mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                                              mInterval;
    ::ll::TypedStorage<4, 4, float>                                                            mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                                            mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnFailedTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    GoHomeGoalDefinition& operator=(GoHomeGoalDefinition const&);
    GoHomeGoalDefinition(GoHomeGoalDefinition const&);
    GoHomeGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_20::GoHomeGoalDefinition& operator=(::SharedTypes::v1_26_20::GoHomeGoalDefinition&&);

    MCAPI ~GoHomeGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_CALCULATE_NEW_PATH_RADIUS();

    MCAPI static float const& DEFAULT_GOAL_RADIUS();

    MCAPI static int const& DEFAULT_INTERVAL();

    MCAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
