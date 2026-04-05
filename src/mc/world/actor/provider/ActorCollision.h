#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct ActorUniqueID;
// clang-format on

namespace ActorCollision {
// functions
// NOLINTBEGIN
MCAPI float getPickRadius(::EntityContext const& provider);

MCAPI ::ActorUniqueID getPushedByID(::EntityContext const& provider);

MCAPI void initializePickable(::EntityContext& provider, float pickRadius);

MCAPI void initializePlayer(::EntityContext& provider);

MCAPI bool isKnockedBackOnDeath(::EntityContext const& provider);

MCAPI bool isPickable(::EntityContext const& provider);

MCAPI void setCollision(::EntityContext& provider, bool value);

MCAPI void setHorizontalCollision(::EntityContext& provider, bool value);

MCAPI void setIsPickable(::EntityContext& provider, bool isPickable);

MCAPI void setOnGround(::EntityContext& provider, bool value);

MCAPI void setVerticalCollision(::EntityContext& provider, bool value);

MCAPI void setWasOnGround(::EntityContext& provider, bool value);
// NOLINTEND

} // namespace ActorCollision
