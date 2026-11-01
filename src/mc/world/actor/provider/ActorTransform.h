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
MCNAPI ::Vec2 const& getRenderRotation(::EntityContext const& entity);

MCNAPI void initializeActor(::EntityContext& entity);

MCNAPI void setRenderPosition(::EntityContext& entity, ::Vec3 const& newRenderPos);

#ifdef LL_PLAT_C
MCNAPI void setRenderRotation(::EntityContext& entity, ::Vec2 const& newRenderRot);
#endif
// NOLINTEND

} // namespace ActorTransform
