#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/ConditionVariable.h"
#include "mc/deps/core/common/bedrock/Mutex.h"
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
    uint                                                          mRadius;                     // this+184
    int                                                           mXScale;                     // this+188
    int                                                           mZScale;                     // this+192
    Bedrock::Threading::Mutex                                     mCreateBlueprintsMutex;      // this+200
    Bedrock::Threading::ConditionVariable                         mBlueprintWaitVar;           // this+280
    std::atomic_int                                               mActiveBlueprintCreateCount; // this+352
    std::atomic_bool                                              mBlueprintsFinished;         // this+356
public:
    // prevent constructor by default
    StructureFeature& operator=(StructureFeature const&);
    StructureFeature(StructureFeature const&);
    StructureFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureFeature();

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&) = 0;

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, class IPreliminarySurfaceProvider const&) = 0;

    // vIndex: 7
    virtual class StructureStart* getStructureAt(int cellX, int cellY, int cellZ);

    MCAPI StructureFeature(uint seed, ::StructureFeatureType);

    MCAPI void addHardcodedSpawnAreas(class LevelChunk& lc);

    MCAPI class BlockPos chunkStartAtSurfaceLevel(class IPreliminarySurfaceProvider const&, class ChunkPos pos, int);

    MCAPI void
    createBlueprints(class Dimension& dimension, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    MCAPI void debugRender();

    MCAPI std::vector<class ChunkPos>
          findFarAwayStructures(class buffer_span<class ChunkPos> activeChunks, uint safetyBorder);

    MCAPI void
    foreachIntersectingStructureStart(class BoundingBox const& bb, std::function<void(class StructureStart&)> fn);

    MCAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos> activeChunks, uint safetyBorder);

    MCAPI ::StructureFeatureType getType() const;

    MCAPI bool isInsideBoundingFeature(int cellX, int cellY, int cellZ);

    MCAPI bool postProcess(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    MCAPI void
    postProcessMobsAt(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    MCAPI void waitForFeatureBlueprints();

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

    MCAPI static std::pair<class BlockPos const, class Biome const*>
    getBiomeForFeatureGeneration(class BiomeSource const&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    MCAPI static class ChunkPos getChunkPosInSpace(
        class ChunkPos const& cp,
        class Random&         random,
        uint                  levelSeed,
        int                   spacing,
        int,
        int  salt,
        bool tiltedSpacing
    );

    MCAPI static void setRandomSeedFor(class Random& result, int x, int z, int salt, uint levelSeed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void
    addFeature(class Dimension& dimension, class Random& random, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool
    _doesBiomeHaveTag(class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&, class BiomeSource const&, class ChunkPos const&, class IPreliminarySurfaceProvider const&, class HashedString const&);

    // NOLINTEND
};
