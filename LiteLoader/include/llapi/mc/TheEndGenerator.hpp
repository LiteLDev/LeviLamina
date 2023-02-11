/**
 * @file  TheEndGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TheEndGenerator.
 *
 */
class TheEndGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THEENDGENERATOR
public:
    class TheEndGenerator& operator=(class TheEndGenerator const &) = delete;
    TheEndGenerator(class TheEndGenerator const &) = delete;
    TheEndGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THEENDGENERATOR
    /**
     * @hash   1384484362
     * @symbol  ?decorateWorldGenLoadChunk\@TheEndGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @hash   1721885590
     * @symbol  ?decorateWorldGenPostProcess\@TheEndGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @hash   616847530
     * @symbol  ?findSpawnPosition\@TheEndGenerator\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   -2068749696
     * @symbol  ?getBiomeArea\@TheEndGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   -1417076938
     * @symbol  ?getBiomeSource\@TheEndGenerator\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @hash   461156692
     * @symbol  ?getBlockVolumeDimensions\@TheEndGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @hash   18051492
     * @symbol  ?getPreliminarySurfaceLevel\@TheEndGenerator\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    /**
     * @hash   -761005898
     * @symbol  ?loadChunk\@TheEndGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   -1193278320
     * @symbol  ?postProcess\@TheEndGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @hash   184262720
     * @symbol  ?postProcessMobsAt\@TheEndGenerator\@\@UEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCVAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /**
     * @hash   575834693
     * @symbol  ?prepareAndComputeHeights\@TheEndGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @hash   1492531380
     * @symbol  ?prepareHeights\@TheEndGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @hash   -674977106
     * @symbol  ??0TheEndGenerator\@\@QEAA\@AEAVDimension\@\@IPEBVBiome\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI TheEndGenerator(class Dimension &, unsigned int, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @hash   -1292995298
     * @symbol  ?buildSurfaces\@TheEndGenerator\@\@QEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAVLevelChunk\@\@\@Z
     */
    MCAPI void buildSurfaces(class BlockVolume &, class ChunkPos const &, class LevelChunk &);
    /**
     * @hash   -1250739416
     * @symbol  ?generateDensityCellsForChunk\@TheEndGenerator\@\@QEBA?AV?$MultidimensionalArray\@M$02$02$0CB\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(class ChunkPos const &) const;
    /**
     * @hash   -958294111
     * @symbol  ?isOutsideCentralIslandArea\@TheEndGenerator\@\@SA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI static bool isOutsideCentralIslandArea(class ChunkPos const &);

//private:
    /**
     * @hash   -772781647
     * @symbol  ?_prepareHeights\@TheEndGenerator\@\@AEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_NPEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, bool, std::vector<short> *, int);
    /**
     * @hash   -1983087895
     * @symbol  ?getIslandHeightValue\@TheEndGenerator\@\@AEBAMHHHH\@Z
     */
    MCAPI float getIslandHeightValue(int, int, int, int) const;

private:

};