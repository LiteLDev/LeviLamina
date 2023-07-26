#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/OperationNode.h"
#include "mc/deps/core/utility/MultidimensionalArray.h"

class OverworldGenerator2d {

public:
    // prevent constructor by default
    OverworldGenerator2d& operator=(OverworldGenerator2d const&) = delete;
    OverworldGenerator2d(OverworldGenerator2d const&)            = delete;
    OverworldGenerator2d()                                       = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATOR2D
    /**
     * @symbol
     * ?_prepareHeights\@OverworldGenerator2d\@\@EEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEBVWorldGenCache\@\@PEAVAquifer\@\@$$QEAV?$function\@$$A6AXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z\@std\@\@_NPEAV?$vector\@FV?$allocator\@F\@std\@\@\@7\@H\@Z
     */
    MCVAPI void _prepareHeights(
        class BlockVolume&,
        class ChunkPos const&,
        class WorldGenCache const&,
        class Aquifer*,
        class std::function<void(class BlockPos const&, class Block const&, int)>&&,
        bool,
        std::vector<short>*,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?decorateWorldGenPostProcess\@OverworldGenerator2d\@\@EEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void
    decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const; // NOLINT
    /**
     * @symbol ?findSpawnPosition\@OverworldGenerator2d\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const; // NOLINT
    /**
     * @symbol
     * ?generateDensityCellsForChunk\@OverworldGenerator2d\@\@UEBA?AV?$MultidimensionalArray\@M$04$04$0CJ\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const&) const; // NOLINT
    /**
     * @symbol ?getBiomeSource\@OverworldGenerator2d\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const& getBiomeSource() const; // NOLINT
    /**
     * @symbol ?getLevelGenHeight\@OverworldGenerator2d\@\@UEBAHXZ
     */
    MCVAPI int getLevelGenHeight() const; // NOLINT
    /**
     * @symbol
     * ?getMaterialAdjNoise\@OverworldGenerator2d\@\@MEBAAEBV?$unique_ptr\@VPerlinSimplexNoise\@\@U?$default_delete\@VPerlinSimplexNoise\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const; // NOLINT
    /**
     * @symbol ?getSurfaceNoise\@OverworldGenerator2d\@\@MEAAAEBVPerlinSimplexNoise\@\@XZ
     */
    MCVAPI class PerlinSimplexNoise const& getSurfaceNoise(); // NOLINT
    /**
     * @symbol
     * ?getXoroshiroPositionalRandomFactory\@OverworldGenerator2d\@\@EEBA?AV?$optional\@VXoroshiroPositionalRandomFactory\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory>
    getXoroshiroPositionalRandomFactory() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0OverworldGenerator2d\@\@QEAA\@AEAVDimension\@\@I_NPEBVBiome\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    OverworldGenerator2d(class Dimension&, unsigned int, bool, class Biome const*, std::unique_ptr<class StructureFeatureRegistry>); // NOLINT

    // private:
    /**
     * @symbol
     * ?_generateDensityCellsForChunk\@OverworldGenerator2d\@\@AEBA?AV?$MultidimensionalArray\@M$04$04$0CJ\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const&) const; // NOLINT
    /**
     * @symbol
     * ?_makeBiomeSource\@OverworldGenerator2d\@\@CA?AV?$unique_ptr\@VBiomeSource\@\@U?$default_delete\@VBiomeSource\@\@\@std\@\@\@std\@\@IAEBVDimension\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(unsigned int, class Dimension const&); // NOLINT
    /**
     * @symbol
     * ?_makeCommonNodeGraph\@OverworldGenerator2d\@\@CA?AV?$shared_ptr\@V?$OperationNode\@PEAVBiome\@\@VPos2d\@\@\@\@\@std\@\@W4GeneratorType\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class OperationNode<class Biome*, class Pos2d>>
    _makeCommonNodeGraph(enum class GeneratorType, class BiomeRegistry const&); // NOLINT

private:
};
