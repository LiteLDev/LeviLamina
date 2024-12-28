#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
class Vec3;
// clang-format on

namespace ActorOffset {
// functions
// NOLINTBEGIN
MCAPI ::Vec3 getEyeOffset(::EntityContext const& entity);

MCAPI ::Vec3 getHeadOffset(::EntityContext const& entity);

MCAPI float getHeightOffset(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entity);

MCAPI void initializePlayer(::EntityContext& entity);

MCAPI void setAABBRelativeScaling(
    ::EntityContext&        entity,
    ::std::optional<::Vec2> headScalar,
    ::std::optional<::Vec2> eyeScalar,
    ::std::optional<::Vec2> breathingScalar,
    ::std::optional<::Vec2> mouthScalar
);

MCAPI void setAABBRelativeScalingAndScaleNow(
    ::EntityContext&        entity,
    ::std::optional<::Vec2> headScalar,
    ::std::optional<::Vec2> eyeScalar,
    ::std::optional<::Vec2> breathingScalar,
    ::std::optional<::Vec2> mouthScalar
);

MCAPI void setAbsoluteScaling(
    ::EntityContext&        entity,
    ::std::optional<::Vec3> headOffset,
    ::std::optional<::Vec3> eyeOffset,
    ::std::optional<::Vec3> breathingOffset,
    ::std::optional<::Vec3> mouthOffset
);

MCAPI void setBreathingOffset(::EntityContext& entity, ::Vec3 const& breathingOffset);

MCAPI void setExplosionOffset(::EntityContext& entity, float explosionOffset);

MCAPI void setEyeOffset(::EntityContext& entity, ::Vec3 const& eyeOffset);

MCAPI void setHeightOffset(::EntityContext& entity, float heightOffset);

MCAPI void setShulkerScaling(::EntityContext& entity);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::Vec3 const& DEFAULT_DROP_OFFSET();
// NOLINTEND

} // namespace ActorOffset
