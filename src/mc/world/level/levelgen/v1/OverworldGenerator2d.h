#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"
#include "mc/world/level/levelgen/v1/BeardKernel.h"

// auto generated inclusion list
#include "mc/deps/core/data/OperationNode.h"
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/GeneratorType.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

class Biome;

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    std::unique_ptr<PerlinNoise>        minLimitPerlinNoise; // this+0x170
    std::unique_ptr<PerlinNoise>        maxLimitPerlinNoise; // this+0x178
    std::unique_ptr<PerlinNoise>        mainPerlinNoise;     // this+0x180
    std::unique_ptr<PerlinSimplexNoise> surfaceNoise;        // this+0x188
    std::unique_ptr<PerlinNoise>        scaleNoise;          // this+0x190
    std::unique_ptr<PerlinNoise>        depthNoise;          // this+0x198
    std::unique_ptr<PerlinNoise>        forestNoise;         // this+0x1A0
    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise;   // this+0x1A8
    BeardKernel*                        mBeardKernel;        // this+0x1B0
    std::unique_ptr<BiomeSource>        mBiomeSource;        // this+0xD9B0

    // prevent constructor by default
    OverworldGenerator2d& operator=(OverworldGenerator2d const&);
    OverworldGenerator2d(OverworldGenerator2d const&);
    OverworldGenerator2d();

public:
    // NOLINTBEGIN
    // vIndex: 55, symbol:
    // ?_prepareHeights@OverworldGenerator2d@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z
    virtual void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@OverworldGenerator2d@@EEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(
        class Biome&       biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // vIndex: 42, symbol: ?findSpawnPosition@OverworldGenerator2d@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 47, symbol:
    // ?generateDensityCellsForChunk@OverworldGenerator2d@@UEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
    virtual class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // vIndex: 40, symbol: ?getBiomeSource@OverworldGenerator2d@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 48, symbol: ?getLevelGenHeight@OverworldGenerator2d@@UEBAHXZ
    virtual int getLevelGenHeight() const;

    // vIndex: 54, symbol:
    // ?getMaterialAdjNoise@OverworldGenerator2d@@MEBAAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@XZ
    virtual std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    // vIndex: 53, symbol: ?getSurfaceNoise@OverworldGenerator2d@@MEAAAEBVPerlinSimplexNoise@@XZ
    virtual class PerlinSimplexNoise const& getSurfaceNoise();

    // vIndex: 49, symbol:
    // ?getXoroshiroPositionalRandomFactory@OverworldGenerator2d@@EEBA?AV?$optional@VXoroshiroPositionalRandomFactory@@@std@@XZ
    virtual std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    // symbol:
    // ??0OverworldGenerator2d@@QEAA@AEAVDimension@@I_NPEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI
    OverworldGenerator2d(
        class Dimension&                          dimension,
        uint                                      seed,
        bool                                      isLegacyWorld,
        Biome const*                              biomeOverride,
        std::unique_ptr<StructureFeatureRegistry> structureFeatureRegistry
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateDensityCellsForChunk@OverworldGenerator2d@@AEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // symbol:
    // ?_makeBiomeSource@OverworldGenerator2d@@CA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@IAEBVDimension@@@Z
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(uint seed, class Dimension const& dimension);

    // symbol:
    // ?_makeCommonNodeGraph@OverworldGenerator2d@@CA?AV?$shared_ptr@V?$OperationNode@PEAVBiome@@VPos2d@@@@@std@@W4GeneratorType@@AEBVBiomeRegistry@@@Z
    MCAPI static std::shared_ptr<class OperationNode<class Biome*, class Pos2d>>
    _makeCommonNodeGraph(::GeneratorType generatorType, class BiomeRegistry const& biomeRegistry);

    // NOLINTEND
};
