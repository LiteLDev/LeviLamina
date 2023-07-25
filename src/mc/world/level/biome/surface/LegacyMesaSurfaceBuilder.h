#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace VanillaSurfaceBuilders {

class LegacyMesaSurfaceBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASURFACEBUILDERS_LEGACYMESASURFACEBUILDER
public:
    LegacyMesaSurfaceBuilder& operator=(LegacyMesaSurfaceBuilder const&) = delete;
    LegacyMesaSurfaceBuilder(LegacyMesaSurfaceBuilder const&)            = delete;
    LegacyMesaSurfaceBuilder()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int);
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;

    // private:
    /**
     * @symbol ?generateBands\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void generateBands(class Random&);
    /**
     * @symbol
     * ?getBand\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEBA?AW4BlockColor\@\@HHHAEBVPerlinSimplexNoise\@\@\@Z
     */
    MCAPI enum class BlockColor getBand(int, int, int, class PerlinSimplexNoise const&) const;

private:
};

}; // namespace VanillaSurfaceBuilders
