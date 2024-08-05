#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class BuriedTreasureFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    BuriedTreasureFeature& operator=(BuriedTreasureFeature const&);
    BuriedTreasureFeature(BuriedTreasureFeature const&);
    BuriedTreasureFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BuriedTreasureFeature() = default;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

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
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI explicit BuriedTreasureFeature(uint seed);

    // NOLINTEND
};
