#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct TickWorldDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mRadius;
    ::ll::TypedStorage<4, 4, float> mDistanceToPlayers;
    ::ll::TypedStorage<1, 1, bool>  mNeverDespawn;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_DISTANCE_TO_PLAYERS();

    MCAPI static bool const& DEFAULT_NEVER_DESPAWN();

    MCAPI static uint const& DEFAULT_RADIUS();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
