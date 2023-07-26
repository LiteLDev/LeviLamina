#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/MultidimensionalArray.h"

class OverworldGeneratorMultinoise {
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
        BlockGenerationResult& operator=(BlockGenerationResult const&) = delete;
        BlockGenerationResult(BlockGenerationResult const&)            = delete;
        BlockGenerationResult()                                        = delete;
    };

    struct Noises {

    public:
        // prevent constructor by default
        Noises& operator=(Noises const&) = delete;
        Noises(Noises const&)            = delete;
        Noises()                         = delete;

    public:
        /**
         * @symbol ??1Noises\@OverworldGeneratorMultinoise\@\@QEAA\@XZ
         */
        MCAPI ~Noises(); // NOLINT
        /**
         * @symbol ?make\@Noises\@OverworldGeneratorMultinoise\@\@SA?AU12\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
         */
        MCAPI static struct OverworldGeneratorMultinoise::Noises
        make(class XoroshiroPositionalRandomFactory const&); // NOLINT
    };

public:
    // prevent constructor by default
    OverworldGeneratorMultinoise& operator=(OverworldGeneratorMultinoise const&) = delete;
    OverworldGeneratorMultinoise(OverworldGeneratorMultinoise const&)            = delete;
    OverworldGeneratorMultinoise()                                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATORMULTINOISE
    /**
     * @symbol
     * ?_prepareHeights\@OverworldGeneratorMultinoise\@\@EEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEBVWorldGenCache\@\@PEAVAquifer\@\@$$QEAV?$function\@$$A6AXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z\@std\@\@_NPEAV?$vector\@FV?$allocator\@F\@std\@\@\@7\@H\@Z
     */
    MCVAPI void _prepareHeights(
        class BlockVolume&,
        class ChunkPos const&,
        class WorldGenCache const&,
        class Aquifer*,
        class std::function<void(class BlockPos const&, class Block const&, int)>&&,
        bool,
        std::vector<short>*,
        int
    ); // NOLINT
    /**
     * @symbol ?chunkPosNeedsBlending\@OverworldGeneratorMultinoise\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    MCVAPI bool chunkPosNeedsBlending(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?createNoiseCache\@OverworldGeneratorMultinoise\@\@EEBA?AVChunkLocalNoiseCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const; // NOLINT
    /**
     * @symbol
     * ?decorateWorldGenPostProcess\@OverworldGeneratorMultinoise\@\@EEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void
    decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const; // NOLINT
    /**
     * @symbol ?findSpawnPosition\@OverworldGeneratorMultinoise\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const; // NOLINT
    /**
     * @symbol
     * ?generateDensityCellsForChunk\@OverworldGeneratorMultinoise\@\@UEBA?AV?$MultidimensionalArray\@M$04$04$0CJ\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const&) const; // NOLINT
    /**
     * @symbol ?getBiomeSource\@OverworldGeneratorMultinoise\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const& getBiomeSource() const; // NOLINT
    /**
     * @symbol ?getLevelGenHeight\@OverworldGeneratorMultinoise\@\@UEBAHXZ
     */
    MCVAPI int getLevelGenHeight() const; // NOLINT
    /**
     * @symbol
     * ?getMaterialAdjNoise\@OverworldGeneratorMultinoise\@\@MEBAAEBV?$unique_ptr\@VPerlinSimplexNoise\@\@U?$default_delete\@VPerlinSimplexNoise\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const; // NOLINT
    /**
     * @symbol
     * ?getPreliminarySurfaceLevel\@OverworldGeneratorMultinoise\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const; // NOLINT
    /**
     * @symbol ?getSurfaceNoise\@OverworldGeneratorMultinoise\@\@MEAAAEBVPerlinSimplexNoise\@\@XZ
     */
    MCVAPI class PerlinSimplexNoise const& getSurfaceNoise(); // NOLINT
    /**
     * @symbol
     * ?getXoroshiroPositionalRandomFactory\@OverworldGeneratorMultinoise\@\@EEBA?AV?$optional\@VXoroshiroPositionalRandomFactory\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory>
    getXoroshiroPositionalRandomFactory() const; // NOLINT
    /**
     * @symbol
     * ?tryMakeAquifer\@OverworldGeneratorMultinoise\@\@EEBA?AV?$unique_ptr\@VAquifer\@\@U?$default_delete\@VAquifer\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@AEBVSurfaceLevelCache\@\@FFF\@Z
     */
    MCVAPI std::unique_ptr<class Aquifer>
           tryMakeAquifer(class ChunkPos const&, class SurfaceLevelCache const&, short, short, short) const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OverworldGeneratorMultinoise(); // NOLINT
#endif
    /**
     * @symbol
     * ??0OverworldGeneratorMultinoise\@\@QEAA\@AEAVDimension\@\@VLevelSeed64\@\@PEBVBiome\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    OverworldGeneratorMultinoise(class Dimension&, class LevelSeed64, class Biome const*, std::unique_ptr<class StructureFeatureRegistry>); // NOLINT
    /**
     * @symbol ?_applySlides\@OverworldGeneratorMultinoise\@\@SAMAEBVDimensionHeightRange\@\@ME\@Z
     */
    MCAPI static float _applySlides(class DimensionHeightRange const&, float, unsigned char); // NOLINT

    // private:
    /**
     * @symbol
     * ?_attenuateOffsetAndFactor\@OverworldGeneratorMultinoise\@\@AEBA?AUTerrainInfo\@\@V?$DividedPos2d\@$03\@\@U2\@\@Z
     */
    MCAPI struct TerrainInfo _attenuateOffsetAndFactor(class DividedPos2d<4>, struct TerrainInfo) const; // NOLINT
    /**
     * @symbol
     * ?_generateDensityCellsForChunk\@OverworldGeneratorMultinoise\@\@AEBA?AV?$MultidimensionalArray\@M$04$04$0CJ\@\@Util\@\@AEBVChunkPos\@\@AEBVWorldGenCache\@\@PEAVNoodleCavifier\@\@PEAVOreVeinifier\@\@\@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const&, class WorldGenCache const&, class NoodleCavifier*, class OreVeinifier*)
        const; // NOLINT
    /**
     * @symbol
     * ?_makeBiomeSource\@OverworldGeneratorMultinoise\@\@AEAA?AV?$unique_ptr\@VBiomeSource\@\@U?$default_delete\@VBiomeSource\@\@\@std\@\@\@std\@\@AEBVXoroshiroPositionalRandomFactory\@\@AEBVBiomeRegistry\@\@PEBVBiome\@\@\@Z
     */
    MCAPI std::unique_ptr<class BiomeSource>
    _makeBiomeSource(class XoroshiroPositionalRandomFactory const&, class BiomeRegistry const&, class Biome const*); // NOLINT

private:
};
