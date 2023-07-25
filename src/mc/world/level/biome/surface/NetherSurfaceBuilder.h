#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace VanillaSurfaceBuilders {

class NetherSurfaceBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASURFACEBUILDERS_NETHERSURFACEBUILDER
public:
    NetherSurfaceBuilder& operator=(NetherSurfaceBuilder const&) = delete;
    NetherSurfaceBuilder(NetherSurfaceBuilder const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@NetherSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int);
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@NetherSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;
    /**
     * @symbol ??0NetherSurfaceBuilder\@VanillaSurfaceBuilders\@\@QEAA\@XZ
     */
    MCAPI NetherSurfaceBuilder();
};

}; // namespace VanillaSurfaceBuilders
