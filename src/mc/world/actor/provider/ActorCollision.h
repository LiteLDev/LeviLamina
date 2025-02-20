#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorCollision {
// functions
// NOLINTBEGIN
MCAPI float getPickRadius(::EntityContext const& provider);

MCFOLD bool hasCollision(::EntityContext const& provider);

MCFOLD bool hasHorizontalCollision(::EntityContext const& provider);

MCFOLD bool hasVerticalCollision(::EntityContext const& provider);

MCAPI void initializeActor(::EntityContext& provider);

MCAPI void initializePickable(::EntityContext& provider, float pickRadius);

MCAPI void initializePlayer(::EntityContext& provider);

MCAPI bool isKnockedBackOnDeath(::EntityContext const& provider);

MCFOLD bool isOnGround(::EntityContext const& provider);

MCAPI bool isPickable(::EntityContext const& provider);

MCAPI void setCollision(::EntityContext& provider, bool value);

MCAPI void setHorizontalCollision(::EntityContext& provider, bool value);

MCAPI void setOnGround(::EntityContext& provider, bool value);

MCAPI void setVerticalCollision(::EntityContext& provider, bool value);

MCAPI void setWasOnGround(::EntityContext& provider, bool value);

MCAPI bool wasOnGround(::EntityContext const& provider);
// NOLINTEND

} // namespace ActorCollision
