/**
 * @file  FlatWorldGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ?decorateWorldGenLoadChunk\@FlatWorldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @symbol  ?decorateWorldGenPostProcess\@FlatWorldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @symbol  ?findNearestStructureFeature\@FlatWorldGenerator\@\@UEAA_NW4StructureFeatureType\@\@AEBVBlockPos\@\@AEAV3\@_N\@Z
     */
    MCVAPI bool findNearestStructureFeature(enum class StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    /**
     * @symbol  ?findSpawnPosition\@FlatWorldGenerator\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @symbol  ?findStructureFeatureTypeAt\@FlatWorldGenerator\@\@UEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    /**
     * @symbol  ?garbageCollectBlueprints\@FlatWorldGenerator\@\@UEAAXV?$buffer_span\@VChunkPos\@\@\@\@\@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    /**
     * @symbol  ?getBiomeArea\@FlatWorldGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @symbol  ?getBiomeSource\@FlatWorldGenerator\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @symbol  ?getBlockVolumeDimensions\@FlatWorldGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @symbol  ?isStructureFeatureTypeAt\@FlatWorldGenerator\@\@UEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum class StructureFeatureType) const;
    /**
     * @symbol  ?loadChunk\@FlatWorldGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @symbol  ?postProcess\@FlatWorldGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @symbol  ?prepareAndComputeHeights\@FlatWorldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @symbol  ?prepareHeights\@FlatWorldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @symbol  ??0FlatWorldGenerator\@\@QEAA\@AEAVDimension\@\@IAEBVValue\@Json\@\@\@Z
     */
    MCAPI FlatWorldGenerator(class Dimension &, unsigned int, class Json::Value const &);

//private:
    /**
     * @symbol  ?_generatePrototypeBlockValues\@FlatWorldGenerator\@\@AEAAXAEBVFlatWorldGeneratorOptions\@\@F\@Z
     */
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &, short);

private:

};