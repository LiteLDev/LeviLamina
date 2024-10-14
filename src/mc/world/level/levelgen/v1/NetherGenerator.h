#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

class NetherGenerator : public ::WorldGenerator {
public:
    // NetherGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // NetherGenerator inner types define
    struct ThreadData {
    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

public:
    // prevent constructor by default
    NetherGenerator& operator=(NetherGenerator const&);
    NetherGenerator(NetherGenerator const&);
    NetherGenerator();

public:
    // NOLINTBEGIN
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

    MCVAPI void loadChunk(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    MCVAPI bool postProcess(class ChunkViewSource& neighborhood);

    MCVAPI void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCVAPI void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCAPI NetherGenerator(class Dimension& dimension, uint seed, class Biome const* biomeOverride);

    MCAPI void buildSurfaces(class BlockVolume& blocks, class LevelChunk& levelChunk, class ChunkPos const& chunkPos);

    MCAPI class Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(class ChunkPos const& chunkPos
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _prepareHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        bool                  factorInBeardsAndShavers,
        std::vector<short>*   ZXheights,
        int                   skipTopN
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

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

    MCAPI void loadChunk$(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

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
