/**
 * @file  OverworldGeneratorMultinoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldGeneratorMultinoise.
 *
 */
class OverworldGeneratorMultinoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATORMULTINOISE
public:
    class OverworldGeneratorMultinoise& operator=(class OverworldGeneratorMultinoise const &) = delete;
    OverworldGeneratorMultinoise(class OverworldGeneratorMultinoise const &) = delete;
    OverworldGeneratorMultinoise() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATORMULTINOISE
    /**
     * @hash   -1011386176
     * @symbol ?_prepareHeights@OverworldGeneratorMultinoise@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z
     */
    MCVAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, class WorldGenCache const &, class Aquifer *, class std::function<void (class BlockPos const &, class Block const &, int)> &&, bool, std::vector<short> *, int);
    /**
     * @hash   -1011405103
     * @symbol ?createNoiseCache@OverworldGeneratorMultinoise@@EEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
     */
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    /**
     * @hash   892168610
     * @symbol ?decorateWorldGenPostProcess@OverworldGeneratorMultinoise@@EEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @hash   1221668589
     * @symbol ?findSpawnPosition@OverworldGeneratorMultinoise@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   802726755
     * @symbol ?generateDensityCellsForChunk@OverworldGeneratorMultinoise@@UEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
     */
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const &) const;
    /**
     * @hash   -1530980823
     * @symbol ?getBiomeSource@OverworldGeneratorMultinoise@@UEBAAEBVBiomeSource@@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @hash   -1330687010
     * @symbol ?getLevelGenHeight@OverworldGeneratorMultinoise@@UEBAHXZ
     */
    MCVAPI int getLevelGenHeight() const;
    /**
     * @hash   596711066
     * @symbol ?getMaterialAdjNoise@OverworldGeneratorMultinoise@@MEBAAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const & getMaterialAdjNoise() const;
    /**
     * @hash   -1162529775
     * @symbol ?getPreliminarySurfaceLevel@OverworldGeneratorMultinoise@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    /**
     * @hash   329419260
     * @symbol ?getSurfaceNoise@OverworldGeneratorMultinoise@@MEAAAEBVPerlinSimplexNoise@@XZ
     */
    MCVAPI class PerlinSimplexNoise const & getSurfaceNoise();
    /**
     * @hash   2068041120
     * @symbol ?getXoroshiroPositionalRandomFactory@OverworldGeneratorMultinoise@@EEBA?AV?$optional@VXoroshiroPositionalRandomFactory@@@std@@XZ
     */
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
    /**
     * @hash   743705377
     * @symbol ?tryMakeAquifer@OverworldGeneratorMultinoise@@EEBA?AV?$unique_ptr@VAquifer@@U?$default_delete@VAquifer@@@std@@@std@@AEBVChunkPos@@AEBVSurfaceLevelCache@@FFF@Z
     */
    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(class ChunkPos const &, class SurfaceLevelCache const &, short, short, short) const;
    /**
     * @hash   1691184708
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OverworldGeneratorMultinoise();
#endif
    /**
     * @hash   1763264601
     * @symbol ??0OverworldGeneratorMultinoise@@QEAA@AEAVDimension@@VLevelSeed64@@PEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
     */
    MCAPI OverworldGeneratorMultinoise(class Dimension &, class LevelSeed64, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @hash   -1567645484
     * @symbol ?_applySlides@OverworldGeneratorMultinoise@@SAMAEBVDimensionHeightRange@@ME@Z
     */
    MCAPI static float _applySlides(class DimensionHeightRange const &, float, unsigned char);

//private:
    /**
     * @hash   357657812
     * @symbol ?_attenuateOffsetAndFactor@OverworldGeneratorMultinoise@@AEBA?AUTerrainInfo@@V?$DividedPos2d@$03@@U2@@Z
     */
    MCAPI struct TerrainInfo _attenuateOffsetAndFactor(class DividedPos2d<4>, struct TerrainInfo) const;
    /**
     * @hash   1243234545
     * @symbol ?_generateDensityCellsForChunk@OverworldGeneratorMultinoise@@AEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVNoodleCavifier@@PEAVOreVeinifier@@@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(class ChunkPos const &, class WorldGenCache const &, class NoodleCavifier *, class OreVeinifier *) const;
    /**
     * @symbol ?_makeBiomeSource@OverworldGeneratorMultinoise@@AEAA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@AEBVXoroshiroPositionalRandomFactory@@AEBVBiomeRegistry@@PEBVBiome@@@Z
     */
    MCAPI std::unique_ptr<class BiomeSource> _makeBiomeSource(class XoroshiroPositionalRandomFactory const &, class BiomeRegistry const &, class Biome const *);

private:

};