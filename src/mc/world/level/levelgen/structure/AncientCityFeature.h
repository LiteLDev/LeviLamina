#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class AncientCityFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    AncientCityFeature& operator=(AncientCityFeature const&);
    AncientCityFeature(AncientCityFeature const&);
    AncientCityFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AncientCityFeature() = default;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, class IPreliminarySurfaceProvider const&);

    MCAPI AncientCityFeature(uint seed, class BaseGameVersion const&);

    // NOLINTEND
};
