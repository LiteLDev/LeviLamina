#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorPermission {
// functions
// NOLINTBEGIN
MCAPI ::GameType getUnmappedGameType(::EntityContext const& provider);

MCAPI void initialize(::EntityContext& provider);

MCAPI void setUnmappedGameType(::EntityContext& provider, ::GameType gameType);
// NOLINTEND

} // namespace ActorPermission
