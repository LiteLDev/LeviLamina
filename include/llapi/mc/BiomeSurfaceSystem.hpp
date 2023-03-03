/**
 * @file  BiomeSurfaceSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeSurfaceSystem.
 *
 */
namespace BiomeSurfaceSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?buildSurfaceAt\@BiomeSurfaceSystem\@\@YAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    MCAPI void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const &);
    /**
     * @symbol  ?resolveBuilderImplementation\@BiomeSurfaceSystem\@\@YAXAEAVEntityRegistry\@\@AEBVSurfaceBuilderRegistry\@\@I\@Z
     */
    MCAPI void resolveBuilderImplementation(class EntityRegistry &, class SurfaceBuilderRegistry const &, unsigned int);

};