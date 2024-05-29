#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/block/BlockVolume.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGenerator : public ::WorldGenerator {
public:
    std::vector<Block const*>         mPrototypeBlocks; // this+0x188
    BlockVolume                       mPrototype;       // this+0x1A0
    Biome const*                      mBiome;           // this+0x1C8
    std::unique_ptr<FixedBiomeSource> mBiomeSource;     // this+0x1D0

    // prevent constructor by default
    FlatWorldGenerator& operator=(FlatWorldGenerator const&);
    FlatWorldGenerator(FlatWorldGenerator const&);
    FlatWorldGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 37, symbol: ?prepareHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);

    // vIndex: 38, symbol:
    // ?prepareAndComputeHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);

    // vIndex: 39, symbol: ?getBiomeArea@FlatWorldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const;

    // vIndex: 40, symbol: ?getBiomeSource@FlatWorldGenerator@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41, symbol: ?getBlockVolumeDimensions@FlatWorldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 42, symbol: ?findSpawnPosition@FlatWorldGenerator@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 45, symbol:
    // ?decorateWorldGenLoadChunk@FlatWorldGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void
    decorateWorldGenLoadChunk(class Biome const&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@FlatWorldGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void
    decorateWorldGenPostProcess(class Biome const&, class LevelChunk&, class BlockSource&, class Random&) const;

    // WorldGenerator reload function
    // vIndex: 33, symbol:
    // ?findStructureFeatureTypeAt@FlatWorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    virtual ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&);

    // vIndex: 34, symbol: ?isStructureFeatureTypeAt@FlatWorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    virtual bool isStructureFeatureTypeAt(class BlockPos const&, ::StructureFeatureType) const;

    // vIndex: 35, symbol:
    // ?findNearestStructureFeature@FlatWorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_N@Z
    virtual bool
    findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<HashedString>);

    // vIndex: 36, symbol: ?garbageCollectBlueprints@FlatWorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
    virtual void garbageCollectBlueprints(class buffer_span<class ChunkPos>);

    // ChunkSource reload function
    // vIndex: 9, symbol: ?postProcess@FlatWorldGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 11, symbol: ?loadChunk@FlatWorldGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& levelchunk, bool forceImmediateReplacementDataLoad);

    // symbol: ??0FlatWorldGenerator@@QEAA@AEAVDimension@@IAEBVValue@Json@@@Z
    MCAPI FlatWorldGenerator(class Dimension& dimension, uint, class Json::Value const& generationOptionsJSON);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_generatePrototypeBlockValues@FlatWorldGenerator@@AEAAXAEBVFlatWorldGeneratorOptions@@F@Z
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const& layersDesc, short);

    // NOLINTEND
};
