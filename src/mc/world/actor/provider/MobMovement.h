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
MCNAPI ::Vec3 const& getLocalMoveVelocity(::EntityContext const& provider);

MCNAPI void initializeMob(::EntityContext& provider);

MCNAPI void resetLocalMoveVelocity(::EntityContext& provider);

MCNAPI void setDiscardFriction(::EntityContext& provider, bool discardFriction);

MCNAPI void setLocalMoveVelocity(::EntityContext& provider, ::Vec3 const& localMoveVelocity);

MCNAPI void setLocalMoveVelocity(
    ::EntityContext&       provider,
    ::std::optional<float> x,
    ::std::optional<float> y,
    ::std::optional<float> z
);
// NOLINTEND

} // namespace MobMovement
