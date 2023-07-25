#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace VanillaSurfaceBuilders {

class TheEndSurfaceBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASURFACEBUILDERS_THEENDSURFACEBUILDER
public:
    TheEndSurfaceBuilder& operator=(TheEndSurfaceBuilder const&) = delete;
    TheEndSurfaceBuilder(TheEndSurfaceBuilder const&)            = delete;
    TheEndSurfaceBuilder()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@TheEndSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int);
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@TheEndSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;
};

}; // namespace VanillaSurfaceBuilders
