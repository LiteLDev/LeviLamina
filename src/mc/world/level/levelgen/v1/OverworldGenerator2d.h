#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    // prevent constructor by default
    OverworldGenerator2d& operator=(OverworldGenerator2d const&);
    OverworldGenerator2d(OverworldGenerator2d const&);
    OverworldGenerator2d();

public:
    // NOLINTBEGIN
    MCVAPI void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    MCVAPI void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    MCVAPI class BlockPos findSpawnPosition() const;

    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    MCVAPI class BiomeSource const& getBiomeSource() const;

    MCVAPI int getLevelGenHeight() const;

    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    MCVAPI class PerlinSimplexNoise const& getSurfaceNoise();

    MCVAPI std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    MCAPI
    OverworldGenerator2d(class Dimension& dimension, uint seed, bool isLegacyWorld, class Biome const* biomeOverride);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCAPI void* ctor$(class Dimension& dimension, uint seed, bool isLegacyWorld, class Biome const* biomeOverride);

    MCAPI void _prepareHeights$(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    MCAPI void decorateWorldGenPostProcess$(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    MCAPI class BlockPos findSpawnPosition$() const;

    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk$(class ChunkPos const& chunkPos) const;

    MCAPI class BiomeSource const& getBiomeSource$() const;

    MCAPI int getLevelGenHeight$() const;

    MCAPI std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise$() const;

    MCAPI class PerlinSimplexNoise const& getSurfaceNoise$();

    MCAPI std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory$() const;

    // NOLINTEND
};
