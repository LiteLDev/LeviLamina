#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SurfaceBuilderRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEBUILDERREGISTRY
public:
    SurfaceBuilderRegistry& operator=(SurfaceBuilderRegistry const&) = delete;
    SurfaceBuilderRegistry(SurfaceBuilderRegistry const&)            = delete;
    SurfaceBuilderRegistry()                                         = delete;
#endif

public:
    /**
     * @symbol ?lookupForEntity\@SurfaceBuilderRegistry\@\@QEBAPEAVISurfaceBuilder\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI class ISurfaceBuilder* lookupForEntity(class EntityContext&) const;
};
