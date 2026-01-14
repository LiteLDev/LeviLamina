#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SlimeRandomDirectionGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mAddRandomTime;
    ::ll::TypedStorage<4, 4, int>   mTurnRange;
    ::ll::TypedStorage<4, 4, float> mMinChangeDirectionTime;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_ADD_RANDOM_TIME_RANGE();

    MCAPI static float const& DEFAULT_MIN_CHANGE_DIRECTION_TIME();

    MCAPI static int const& DEFAULT_TURN_RANGE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
