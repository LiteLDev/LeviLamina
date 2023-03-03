/**
 * @file  SurfaceBuilderRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SurfaceBuilderRegistry.
 *
 */
class SurfaceBuilderRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEBUILDERREGISTRY
public:
    class SurfaceBuilderRegistry& operator=(class SurfaceBuilderRegistry const &) = delete;
    SurfaceBuilderRegistry(class SurfaceBuilderRegistry const &) = delete;
    SurfaceBuilderRegistry() = delete;
#endif

public:
    /**
     * @symbol  ?lookupForEntity\@SurfaceBuilderRegistry\@\@QEBAPEAVISurfaceBuilder\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI class ISurfaceBuilder * lookupForEntity(class EntityContext &) const;

};