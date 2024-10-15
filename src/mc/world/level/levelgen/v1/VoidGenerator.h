#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class VoidGenerator : public ::WorldGenerator {
public:
    // prevent constructor by default
    VoidGenerator& operator=(VoidGenerator const&);
    VoidGenerator(VoidGenerator const&);
    VoidGenerator();

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

    MCVAPI void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    MCVAPI class BlockPos findSpawnPosition() const;

    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    MCVAPI class BiomeSource const& getBiomeSource() const;

    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    MCVAPI void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCVAPI bool postProcess(class ChunkViewSource& neighborhood);

    MCVAPI void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCVAPI void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCAPI explicit VoidGenerator(class Dimension& dimension);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCAPI void* ctor$(class Dimension& dimension);

    MCAPI class ChunkLocalNoiseCache createNoiseCache$(class ChunkPos chunkPos) const;

    MCAPI class WorldGenCache createWorldGenCache$(class ChunkPos chunkPos) const;

    MCAPI void decorateWorldGenLoadChunk$(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    MCAPI void decorateWorldGenPostProcess$(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    MCAPI class BlockPos findSpawnPosition$() const;

    MCAPI class BiomeArea getBiomeArea$(class BoundingBox const& area, uint scale) const;

    MCAPI class BiomeSource const& getBiomeSource$() const;

    MCAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions$() const;

    MCAPI void loadChunk$(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI bool postProcess$(class ChunkViewSource& neighborhood);

    MCAPI void prepareAndComputeHeights$(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCAPI void prepareHeights$(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // NOLINTEND
};
