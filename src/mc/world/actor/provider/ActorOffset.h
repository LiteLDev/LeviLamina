#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorOffset {
// NOLINTBEGIN
MCAPI class Vec3 getEyeOffset(class EntityContext const& entity);

MCAPI class Vec3 getHeadOffset(class EntityContext const& entity);

MCAPI float getHeightOffset(class EntityContext const& entity);

MCAPI void initializeActor(class EntityContext& entity);

MCAPI void initializePlayer(class EntityContext& entity);

MCAPI void setAABBRelativeScaling(
    class EntityContext&      entity,
    std::optional<class Vec2> headScalar,
    std::optional<class Vec2> eyeScalar,
    std::optional<class Vec2> breathingScalar,
    std::optional<class Vec2> mouthScalar
);

MCAPI void setAABBRelativeScalingAndScaleNow(
    class EntityContext&      entity,
    std::optional<class Vec2> headScalar,
    std::optional<class Vec2> eyeScalar,
    std::optional<class Vec2> breathingScalar,
    std::optional<class Vec2> mouthScalar
);

MCAPI void setAbsoluteScaling(
    class EntityContext&      entity,
    std::optional<class Vec3> headOffset,
    std::optional<class Vec3> eyeOffset,
    std::optional<class Vec3> breathingOffset,
    std::optional<class Vec3> mouthOffset
);

MCAPI void setBreathingOffset(class EntityContext& entity, class Vec3 const& breathingOffset);

MCAPI void setExplosionOffset(class EntityContext& entity, float explosionOffset);

MCAPI void setEyeOffset(class EntityContext& entity, class Vec3 const& eyeOffset);

MCAPI void setHeightOffset(class EntityContext& entity, float heightOffset);

MCAPI void setShulkerScaling(class EntityContext& entity);
// NOLINTEND

}; // namespace ActorOffset
