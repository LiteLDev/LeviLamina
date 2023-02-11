/**
 * @file  OverworldGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldGenerator.
 *
 */
class OverworldGenerator {

#define AFTER_EXTRA
// Add Member There
public:
struct ThreadData {
    ThreadData() = delete;
    ThreadData(ThreadData const&) = delete;
    ThreadData(ThreadData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATOR
public:
    class OverworldGenerator& operator=(class OverworldGenerator const &) = delete;
    OverworldGenerator(class OverworldGenerator const &) = delete;
    OverworldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATOR
    /**
     * @hash   -1999461271
     * @symbol  ?createNoiseCache\@OverworldGenerator\@\@MEBA?AVChunkLocalNoiseCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    /**
     * @hash   -1323207973
     * @symbol  ?createWorldGenCache\@OverworldGenerator\@\@MEBA?AVWorldGenCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos) const;
    /**
     * @hash   136416870
     * @symbol  ?decorateWorldGenLoadChunk\@OverworldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @hash   1289767908
     * @symbol  ?getBiomeArea\@OverworldGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   1199738296
     * @symbol  ?getBlockVolumeDimensions\@OverworldGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @hash   208572394
     * @symbol  ?loadChunk\@OverworldGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @hash   1208290380
     * @symbol  ?postProcess\@OverworldGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @hash   1889922593
     * @symbol  ?prepareAndComputeHeights\@OverworldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @hash   -18922864
     * @symbol  ?prepareHeights\@OverworldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
    /**
     * @hash   1139113113
     * @symbol  ?tryMakeAquifer\@OverworldGenerator\@\@MEBA?AV?$unique_ptr\@VAquifer\@\@U?$default_delete\@VAquifer\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@AEBVSurfaceLevelCache\@\@FFF\@Z
     */
    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(class ChunkPos const &, class SurfaceLevelCache const &, short, short, short) const;
    /**
     * @hash   -1409749724
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~OverworldGenerator();
#endif
    /**
     * @hash   -1503913856
     * @symbol  ??0OverworldGenerator\@\@QEAA\@AEAVDimension\@\@_NV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OverworldGenerator(class Dimension &, bool, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @hash   14755396
     * @symbol  ?buildSurfaces\@OverworldGenerator\@\@QEAAXAEAUThreadData\@1\@AEAVBlockVolume\@\@AEAVLevelChunk\@\@AEBVChunkPos\@\@AEBVSurfaceLevelCache\@\@\@Z
     */
    MCAPI void buildSurfaces(struct OverworldGenerator::ThreadData &, class BlockVolume &, class LevelChunk &, class ChunkPos const &, class SurfaceLevelCache const &);

};