#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
class Biome;
class ISurfaceBuilder;
class PerlinSimplexNoise;
class Random;
// clang-format on

namespace VanillaSurfaceBuilders {

class LegacyMesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    LegacyMesaSurfaceBuilder& operator=(LegacyMesaSurfaceBuilder const&);
    LegacyMesaSurfaceBuilder(LegacyMesaSurfaceBuilder const&);
    LegacyMesaSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~LegacyMesaSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVBiome@@I@Z
    virtual void init(class Biome&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?generateBands@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@AEAAXAEAVRandom@@@Z
    MCAPI void generateBands(class Random& random);

    // symbol:
    // ?getBand@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@AEBA?AW4BlockColor@@HHHAEBVPerlinSimplexNoise@@@Z
    MCAPI ::BlockColor getBand(int worldX, int y, int worldZ, class PerlinSimplexNoise const& noiseBuf) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
