#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/DepenetrationComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class EntityContext;
class StrictEntityContext;
struct ActorUniqueID;
// clang-format on

namespace ActorCollision {
// functions
// NOLINTBEGIN
MCAPI bool getDepenetrationComponentBit(::EntityContext const& provider, ::DepenetrationComponent::Bit bit);

MCAPI ::std::vector<::AABB> const& getOnewayPhysicsBlocks(::EntityContext const& provider);

MCAPI float getPickRadius(::EntityContext const& provider);

MCAPI ::std::vector<::AABB>& getSubAABBs(::EntityContext& provider);

MCAPI bool hasCollision(::EntityContext const& provider);

MCAPI bool hasHorizontalCollision(::EntityContext const& provider);

MCAPI bool hasVerticalCollision(::EntityContext const& provider);

MCAPI void initializeActor(::EntityContext& provider);

MCAPI void initializePickable(::EntityContext& provider, float pickRadius);

MCAPI bool isOnGround(::EntityContext const& provider);

MCAPI void setDepenetrationComponentBit(::EntityContext& provider, ::DepenetrationComponent::Bit bit, bool value);

MCAPI void setPushedBy(::EntityContext& provider, ::StrictEntityContext context, ::ActorUniqueID const& id);

MCAPI void setSubAABBs(::EntityContext& provider, ::std::vector<::AABB> const& bbs);

MCAPI bool wasOnGround(::EntityContext const& provider);
// NOLINTEND

} // namespace ActorCollision
