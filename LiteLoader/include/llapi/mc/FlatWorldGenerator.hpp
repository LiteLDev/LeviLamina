/**
 * @file  MC/FlatWorldGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlatWorldGenerator.
 *
 */
class FlatWorldGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLATWORLDGENERATOR
public:
    class FlatWorldGenerator& operator=(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLATWORLDGENERATOR
    /**
     * @hash   -1879045989
     * @symbol ?decorateWorldGenLoadChunk@FlatWorldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @hash   -1803336715
     * @symbol ?decorateWorldGenPostProcess@FlatWorldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @hash   1688925769
     * @symbol ?findNearestStructureFeature@FlatWorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_N@Z
     */
    MCVAPI bool findNearestStructureFeature(enum StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    /**
     * @hash   -332238455
     * @symbol ?findSpawnPosition@FlatWorldGenerator@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   -891100777
     * @symbol ?findStructureFeatureTypeAt@FlatWorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
     */
    MCVAPI enum StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    /**
     * @hash   -1025905107
     * @symbol ?garbageCollectBlueprints@FlatWorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    /**
     * @hash   154501615
     * @symbol ?getBiomeArea@FlatWorldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   -1652886523
     * @symbol ?getBiomeSource@FlatWorldGenerator@@UEBAAEBVBiomeSource@@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @hash   -129887933
     * @symbol ?getBlockVolumeDimensions@FlatWorldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @hash   -739038891
     * @symbol ?isStructureFeatureTypeAt@FlatWorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum StructureFeatureType) const;
    /**
     * @hash   471994485
     * @symbol ?loadChunk@FlatWorldGenerator@@UEAAXAEAVLevelChunk@@_N@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   389973361
     * @symbol ?postProcess@FlatWorldGenerator@@UEAA_NAEAVChunkViewSource@@@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @hash   1062406230
     * @symbol ?prepareAndComputeHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @hash   1388450069
     * @symbol ?prepareHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @hash   1194786107
     * @symbol ??0FlatWorldGenerator@@QEAA@AEAVDimension@@IAEBVValue@Json@@@Z
     */
    MCAPI FlatWorldGenerator(class Dimension &, unsigned int, class Json::Value const &);

//private:
    /**
     * @hash   845685232
     * @symbol ?_generatePrototypeBlockValues@FlatWorldGenerator@@AEAAXAEBVFlatWorldGeneratorOptions@@F@Z
     */
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &, short);

private:

};