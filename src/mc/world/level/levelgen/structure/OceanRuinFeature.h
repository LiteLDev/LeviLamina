#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class OceanRuinFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    OceanRuinFeature& operator=(OceanRuinFeature const&);
    OceanRuinFeature(OceanRuinFeature const&);
    OceanRuinFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OceanRuinFeature() = default;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    lc,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI
    OceanRuinFeature(class OceanMonumentFeature& monument, uint seed, class BaseGameVersion const& baseGameVersion);

    // NOLINTEND
};
