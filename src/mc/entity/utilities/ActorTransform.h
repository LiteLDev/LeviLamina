#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorTransform {
// NOLINTBEGIN
MCAPI class Vec2 const& getRenderRotation(class EntityContext const& entity);

MCAPI void initializeActor(class EntityContext& entity);

MCAPI void setRenderPosition(class EntityContext& entity, class Vec3 const&);
// NOLINTEND

}; // namespace ActorTransform
