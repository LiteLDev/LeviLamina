#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class OverworldGenerator : public ::WorldGenerator {
public:
    // OverworldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // OverworldGenerator inner types define
    struct ThreadData {

    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&) = delete;
        ThreadData(ThreadData const&)            = delete;
        ThreadData()                             = delete;
    };

public:
    // prevent constructor by default
    OverworldGenerator& operator=(OverworldGenerator const&) = delete;
    OverworldGenerator(OverworldGenerator const&)            = delete;
    OverworldGenerator()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATOR
    /**
     * @symbol ?createNoiseCache\@OverworldGenerator\@\@MEBA?AVChunkLocalNoiseCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    /**
     * @symbol ?createWorldGenCache\@OverworldGenerator\@\@MEBA?AVWorldGenCache\@\@VChunkPos\@\@\@Z
     */
    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos) const;
    /**
     * @symbol
     * ?decorateWorldGenLoadChunk\@OverworldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void
    decorateWorldGenLoadChunk(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;
    /**
     * @symbol ?getBiomeArea\@OverworldGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int) const;
    /**
     * @symbol ?getBlockVolumeDimensions\@OverworldGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @symbol ?loadChunk\@OverworldGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk&, bool);
    /**
     * @symbol ?postProcess\@OverworldGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource&);
    /**
     * @symbol
     * ?prepareAndComputeHeights\@OverworldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);
    /**
     * @symbol ?prepareHeights\@OverworldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);
    /**
     * @symbol
     * ?tryMakeAquifer\@OverworldGenerator\@\@MEBA?AV?$unique_ptr\@VAquifer\@\@U?$default_delete\@VAquifer\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@AEBVSurfaceLevelCache\@\@FFF\@Z
     */
    MCVAPI std::unique_ptr<class Aquifer>
           tryMakeAquifer(class ChunkPos const&, class SurfaceLevelCache const&, short, short, short) const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OverworldGenerator();
#endif
    /**
     * @symbol
     * ??0OverworldGenerator\@\@QEAA\@AEAVDimension\@\@_NV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OverworldGenerator(class Dimension&, bool, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @symbol
     * ?buildSurfaces\@OverworldGenerator\@\@QEAAXAEAUThreadData\@1\@AEAVBlockVolume\@\@AEAVLevelChunk\@\@AEBVChunkPos\@\@AEBVSurfaceLevelCache\@\@\@Z
     */
    MCAPI void
    buildSurfaces(struct OverworldGenerator::ThreadData&, class BlockVolume&, class LevelChunk&, class ChunkPos const&, class SurfaceLevelCache const&);
    // NOLINTEND
};
