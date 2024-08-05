#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class RandomScatteredLargeFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    RandomScatteredLargeFeature& operator=(RandomScatteredLargeFeature const&);
    RandomScatteredLargeFeature(RandomScatteredLargeFeature const&);
    RandomScatteredLargeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomScatteredLargeFeature() = default;

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& cp, class IPreliminarySurfaceProvider const&);

    MCAPI explicit RandomScatteredLargeFeature(uint seed);

    // NOLINTEND
};
