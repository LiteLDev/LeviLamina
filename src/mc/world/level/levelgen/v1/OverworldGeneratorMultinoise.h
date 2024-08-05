#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

class OverworldGeneratorMultinoise : public ::OverworldGenerator {
public:
    // OverworldGeneratorMultinoise inner types declare
    // clang-format off
    struct BlockGenerationResult;
    struct Noises;
    // clang-format on

    // OverworldGeneratorMultinoise inner types define
    struct BlockGenerationResult {
    public:
        // prevent constructor by default
        BlockGenerationResult& operator=(BlockGenerationResult const&);
        BlockGenerationResult(BlockGenerationResult const&);
        BlockGenerationResult();
    };

    struct Noises {
    public:
        // prevent constructor by default
        Noises& operator=(Noises const&);
        Noises(Noises const&);
        Noises();

    public:
        // NOLINTBEGIN
        MCAPI ~Noises();

        MCAPI static struct OverworldGeneratorMultinoise::Noises make(class XoroshiroPositionalRandomFactory const&);

        // NOLINTEND
    };
    char mUnknow[2800];

public:
    // prevent constructor by default
    OverworldGeneratorMultinoise& operator=(OverworldGeneratorMultinoise const&);
    OverworldGeneratorMultinoise(OverworldGeneratorMultinoise const&);
    OverworldGeneratorMultinoise();

public:
    // NOLINTBEGIN
    virtual void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    virtual bool chunkPosNeedsBlending(class ChunkPos const& cp);

    virtual class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    virtual void decorateWorldGenPostProcess(
        class Biome const&,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    virtual class BlockPos findSpawnPosition() const;

    virtual class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    virtual class BiomeSource const& getBiomeSource() const;

    virtual int getLevelGenHeight() const;

    virtual std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const;

    virtual class PerlinSimplexNoise const& getSurfaceNoise();

    virtual std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    virtual std::unique_ptr<class Aquifer> tryMakeAquifer(
        class ChunkPos const&          chunkPos,
        class SurfaceLevelCache const& surfaceLevelCache,
        short                          minHeight,
        short                          levelGenHeight,
        short                          seaLevel
    ) const;

    virtual ~OverworldGeneratorMultinoise();

    MCAPI OverworldGeneratorMultinoise(class Dimension&, class LevelSeed64, class Biome const*);

    MCAPI static float _applySlides(class DimensionHeightRange const& heightRange, float, uchar);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct TerrainInfo _attenuateOffsetAndFactor(class DividedPos2d<4>, struct TerrainInfo) const;

    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const& chunkPos, class WorldGenCache const&, class NoodleCavifier*, class OreVeinifier*)
        const;

    MCAPI std::unique_ptr<class BiomeSource>
    _makeBiomeSource(class XoroshiroPositionalRandomFactory const&, class BiomeRegistry const& biomeRegistry, class Biome const*);

    // NOLINTEND
};
