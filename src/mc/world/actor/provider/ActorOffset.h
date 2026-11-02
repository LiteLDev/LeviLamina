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
MCNAPI ::Vec3 getEyeOffset(::EntityContext const& entity);

MCNAPI ::Vec3 getHeadOffset(::EntityContext const& entity);

MCNAPI float getHeightOffset(::EntityContext const& entity);

MCNAPI void setAABBRelativeScaling(
    ::EntityContext&        entity,
    ::std::optional<::Vec2> headScalar,
    ::std::optional<::Vec2> eyeScalar,
    ::std::optional<::Vec2> breathingScalar,
    ::std::optional<::Vec2> mouthScalar
);

MCNAPI void setAABBRelativeScalingAndScaleNow(
    ::EntityContext&        entity,
    ::std::optional<::Vec2> headScalar,
    ::std::optional<::Vec2> eyeScalar,
    ::std::optional<::Vec2> breathingScalar,
    ::std::optional<::Vec2> mouthScalar
);

MCNAPI void setAbsoluteScaling(
    ::EntityContext&        entity,
    ::std::optional<::Vec3> headOffset,
    ::std::optional<::Vec3> eyeOffset,
    ::std::optional<::Vec3> breathingOffset,
    ::std::optional<::Vec3> mouthOffset
);

MCNAPI void setBreathingOffset(::EntityContext& entity, ::Vec3 const& breathingOffset);

MCNAPI void setExplosionOffset(::EntityContext& entity, float explosionOffset);

MCNAPI void setEyeOffset(::EntityContext& entity, ::Vec3 const& eyeOffset);

MCNAPI void setHeightOffset(::EntityContext& entity, float heightOffset);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Vec3 const& DEFAULT_DROP_OFFSET();
// NOLINTEND

} // namespace ActorOffset
