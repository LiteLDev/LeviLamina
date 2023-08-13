#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

class NetherGenerator : public ::WorldGenerator {
public:
    // NetherGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // NetherGenerator inner types define
    struct ThreadData {

    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&) = delete;
        ThreadData(ThreadData const&)            = delete;
        ThreadData()                             = delete;
    };

public:
    // prevent constructor by default
    NetherGenerator& operator=(NetherGenerator const&) = delete;
    NetherGenerator(NetherGenerator const&)            = delete;
    NetherGenerator()                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERGENERATOR
    /**
     * @symbol
     * ?decorateWorldGenLoadChunk\@NetherGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void
    decorateWorldGenLoadChunk(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;
    /**
     * @symbol
     * ?decorateWorldGenPostProcess\@NetherGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const;
    /**
     * @symbol ?findSpawnPosition\@NetherGenerator\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @symbol ?getBiomeArea\@NetherGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int) const;
    /**
     * @symbol ?getBiomeSource\@NetherGenerator\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const& getBiomeSource() const;
    /**
     * @symbol ?getBlockVolumeDimensions\@NetherGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @symbol ?loadChunk\@NetherGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk&, bool);
    /**
     * @symbol ?postProcess\@NetherGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource&);
    /**
     * @symbol
     * ?prepareAndComputeHeights\@NetherGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);
    /**
     * @symbol ?prepareHeights\@NetherGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);
#endif
    /**
     * @symbol
     * ??0NetherGenerator\@\@QEAA\@AEAVDimension\@\@IPEBVBiome\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    NetherGenerator(class Dimension&, unsigned int, class Biome const*, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @symbol ?buildSurfaces\@NetherGenerator\@\@QEAAXAEAVBlockVolume\@\@AEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void buildSurfaces(class BlockVolume&, class LevelChunk&, class ChunkPos const&);
    /**
     * @symbol
     * ?generateDensityCellsForChunk\@NetherGenerator\@\@QEBA?AV?$MultidimensionalArray\@M$04$04$0BB\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(class ChunkPos const&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_prepareHeights\@NetherGenerator\@\@AEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_NPEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void _prepareHeights(class BlockVolume&, class ChunkPos const&, bool, std::vector<short>*, int);
    /**
     * @symbol
     * ?_makeBiomeSource\@NetherGenerator\@\@CA?AV?$unique_ptr\@VBiomeSource\@\@U?$default_delete\@VBiomeSource\@\@\@std\@\@\@std\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(class Dimension&);
    // NOLINTEND
};
