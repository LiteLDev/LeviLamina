#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    // prevent constructor by default
    OverworldGenerator2d& operator=(OverworldGenerator2d const&);
    OverworldGenerator2d(OverworldGenerator2d const&);
    OverworldGenerator2d();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_prepareHeights@OverworldGenerator2d@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z
    MCVAPI void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    // symbol:
    // ?decorateWorldGenPostProcess@OverworldGenerator2d@@EEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    MCVAPI void decorateWorldGenPostProcess(
        class Biome&       biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // symbol: ?findSpawnPosition@OverworldGenerator2d@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos findSpawnPosition() const;

    // symbol:
    // ?generateDensityCellsForChunk@OverworldGenerator2d@@UEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // symbol: ?getBiomeSource@OverworldGenerator2d@@UEBAAEBVBiomeSource@@XZ
    MCVAPI class BiomeSource const& getBiomeSource() const;

    // symbol: ?getLevelGenHeight@OverworldGenerator2d@@UEBAHXZ
    MCVAPI int getLevelGenHeight() const;

    // symbol:
    // ?getMaterialAdjNoise@OverworldGenerator2d@@MEBAAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    // symbol: ?getSurfaceNoise@OverworldGenerator2d@@MEAAAEBVPerlinSimplexNoise@@XZ
    MCVAPI class PerlinSimplexNoise const& getSurfaceNoise();

    // symbol:
    // ?getXoroshiroPositionalRandomFactory@OverworldGenerator2d@@EEBA?AV?$optional@VXoroshiroPositionalRandomFactory@@@std@@XZ
    MCVAPI std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    // symbol: ??0OverworldGenerator2d@@QEAA@AEAVDimension@@I_NPEBVBiome@@@Z
    MCAPI OverworldGenerator2d(class Dimension&, uint, bool, class Biome const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateDensityCellsForChunk@OverworldGenerator2d@@AEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // NOLINTEND
};
