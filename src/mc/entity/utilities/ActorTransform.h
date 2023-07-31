#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorTransform {
// NOLINTBEGIN
/**
 * @symbol ?getRenderRotation\@ActorTransform\@\@YAAEBVVec2\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class Vec2 const& getRenderRotation(class EntityContext const&);
/**
 * @symbol ?initializeActor\@ActorTransform\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&);
/**
 * @symbol ?setRenderPosition\@ActorTransform\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
 */
MCAPI void setRenderPosition(class EntityContext&, class Vec3 const&);
// NOLINTEND

}; // namespace ActorTransform
