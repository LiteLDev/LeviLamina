#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PerlinSimplexNoise;
class Random;
enum class BlockColor;
// clang-format on

namespace VanillaSurfaceBuilders {

class LegacyMesaSurfaceBuilder {

public:
    // prevent constructor by default
    LegacyMesaSurfaceBuilder& operator=(LegacyMesaSurfaceBuilder const&) = delete;
    LegacyMesaSurfaceBuilder(LegacyMesaSurfaceBuilder const&)            = delete;
    LegacyMesaSurfaceBuilder()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const; // NOLINT

    // private:
    /**
     * @symbol ?generateBands\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void generateBands(class Random&); // NOLINT
    /**
     * @symbol
     * ?getBand\@LegacyMesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEBA?AW4BlockColor\@\@HHHAEBVPerlinSimplexNoise\@\@\@Z
     */
    MCAPI enum class BlockColor getBand(int, int, int, class PerlinSimplexNoise const&) const; // NOLINT

private:
};

}; // namespace VanillaSurfaceBuilders
