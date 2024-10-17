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
    virtual bool getNearestGeneratedFeature(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& pos, uint levelSeed, class IPreliminarySurfaceProvider const& preliminarySurfaceLevel, class Dimension const&);

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const&, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI explicit BuriedTreasureFeature(uint seed);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(uint seed);

    MCAPI std::unique_ptr<class StructureStart>
    createStructureStart$(class Dimension& generator, class BiomeSource const&, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI bool getNearestGeneratedFeature$(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    MCAPI bool
    isFeatureChunk$(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& pos, uint levelSeed, class IPreliminarySurfaceProvider const& preliminarySurfaceLevel, class Dimension const&);

    // NOLINTEND
};
