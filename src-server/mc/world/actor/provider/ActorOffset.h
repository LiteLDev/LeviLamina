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
MCNAPI void initializePlayer(::EntityContext& entity);

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

MCNAPI void setHeightOffset(::EntityContext& entity, float heightOffset);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Vec3 const& DEFAULT_DROP_OFFSET();
// NOLINTEND

} // namespace ActorOffset
