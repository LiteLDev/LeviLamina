#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/SpinLock.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class HardcodedSpawnAreaRegistry;
class StructureFeatureRegistry;
class BiomeArea;
class HashedString;

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
    uchar                                       mUnknown1[160];            // this+0x88

    // mUnknown2 is std::unordered_map but unknown key and value
    uchar    mUnknown2[64]; // this+0x128
    SpinLock mSpinLock;     // this+0x168

public:
    // prevent constructor by default
    WorldGenerator& operator=(WorldGenerator const&);
    WorldGenerator(WorldGenerator const&);
    WorldGenerator();

public:
    // NOLINTBEGIN
    // symbol: ??1WorldGenerator@@UEAA@XZ
    virtual ~WorldGenerator();

    // vIndex: 33, symbol: ?init@WorldGenerator@@UEAAXXZ
    virtual void init();

    // vIndex: 34, symbol: ?findStructureFeatureTypeAt@WorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    virtual ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    // vIndex: 35, symbol: ?isStructureFeatureTypeAt@WorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    virtual bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    // vIndex: 36, symbol:
    // ?findNearestStructureFeature@WorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_NV?$optional@VHashedString@@@std@@@Z
    virtual bool
    findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<class HashedString>);

    // vIndex: 37, symbol: ?garbageCollectBlueprints@WorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
    virtual void garbageCollectBlueprints(class buffer_span<class ChunkPos> activeChunks);

    // vIndex: 38
    virtual void
    prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers) = 0;

    // vIndex: 39
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    ) = 0;

    // vIndex: 40
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const = 0;

    // vIndex: 41
    virtual class BiomeSource const& getBiomeSource() const = 0;

    // vIndex: 42
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const = 0;

    // vIndex: 43
    virtual class BlockPos findSpawnPosition() const = 0;

    // vIndex: 44, symbol: ?addHardcodedSpawnAreas@WorldGenerator@@UEAAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk& lc);

    // vIndex: 45, symbol: ?debugRender@WorldGenerator@@UEAAXXZ
    virtual void debugRender();

    // vIndex: 46
    virtual void decorateWorldGenLoadChunk(
        class Biome&             biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const = 0;

    // vIndex: 47
    virtual void decorateWorldGenPostProcess(
        class Biome&       biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const = 0;

    // IPreliminarySurfaceProvider vtable overloaded functions
    // symbol: ?getPreliminarySurfaceLevel@WorldGenerator@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldPos) const;

    // ChunkSource vtable overloaded function
    // symbol: ?postProcessMobsAt@WorldGenerator@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    virtual void
    postProcessMobsAt(class BlockSource& blockSource, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    // symbol: ??0WorldGenerator@@QEAA@AEAVDimension@@@Z
    MCAPI explicit WorldGenerator(class Dimension& dimension);

    // symbol:
    // ??0WorldGenerator@@QEAA@AEAVDimension@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI WorldGenerator(class Dimension& dimension, std::unique_ptr<class StructureFeatureRegistry>);

    // symbol: ?computeChunkHeightMap@WorldGenerator@@QEAA?AV?$vector@FV?$allocator@F@std@@@std@@AEBVChunkPos@@@Z
    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const& pos);

    // symbol: ?getStructureFeatureRegistry@WorldGenerator@@QEBAAEAVStructureFeatureRegistry@@XZ
    MCAPI class StructureFeatureRegistry& getStructureFeatureRegistry() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?postProcessStructureFeatures@WorldGenerator@@IEAAXAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI void postProcessStructureFeatures(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    // symbol: ?postProcessStructures@WorldGenerator@@IEAAXAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI void postProcessStructures(class BlockSource&, class Random&, int, int);

    // symbol: ?preProcessStructures@WorldGenerator@@IEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@@Z
    MCAPI void preProcessStructures(class Dimension&, class ChunkPos const&, class BiomeSource const&);

    // symbol:
    // ?prepareStructureFeatureBlueprints@WorldGenerator@@IEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    prepareStructureFeatureBlueprints(class Dimension& dimension, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    // symbol: ?waitForStructures@WorldGenerator@@IEAAXXZ
    MCAPI void waitForStructures();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?TICKING_QUEUE_PASS_LIMIT@WorldGenerator@@1_KB
    MCAPI static uint64 const TICKING_QUEUE_PASS_LIMIT;

    // NOLINTEND
};
