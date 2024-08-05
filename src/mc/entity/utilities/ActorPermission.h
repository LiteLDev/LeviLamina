#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"

namespace ActorPermission {
// NOLINTBEGIN
MCAPI ::GameType getUnmappedGameType(class EntityContext const& provider);

MCAPI void initialize(class EntityContext& provider);

MCAPI void setUnmappedGameType(class EntityContext& provider, ::GameType gameType);
// NOLINTEND

}; // namespace ActorPermission
