#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"

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
    // vIndex: 0
    virtual ~LegacyMesaSurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(class Biome& biome, uint levelSeed);

    // vIndex: 2
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void generateBands(class Random& random);

    MCAPI ::BlockColor getBand(int worldX, int y, int worldZ, class PerlinSimplexNoise const& noiseBuf) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
