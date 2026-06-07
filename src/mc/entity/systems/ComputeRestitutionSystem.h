#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class EntitySystems;
class Vec3;
struct EntitySystemTickingMode;
// clang-format on

namespace ComputeRestitutionSystem {
// functions
// NOLINTBEGIN
MCAPI ::AABB getMaxCollisionVolume(::Vec3 const& speed, ::AABB const& shape);

MCAPI void registerSystems(::EntitySystems& systems, ::EntitySystemTickingMode const& tickingMode);
// NOLINTEND

} // namespace ComputeRestitutionSystem
