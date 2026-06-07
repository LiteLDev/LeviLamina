#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MoveOutdoorsGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveOutdoorsGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_COOLDOWN_TIMEOUT();

    MCAPI static float const& DEFAULT_GOAL_RADIUS();

    MCAPI static int const& DEFAULT_SEARCH_COUNT();

    MCAPI static int const& DEFAULT_SEARCH_HEIGHT();

    MCAPI static int const& DEFAULT_SEARCH_RANGE();

    MCAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
