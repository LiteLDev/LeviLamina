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
        // symbol: ??1Noises@OverworldGeneratorMultinoise@@QEAA@XZ
        MCAPI ~Noises();

        // symbol: ?make@Noises@OverworldGeneratorMultinoise@@SA?AU12@AEBVXoroshiroPositionalRandomFactory@@@Z
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
    // symbol:
    // ?_prepareHeights@OverworldGeneratorMultinoise@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z
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

    // symbol: ?chunkPosNeedsBlending@OverworldGeneratorMultinoise@@UEAA_NAEBVChunkPos@@@Z
    virtual bool chunkPosNeedsBlending(class ChunkPos const& cp);

    // symbol: ?createNoiseCache@OverworldGeneratorMultinoise@@EEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
    virtual class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    // symbol:
    // ?decorateWorldGenPostProcess@OverworldGeneratorMultinoise@@EEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(
        class Biome const&,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // symbol: ?findSpawnPosition@OverworldGeneratorMultinoise@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // symbol:
    // ?generateDensityCellsForChunk@OverworldGeneratorMultinoise@@UEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
    virtual class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // symbol: ?getBiomeSource@OverworldGeneratorMultinoise@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // symbol: ?getLevelGenHeight@OverworldGeneratorMultinoise@@UEBAHXZ
    virtual int getLevelGenHeight() const;

    // symbol:
    // ?getMaterialAdjNoise@OverworldGeneratorMultinoise@@MEBAAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@XZ
    virtual std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    // symbol:
    // ?getPreliminarySurfaceLevel@OverworldGeneratorMultinoise@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const;

    // symbol: ?getSurfaceNoise@OverworldGeneratorMultinoise@@MEAAAEBVPerlinSimplexNoise@@XZ
    virtual class PerlinSimplexNoise const& getSurfaceNoise();

    // symbol:
    // ?getXoroshiroPositionalRandomFactory@OverworldGeneratorMultinoise@@EEBA?AV?$optional@VXoroshiroPositionalRandomFactory@@@std@@XZ
    virtual std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    // symbol:
    // ?tryMakeAquifer@OverworldGeneratorMultinoise@@EEBA?AV?$unique_ptr@VAquifer@@U?$default_delete@VAquifer@@@std@@@std@@AEBVChunkPos@@AEBVSurfaceLevelCache@@FFF@Z
    virtual std::unique_ptr<class Aquifer> tryMakeAquifer(
        class ChunkPos const&          chunkPos,
        class SurfaceLevelCache const& surfaceLevelCache,
        short                          minHeight,
        short                          levelGenHeight,
        short                          seaLevel
    ) const;

    // symbol: ??1OverworldGeneratorMultinoise@@UEAA@XZ
    virtual ~OverworldGeneratorMultinoise();

    // symbol: ??0OverworldGeneratorMultinoise@@QEAA@AEAVDimension@@VLevelSeed64@@PEBVBiome@@@Z
    MCAPI OverworldGeneratorMultinoise(class Dimension&, class LevelSeed64, class Biome const*);

    // symbol: ?_applySlides@OverworldGeneratorMultinoise@@SAMAEBVDimensionHeightRange@@ME@Z
    MCAPI static float _applySlides(class DimensionHeightRange const& heightRange, float, uchar);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attenuateOffsetAndFactor@OverworldGeneratorMultinoise@@AEBA?AUTerrainInfo@@V?$DividedPos2d@$03@@U2@@Z
    MCAPI struct TerrainInfo _attenuateOffsetAndFactor(class DividedPos2d<4>, struct TerrainInfo) const;

    // symbol:
    // ?_generateDensityCellsForChunk@OverworldGeneratorMultinoise@@AEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVNoodleCavifier@@PEAVOreVeinifier@@@Z
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const& chunkPos, class WorldGenCache const&, class NoodleCavifier*, class OreVeinifier*)
        const;

    // symbol:
    // ?_makeBiomeSource@OverworldGeneratorMultinoise@@AEAA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@AEBVXoroshiroPositionalRandomFactory@@AEBVBiomeRegistry@@PEBVBiome@@@Z
    MCAPI std::unique_ptr<class BiomeSource>
    _makeBiomeSource(class XoroshiroPositionalRandomFactory const&, class BiomeRegistry const& biomeRegistry, class Biome const*);

    // symbol:
    // ?_updateNoiseAndGenerateBaseBlock@OverworldGeneratorMultinoise@@AEBA?BUBlockGenerationResult@1@MAEBVBlockPos@@FPEAVAquifer@@_NPEBVChunkBlender@@AEBVBlock@@PEAVOreVeinifier@@@Z
    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const
    _updateNoiseAndGenerateBaseBlock(float, class BlockPos const&, short, class Aquifer*, bool, class ChunkBlender const*, class Block const&, class OreVeinifier*)
        const;

    // NOLINTEND
};
