/**
 * @file  FlatWorldGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @hash   -1787159013
     * @symbol  ?decorateWorldGenLoadChunk\@FlatWorldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @hash   -1711449739
     * @symbol  ?decorateWorldGenPostProcess\@FlatWorldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @hash   1789546313
     * @symbol  ?findNearestStructureFeature\@FlatWorldGenerator\@\@UEAA_NW4StructureFeatureType\@\@AEBVBlockPos\@\@AEAV3\@_N\@Z
     */
    MCVAPI bool findNearestStructureFeature(enum class StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    /**
     * @hash   524835161
     * @symbol  ?findSpawnPosition\@FlatWorldGenerator\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   -790480233
     * @symbol  ?findStructureFeatureTypeAt\@FlatWorldGenerator\@\@UEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    /**
     * @hash   -934018131
     * @symbol  ?garbageCollectBlueprints\@FlatWorldGenerator\@\@UEAAXV?$buffer_span\@VChunkPos\@\@\@\@\@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    /**
     * @hash   1011575231
     * @symbol  ?getBiomeArea\@FlatWorldGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   2005452869
     * @symbol  ?getBiomeSource\@FlatWorldGenerator\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @hash   727185683
     * @symbol  ?getBlockVolumeDimensions\@FlatWorldGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @hash   -638418347
     * @symbol  ?isStructureFeatureTypeAt\@FlatWorldGenerator\@\@UEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum class StructureFeatureType) const;
    /**
     * @hash   1329068101
     * @symbol  ?loadChunk\@FlatWorldGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   1247046977
     * @symbol  ?postProcess\@FlatWorldGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @hash   1154293206
     * @symbol  ?prepareAndComputeHeights\@FlatWorldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @hash   1480337045
     * @symbol  ?prepareHeights\@FlatWorldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @hash   2051752091
     * @symbol  ??0FlatWorldGenerator\@\@QEAA\@AEAVDimension\@\@IAEBVValue\@Json\@\@\@Z
     */
    MCAPI FlatWorldGenerator(class Dimension &, unsigned int, class Json::Value const &);

//private:
    /**
     * @hash   1702758848
     * @symbol  ?_generatePrototypeBlockValues\@FlatWorldGenerator\@\@AEAAXAEBVFlatWorldGeneratorOptions\@\@F\@Z
     */
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &, short);

private:

};