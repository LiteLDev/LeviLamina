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
MCNAPI bool getDepenetrationComponentBit(::EntityContext const& provider, ::DepenetrationComponent::Bit bit);

MCNAPI ::std::vector<::AABB> const& getOnewayPhysicsBlocks(::EntityContext const& provider);

MCNAPI float getPickRadius(::EntityContext const& provider);

MCNAPI ::std::vector<::AABB>& getSubAABBs(::EntityContext& provider);

MCNAPI bool hasCollision(::EntityContext const& provider);

MCNAPI bool hasHorizontalCollision(::EntityContext const& provider);

MCNAPI bool hasVerticalCollision(::EntityContext const& provider);

MCNAPI void initializeActor(::EntityContext& provider);

MCNAPI void initializePickable(::EntityContext& provider, float pickRadius);

MCNAPI bool isOnGround(::EntityContext const& provider);

MCNAPI void setDepenetrationComponentBit(::EntityContext& provider, ::DepenetrationComponent::Bit bit, bool value);

MCNAPI void setPushedBy(::EntityContext& provider, ::StrictEntityContext context, ::ActorUniqueID const& id);

MCNAPI void setSubAABBs(::EntityContext& provider, ::std::vector<::AABB> const& bbs);

MCNAPI bool wasOnGround(::EntityContext const& provider);
// NOLINTEND

} // namespace ActorCollision
