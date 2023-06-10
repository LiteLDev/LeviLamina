/**
 * @file  VoidGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VoidGenerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOIDGENERATOR
public:
    class VoidGenerator& operator=(class VoidGenerator const &) = delete;
    VoidGenerator(class VoidGenerator const &) = delete;
    VoidGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOIDGENERATOR
    /**
     * @symbol ?createNoiseCache\@VoidGenerator\@\@MEBA?AVChunkLocalNoiseCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    /**
     * @symbol ?createWorldGenCache\@VoidGenerator\@\@MEBA?AVWorldGenCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos) const;
    /**
     * @symbol ?decorateWorldGenLoadChunk\@VoidGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @symbol ?decorateWorldGenPostProcess\@VoidGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @symbol ?findSpawnPosition\@VoidGenerator\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @symbol ?getBiomeArea\@VoidGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @symbol ?getBiomeSource\@VoidGenerator\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @symbol ?getBlockVolumeDimensions\@VoidGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @symbol ?loadChunk\@VoidGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @symbol ?postProcess\@VoidGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @symbol ?prepareAndComputeHeights\@VoidGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @symbol ?prepareHeights\@VoidGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @symbol ??0VoidGenerator\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI VoidGenerator(class Dimension &);

};
