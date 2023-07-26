#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGenerator {

public:
    // prevent constructor by default
    FlatWorldGenerator& operator=(FlatWorldGenerator const&) = delete;
    FlatWorldGenerator(FlatWorldGenerator const&)            = delete;
    FlatWorldGenerator()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLATWORLDGENERATOR
    /**
     * @symbol
     * ?decorateWorldGenLoadChunk\@FlatWorldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI void
    decorateWorldGenLoadChunk(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const; // NOLINT
    /**
     * @symbol
     * ?decorateWorldGenPostProcess\@FlatWorldGenerator\@\@MEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void
    decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const; // NOLINT
    /**
     * @symbol
     * ?findNearestStructureFeature\@FlatWorldGenerator\@\@UEAA_NW4StructureFeatureType\@\@AEBVBlockPos\@\@AEAV3\@_N\@Z
     */
    MCVAPI bool findNearestStructureFeature(
        enum class StructureFeatureType,
        class BlockPos const&,
        class BlockPos&,
        bool
    ); // NOLINT
    /**
     * @symbol ?findSpawnPosition\@FlatWorldGenerator\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const; // NOLINT
    /**
     * @symbol ?findStructureFeatureTypeAt\@FlatWorldGenerator\@\@UEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?garbageCollectBlueprints\@FlatWorldGenerator\@\@UEAAXV?$buffer_span\@VChunkPos\@\@\@\@\@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>); // NOLINT
    /**
     * @symbol ?getBiomeArea\@FlatWorldGenerator\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int) const; // NOLINT
    /**
     * @symbol ?getBiomeSource\@FlatWorldGenerator\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const& getBiomeSource() const; // NOLINT
    /**
     * @symbol ?getBlockVolumeDimensions\@FlatWorldGenerator\@\@UEBA?AUBlockVolumeDimensions\@WorldGenerator\@\@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const; // NOLINT
    /**
     * @symbol ?isStructureFeatureTypeAt\@FlatWorldGenerator\@\@UEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const&, enum class StructureFeatureType) const; // NOLINT
    /**
     * @symbol ?loadChunk\@FlatWorldGenerator\@\@UEAAXAEAVLevelChunk\@\@_N\@Z
     */
    MCVAPI void loadChunk(class LevelChunk&, bool); // NOLINT
    /**
     * @symbol ?postProcess\@FlatWorldGenerator\@\@UEAA_NAEAVChunkViewSource\@\@\@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource&); // NOLINT
    /**
     * @symbol
     * ?prepareAndComputeHeights\@FlatWorldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEAV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@_NH\@Z
     */
    MCVAPI void
    prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int); // NOLINT
    /**
     * @symbol ?prepareHeights\@FlatWorldGenerator\@\@UEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@_N\@Z
     */
    MCVAPI void prepareHeights(class BlockVolume&, class ChunkPos const&, bool); // NOLINT
#endif
    /**
     * @symbol ??0FlatWorldGenerator\@\@QEAA\@AEAVDimension\@\@IAEBVValue\@Json\@\@\@Z
     */
    MCAPI FlatWorldGenerator(class Dimension&, unsigned int, class Json::Value const&); // NOLINT

    // private:
    /**
     * @symbol ?_generatePrototypeBlockValues\@FlatWorldGenerator\@\@AEAAXAEBVFlatWorldGeneratorOptions\@\@F\@Z
     */
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const&, short); // NOLINT

private:
};
