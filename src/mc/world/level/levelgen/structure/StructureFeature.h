#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/SpinLock.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class StructureFeature {
public:
    StructureFeatureType                                          mStructureFeatureType;       // this+8
    std::unordered_map<ChunkPos, std::unique_ptr<StructureStart>> mCachedStructures;           // this+16
    std::shared_mutex                                             mCacheMutex;                 // this+80
    std::unordered_set<ChunkPos>                                  mVisitedPositions;           // this+88
    SpinLock                                                      mVisitedPositionsMutex;      // this+152
    unsigned int                                                  mRadius;                     // this+184
    int                                                           mXScale;                     // this+188
    int                                                           mZScale;                     // this+192
    std::mutex                                                    mCreateBlueprintsMutex;      // this+200
    std::condition_variable                                       mBlueprintWaitVar;           // this+280
    std::atomic<int>                                              mActiveBlueprintCreateCount; // this+352
    std::atomic<bool>                                             mBlueprintsFinished;         // this+356
public:
    // prevent constructor by default
    StructureFeature& operator=(StructureFeature const&);
    StructureFeature(StructureFeature const&);
    StructureFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StructureFeature@@UEAA@XZ
    virtual ~StructureFeature();

    // vIndex: 1, symbol: ?shouldAddHardcodedSpawnAreas@StructureFeature@@UEBA_NXZ
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@StructureFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@StructureFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4, symbol: ?initMobSpawnTypes@StructureFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@AncientCityFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&) = 0;

    // vIndex: 6, symbol:
    // ?createStructureStart@AncientCityFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, class IPreliminarySurfaceProvider const&) = 0;

    // vIndex: 7, symbol: ?getStructureAt@StructureFeature@@MEAAPEAVStructureStart@@HHH@Z
    virtual class StructureStart* getStructureAt(int cellX, int cellY, int cellZ);

    // symbol: ??0StructureFeature@@QEAA@IW4StructureFeatureType@@@Z
    MCAPI StructureFeature(uint seed, ::StructureFeatureType);

    // symbol: ?addHardcodedSpawnAreas@StructureFeature@@QEAAXAEAVLevelChunk@@@Z
    MCAPI void addHardcodedSpawnAreas(class LevelChunk& lc);

    // symbol:
    // ?chunkStartAtSurfaceLevel@StructureFeature@@QEAA?AVBlockPos@@AEBVIPreliminarySurfaceProvider@@VChunkPos@@H@Z
    MCAPI class BlockPos chunkStartAtSurfaceLevel(class IPreliminarySurfaceProvider const&, class ChunkPos pos, int);

    // symbol:
    // ?createBlueprints@StructureFeature@@QEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    createBlueprints(class Dimension& dimension, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    // symbol: ?debugRender@StructureFeature@@QEAAXXZ
    MCAPI void debugRender();

    // symbol:
    // ?findFarAwayStructures@StructureFeature@@QEAA?AV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@V?$buffer_span@VChunkPos@@@@I@Z
    MCAPI std::vector<class ChunkPos>
          findFarAwayStructures(class buffer_span<class ChunkPos> activeChunks, uint safetyBorder);

    // symbol:
    // ?foreachIntersectingStructureStart@StructureFeature@@QEAAXAEBVBoundingBox@@V?$function@$$A6AXAEAVStructureStart@@@Z@std@@@Z
    MCAPI void
    foreachIntersectingStructureStart(class BoundingBox const& bb, std::function<void(class StructureStart&)> fn);

    // symbol: ?garbageCollectBlueprints@StructureFeature@@QEAAXV?$buffer_span@VChunkPos@@@@I@Z
    MCAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos> activeChunks, uint safetyBorder);

    // symbol: ?getType@StructureFeature@@QEBA?AW4StructureFeatureType@@XZ
    MCAPI ::StructureFeatureType getType() const;

    // symbol: ?isInsideBoundingFeature@StructureFeature@@QEAA_NHHH@Z
    MCAPI bool isInsideBoundingFeature(int cellX, int cellY, int cellZ);

    // symbol: ?postProcess@StructureFeature@@QEAA_NAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI bool postProcess(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    // symbol: ?postProcessMobsAt@StructureFeature@@QEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    MCAPI void
    postProcessMobsAt(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    // symbol: ?waitForFeatureBlueprints@StructureFeature@@QEAAXXZ
    MCAPI void waitForFeatureBlueprints();

    // symbol:
    // ?findNearestFeaturePositionBySpacing@StructureFeature@@SA_NAEAVDimension@@AEBVIPreliminarySurfaceProvider@@AEAV1@AEBV?$optional@VHashedString@@@std@@AEBVBiomeSource@@AEBVBlockPos@@AEAV7@HHH_NH7@Z
    MCAPI static bool findNearestFeaturePositionBySpacing(
        class Dimension&,
        class IPreliminarySurfaceProvider const&,
        class StructureFeature&,
        std::optional<class HashedString> const&,
        class BiomeSource const&,
        class BlockPos const&,
        class BlockPos&,
        int,
        int,
        int,
        bool,
        int,
        bool
    );

    // symbol:
    // ?getBiomeForFeatureGeneration@StructureFeature@@SA?AU?$pair@$$CBVBlockPos@@PEBVBiome@@@std@@AEBVBiomeSource@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI static std::pair<class BlockPos const, class Biome const*>
    getBiomeForFeatureGeneration(class BiomeSource const&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // symbol: ?getChunkPosInSpace@StructureFeature@@SA?AVChunkPos@@AEBV2@AEAVRandom@@IHHH_N@Z
    MCAPI static class ChunkPos getChunkPosInSpace(
        class ChunkPos const& cp,
        class Random&         random,
        uint                  levelSeed,
        int                   spacing,
        int,
        int  salt,
        bool tiltedSpacing
    );

    // symbol: ?setRandomSeedFor@StructureFeature@@SAXAEAVRandom@@HHHI@Z
    MCAPI static void setRandomSeedFor(class Random& result, int x, int z, int salt, uint levelSeed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?addFeature@StructureFeature@@IEAAXAEAVDimension@@AEAVRandom@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    addFeature(class Dimension& dimension, class Random& random, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doesBiomeHaveTag@StructureFeature@@CA_NAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@AEBVBiomeSource@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@AEBVHashedString@@@Z
    MCAPI static bool
    _doesBiomeHaveTag(class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&, class BiomeSource const&, class ChunkPos const&, class IPreliminarySurfaceProvider const&, class HashedString const&);

    // NOLINTEND
};
