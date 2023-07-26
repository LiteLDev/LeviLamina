#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorTerrainSurface {
/**
 * @symbol ?getTerrainSurfaceOffset\@ActorTerrainSurface\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getTerrainSurfaceOffset(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeActor\@ActorTerrainSurface\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&); // NOLINT
/**
 * @symbol ?setTerrainSurfaceOffset\@ActorTerrainSurface\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setTerrainSurfaceOffset(class EntityContext&, float); // NOLINT

}; // namespace ActorTerrainSurface
