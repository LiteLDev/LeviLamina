#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec3;
// clang-format on

namespace MobMovement {
// functions
// NOLINTBEGIN
MCAPI ::Vec3 const& getLocalMoveVelocity(::EntityContext const& provider);

MCAPI void initializeMob(::EntityContext& provider);

MCAPI void resetLocalMoveVelocity(::EntityContext& provider);

MCAPI void setDiscardFriction(::EntityContext& provider, bool discardFriction);

MCAPI void setLocalMoveVelocity(::EntityContext& provider, ::Vec3 const& localMoveVelocity);

MCAPI void setLocalMoveVelocity(
    ::EntityContext&       provider,
    ::std::optional<float> x,
    ::std::optional<float> y,
    ::std::optional<float> z
);
// NOLINTEND

} // namespace MobMovement
