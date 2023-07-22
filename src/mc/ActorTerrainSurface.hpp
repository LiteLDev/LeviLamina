/**
 * @file  ActorTerrainSurface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorTerrainSurface {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getTerrainSurfaceOffset\@ActorTerrainSurface\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getTerrainSurfaceOffset(class EntityContext const &);
    /**
     * @symbol  ?initializeActor\@ActorTerrainSurface\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol  ?setTerrainSurfaceOffset\@ActorTerrainSurface\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setTerrainSurfaceOffset(class EntityContext &, float);

};