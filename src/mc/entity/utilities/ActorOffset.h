#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorOffset {
// NOLINTBEGIN
MCAPI class Vec3 getEyeOffset(class EntityContext const& entity);

MCAPI class Vec3 getHeadOffset(class EntityContext const& entity);

MCAPI float getHeightOffset(class EntityContext const& entity);

MCAPI void initializeActor(class EntityContext& entity);

MCAPI void initializePlayer(class EntityContext&);

MCAPI void
setAABBRelativeScaling(class EntityContext&, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>);

MCAPI void
setAABBRelativeScalingAndScaleNow(class EntityContext&, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>, std::optional<class Vec2>);

MCAPI void
setAbsoluteScaling(class EntityContext&, std::optional<class Vec3>, std::optional<class Vec3>, std::optional<class Vec3>, std::optional<class Vec3>);

MCAPI void setBreathingOffset(class EntityContext& entity, class Vec3 const&);

MCAPI void setExplosionOffset(class EntityContext& entity, float);

MCAPI void setEyeOffset(class EntityContext& entity, class Vec3 const&);

MCAPI void setHeightOffset(class EntityContext& entity, float heightOffset);

MCAPI void setShulkerScaling(class EntityContext&);
// NOLINTEND

}; // namespace ActorOffset
