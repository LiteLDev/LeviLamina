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
MCAPI_S ::Vec3 getEyeOffset(::EntityContext const& entity);

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

MCAPI void setHeightOffset(::EntityContext& entity, float heightOffset);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::Vec3 const& DEFAULT_DROP_OFFSET();
// NOLINTEND

} // namespace ActorOffset
