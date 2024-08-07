#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class VillageFeature : public ::StructureFeature {
public:
    std::vector<uint64> mBiomeHash;
    int                 mTownSpacing;
    int                 mMinTownSeparation;

public:
    // prevent constructor by default
    VillageFeature& operator=(VillageFeature const&);
    VillageFeature(VillageFeature const&);
    VillageFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillageFeature() = default;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3
    virtual bool getNearestGeneratedFeature(
        class Dimension&                         dim,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    pos,
        class BlockPos&                          nearestPos,
        class IPreliminarySurfaceProvider const& provider,
        bool                                     b,
        std::optional<class HashedString> const& hs
    );

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    chunkPos,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& provider,
        class Dimension const&                   dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart> createStructureStart(
        class Dimension&                         generator,
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    chunkPos,
        class IPreliminarySurfaceProvider const& provider
    );

    MCAPI VillageFeature(uint seed, int townSpacing, int minTownSeparation);

    // NOLINTEND
};
