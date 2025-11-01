#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MovementEffect;
class MovementEffectPacket;
class ReplayStateComponent;
struct MovementEffectsComponent;
struct RuntimeIDComponent;
// clang-format on

namespace MovementEffects {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::MovementEffectPacket> addToEntity(::MovementEffectsComponent& movementEffects, ::ReplayStateComponent* replayState, ::RuntimeIDComponent const* runtimeID, ::MovementEffect movementEffect, bool isClientSide);
// NOLINTEND

}
