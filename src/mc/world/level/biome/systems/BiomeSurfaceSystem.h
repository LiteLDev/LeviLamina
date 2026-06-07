#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class SurfaceBuilderRegistry;
// clang-format on

namespace BiomeSurfaceSystem {
// functions
// NOLINTBEGIN
MCAPI void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters);

MCAPI void resolveBuilderImplementation(
    ::BiomeRegistry&                biomeRegistry,
    ::SurfaceBuilderRegistry const& surfaceBuilderRegistry,
    uint                            levelSeed
);
// NOLINTEND

} // namespace BiomeSurfaceSystem
