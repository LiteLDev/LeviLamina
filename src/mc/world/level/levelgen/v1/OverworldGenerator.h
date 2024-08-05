#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class OverworldGenerator : public ::WorldGenerator {
public:
    // OverworldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // OverworldGenerator inner types define
    struct ThreadData {
    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

public:
    // prevent constructor by default
    OverworldGenerator& operator=(OverworldGenerator const&);
    OverworldGenerator(OverworldGenerator const&);
    OverworldGenerator();

public:
    // NOLINTBEGIN
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos chunkPos) const;

    MCVAPI void decorateWorldGenLoadChunk(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    MCVAPI void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCVAPI bool postProcess(class ChunkViewSource& neighborhoodIn);

    MCVAPI void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCVAPI void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(
        class ChunkPos const&          chunkPos,
        class SurfaceLevelCache const& surfaceLevelCache,
        short                          minHeight,
        short                          levelGenHeight,
        short                          seaLevel
    ) const;

    MCVAPI ~OverworldGenerator();

    MCAPI OverworldGenerator(class Dimension&, bool);

    MCAPI void buildSurfaces(
        struct OverworldGenerator::ThreadData& thread,
        class BlockVolume&                     blocks,
        class LevelChunk&                      levelChunk,
        class ChunkPos const&                  chunkPos,
        class SurfaceLevelCache const&         surfaceLevelCache
    );

    // NOLINTEND
};
