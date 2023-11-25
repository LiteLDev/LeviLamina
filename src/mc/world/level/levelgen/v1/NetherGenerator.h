#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"

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
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

    std::unique_ptr<PerlinNoise>        lperlinNoise1;     // this+0x68
    std::unique_ptr<PerlinNoise>        lperlinNoise2;     // this+0x70
    std::unique_ptr<PerlinNoise>        perlinNoise1;      // this+0x78
    std::unique_ptr<PerlinNoise>        perlinNoise2;      // this+0x80
    std::unique_ptr<PerlinNoise>        scaleNoise;        // this+0x88
    std::unique_ptr<PerlinNoise>        depthNoise;        // this+0x90
    std::unique_ptr<PerlinSimplexNoise> surfaceNoise;      // this+0x98
    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise; // this+0xA0
    // Bedrock::Threading::InstancedThreadLocal<NetherGenerator::ThreadData>
    char                         generatorHelpersPool[168]; // this+0xA8
    std::unique_ptr<BiomeSource> mBiomeSource;              // this+0x150

public:
    // prevent constructor by default
    NetherGenerator& operator=(NetherGenerator const&);
    NetherGenerator(NetherGenerator const&);
    NetherGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 45, symbol:
    // ?decorateWorldGenLoadChunk@NetherGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void
    decorateWorldGenLoadChunk(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@NetherGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const;

    // vIndex: 42, symbol: ?findSpawnPosition@NetherGenerator@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 39, symbol: ?getBiomeArea@NetherGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const;

    // vIndex: 40, symbol: ?getBiomeSource@NetherGenerator@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41, symbol: ?getBlockVolumeDimensions@NetherGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 11, symbol: ?loadChunk@NetherGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk&, bool);

    // vIndex: 9, symbol: ?postProcess@NetherGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource&);

    // vIndex: 38, symbol:
    // ?prepareAndComputeHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);

    // vIndex: 37, symbol: ?prepareHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);

    // symbol:
    // ??0NetherGenerator@@QEAA@AEAVDimension@@IPEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI NetherGenerator(class Dimension&, uint, class Biome const*, std::unique_ptr<class StructureFeatureRegistry>);

    // symbol: ?buildSurfaces@NetherGenerator@@QEAAXAEAVBlockVolume@@AEAVLevelChunk@@AEBVChunkPos@@@Z
    MCAPI void buildSurfaces(class BlockVolume&, class LevelChunk&, class ChunkPos const&);

    // symbol:
    // ?generateDensityCellsForChunk@NetherGenerator@@QEBA?AV?$MultidimensionalArray@M$04$04$0BB@@Util@@AEBVChunkPos@@@Z
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(class ChunkPos const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_prepareHeights@NetherGenerator@@AEAAXAEAVBlockVolume@@AEBVChunkPos@@_NPEAV?$vector@FV?$allocator@F@std@@@std@@H@Z
    MCAPI void _prepareHeights(class BlockVolume&, class ChunkPos const&, bool, std::vector<short>*, int);

    // symbol:
    // ?_makeBiomeSource@NetherGenerator@@CA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@AEAVDimension@@@Z
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(class Dimension&);

    // NOLINTEND
};
