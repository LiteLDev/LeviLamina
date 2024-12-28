#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
class Vec3;
// clang-format on

namespace ActorTransform {
// functions
// NOLINTBEGIN
MCAPI ::Vec2 const& getRenderRotation(::EntityContext const& entity);

MCAPI void initializeActor(::EntityContext& entity);

MCAPI void setRenderPosition(::EntityContext& entity, ::Vec3 const& newRenderPos);
// NOLINTEND

} // namespace ActorTransform
