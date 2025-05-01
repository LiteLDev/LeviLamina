#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MovementEffect;
class MovementEffectPacket;
class ReplayStateComponent;
struct MovementEffectsComponent;
struct RuntimeIDComponent;
// clang-format on

namespace MovementEffects {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::MovementEffectPacket>
addToEntity(::EntityContext& entity, ::MovementEffect movementEffect, bool isClientSide);

MCNAPI ::std::optional<::MovementEffectPacket> addToEntity(
    ::MovementEffectsComponent& movementEffects,
    ::ReplayStateComponent*     replayState,
    ::RuntimeIDComponent const* runtimeID,
    ::MovementEffect            movementEffect,
    bool                        isClientSide
);
// NOLINTEND

} // namespace MovementEffects
