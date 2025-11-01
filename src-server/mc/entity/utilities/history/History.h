#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/effect/MovementEffectType.h"

// auto generated forward declare list
// clang-format off
struct MovementEffectsComponent;
namespace History { struct EntityWithCache; }
// clang-format on

namespace History {
// functions
// NOLINTBEGIN
MCNAPI void addMovementEffectsToEntity(::History::EntityWithCache& entity, ::MovementEffectsComponent& movementEffects, ::Bedrock::EnumSet<::MovementEffectType, 2> const& toSet);
// NOLINTEND

}
