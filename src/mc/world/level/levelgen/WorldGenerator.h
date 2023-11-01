#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"


// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class HardcodedSpawnAreaRegistry;
class StructureFeatureRegistry;

class WorldGenerator : public ChunkSource, public IPreliminarySurfaceProvider {
public:
    // WorldGenerator inner types declare
    // clang-format off
    struct BlockVolumeDimensions;
    // clang-format on

    // WorldGenerator inner types define
    struct BlockVolumeDimensions {
        uint mWidth;  // this+0x0
        uint mDepth;  // this+0x4
        uint mHeight; // this+0x8
    };

    std::unique_ptr<HardcodedSpawnAreaRegistry> mHardcodedSpawnTypes;      // this+0x78
    std::unique_ptr<StructureFeatureRegistry>   mStructureFeatureRegistry; // this+0x80

public:
    // prevent constructor by default
    WorldGenerator& operator=(WorldGenerator const&);
    WorldGenerator(WorldGenerator const&);
    WorldGenerator();

public:
    // NOLINTBEGIN
    // symbol: ??1WorldGenerator@@UEAA@XZ
    virtual ~WorldGenerator();

    // vIndex: 33, symbol: ?findStructureFeatureTypeAt@WorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    virtual ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&);

    // vIndex: 34, symbol: ?isStructureFeatureTypeAt@WorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    virtual bool isStructureFeatureTypeAt(class BlockPos const&, ::StructureFeatureType) const;

    // vIndex: 35, symbol:
    // ?findNearestStructureFeature@WorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_N@Z
    virtual bool findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool);

    // vIndex: 36, symbol: ?garbageCollectBlueprints@WorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
    virtual void garbageCollectBlueprints(class buffer_span<class ChunkPos>);

    // vIndex: 37
    virtual void prepareHeights(class BlockVolume&, class ChunkPos const&, bool) = 0;

    // vIndex: 38
    virtual void
    prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int) = 0;

    // vIndex: 39
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const = 0;

    // vIndex: 40
    virtual class BiomeSource const& getBiomeSource() const = 0;

    // vIndex: 41
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const = 0;

    // vIndex: 42
    virtual class BlockPos findSpawnPosition() const = 0;

    // vIndex: 43, symbol: ?addHardcodedSpawnAreas@WorldGenerator@@UEAAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk&);

    // vIndex: 44, symbol: ?debugRender@WorldGenerator@@UEAAXXZ
    virtual void debugRender();

    // vIndex: 45
    virtual void
    decorateWorldGenLoadChunk(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const = 0;

    // vIndex: 46
    virtual void
    decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const = 0;

    // IPreliminarySurfaceProvider reload function
    // symbol: ?getPreliminarySurfaceLevel@WorldGenerator@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;

    // ChunkSource reload function
    // symbol: ?postProcessMobsAt@WorldGenerator@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    virtual void postProcessMobsAt(class BlockSource&, int, int, class Random&);

    // symbol: ??0WorldGenerator@@QEAA@AEAVDimension@@@Z
    MCAPI explicit WorldGenerator(class Dimension&);

    // symbol:
    // ??0WorldGenerator@@QEAA@AEAVDimension@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI WorldGenerator(class Dimension&, std::unique_ptr<class StructureFeatureRegistry>);

    // symbol: ?computeChunkHeightMap@WorldGenerator@@QEAA?AV?$vector@FV?$allocator@F@std@@@std@@AEBVChunkPos@@@Z
    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const&);

    // symbol: ?getStructureFeatureRegistry@WorldGenerator@@QEBAAEAVStructureFeatureRegistry@@XZ
    MCAPI class StructureFeatureRegistry& getStructureFeatureRegistry() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?postProcessStructureFeatures@WorldGenerator@@IEAAXAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI void postProcessStructureFeatures(class BlockSource&, class Random&, int, int);

    // symbol:
    // ?prepareStructureFeatureBlueprints@WorldGenerator@@IEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    prepareStructureFeatureBlueprints(class Dimension&, class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?TICKING_QUEUE_PASS_LIMIT@WorldGenerator@@1_KB
    MCAPI static uint64 const TICKING_QUEUE_PASS_LIMIT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    // NOLINTEND
};
