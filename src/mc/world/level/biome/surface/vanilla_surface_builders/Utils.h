#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
struct SurfaceMaterialAttributes;
// clang-format on

namespace VanillaSurfaceBuilders::Utils {
// functions
// NOLINTBEGIN
MCAPI void buildSurface(::ISurfaceBuilder::BuildParameters const& buildParameters);

MCAPI void ensureValidSurfaceMaterials(::SurfaceMaterialAttributes& surfaceMaterials);
// NOLINTEND

} // namespace VanillaSurfaceBuilders::Utils
