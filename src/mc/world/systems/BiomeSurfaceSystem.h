#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace BiomeSurfaceSystem {
/**
 * @symbol ?buildSurfaceAt\@BiomeSurfaceSystem\@\@YAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
 */
MCAPI void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&);
/**
 * @symbol
 * ?resolveBuilderImplementation\@BiomeSurfaceSystem\@\@YAXAEAVEntityRegistry\@\@AEBVSurfaceBuilderRegistry\@\@I\@Z
 */
MCAPI void resolveBuilderImplementation(class EntityRegistry&, class SurfaceBuilderRegistry const&, unsigned int);

}; // namespace BiomeSurfaceSystem
