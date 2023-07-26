#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SurfaceBuilderRegistry {

public:
    // prevent constructor by default
    SurfaceBuilderRegistry& operator=(SurfaceBuilderRegistry const&) = delete;
    SurfaceBuilderRegistry(SurfaceBuilderRegistry const&)            = delete;
    SurfaceBuilderRegistry()                                         = delete;

public:
    /**
     * @symbol ?lookupForEntity\@SurfaceBuilderRegistry\@\@QEBAPEAVISurfaceBuilder\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI class ISurfaceBuilder* lookupForEntity(class EntityContext&) const; // NOLINT
};
