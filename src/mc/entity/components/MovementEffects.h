#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MovementEffect;
class MovementEffectPacket;
// clang-format on

namespace MovementEffects {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::MovementEffectPacket>
addToEntity(::EntityContext& entity, ::MovementEffect movementEffect, bool isClientSide);
// NOLINTEND

} // namespace MovementEffects
