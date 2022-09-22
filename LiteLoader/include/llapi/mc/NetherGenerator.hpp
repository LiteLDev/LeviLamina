/**
 * @file  NetherGenerator.hpp
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
 * @brief MC class NetherGenerator.
 *
 */
class NetherGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERGENERATOR
public:
    class NetherGenerator& operator=(class NetherGenerator const &) = delete;
    NetherGenerator(class NetherGenerator const &) = delete;
    NetherGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERGENERATOR
    /**
     * @hash   197414300
     * @symbol ?decorateWorldGenLoadChunk@NetherGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @hash   -1558964588
     * @symbol ?decorateWorldGenPostProcess@NetherGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @hash   -1805311000
     * @symbol ?findSpawnPosition@NetherGenerator@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   -531197826
     * @symbol ?getBiomeArea@NetherGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   1174774836
     * @symbol ?getBiomeSource@NetherGenerator@@UEBAAEBVBiomeSource@@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @hash   -793966302
     * @symbol ?getBlockVolumeDimensions@NetherGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @hash   116430532
     * @symbol ?loadChunk@NetherGenerator@@UEAAXAEAVLevelChunk@@_N@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   1081999842
     * @symbol ?postProcess@NetherGenerator@@UEAA_NAEAVChunkViewSource@@@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @hash   291237207
     * @symbol ?prepareAndComputeHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @hash   1421128902
     * @symbol ?prepareHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @hash   -1168863076
     * @symbol ??0NetherGenerator@@QEAA@AEAVDimension@@IPEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
     */
    MCAPI NetherGenerator(class Dimension &, unsigned int, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @hash   -1598698404
     * @symbol ?buildSurfaces@NetherGenerator@@QEAAXAEAVBlockVolume@@AEAVLevelChunk@@AEBVChunkPos@@@Z
     */
    MCAPI void buildSurfaces(class BlockVolume &, class LevelChunk &, class ChunkPos const &);
    /**
     * @hash   1078217489
     * @symbol ?generateDensityCellsForChunk@NetherGenerator@@QEBA?AV?$MultidimensionalArray@M$04$04$0BB@@Util@@AEBVChunkPos@@@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(class ChunkPos const &) const;

//private:
    /**
     * @hash   -1064759613
     * @symbol ?_prepareHeights@NetherGenerator@@AEAAXAEAVBlockVolume@@AEBVChunkPos@@_NPEAV?$vector@FV?$allocator@F@std@@@std@@H@Z
     */
    MCAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, bool, std::vector<short> *, int);
    /**
     * @hash   1541739636
     * @symbol ?_makeBiomeSource@NetherGenerator@@CA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@AEAVDimension@@@Z
     */
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(class Dimension &);

private:

};