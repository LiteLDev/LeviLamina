#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/threading/ConditionVariable.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/SpinLock.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
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
    virtual bool getNearestGeneratedFeature(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    // vIndex: 4
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&);

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&) = 0;

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& chunkPos, class IPreliminarySurfaceProvider const&) = 0;

    // vIndex: 7
    virtual class StructureStart* getStructureAt(int cellX, int cellY, int cellZ);

    MCAPI StructureFeature(uint seed, ::StructureFeatureType structureFeatureType);

    MCAPI void addHardcodedSpawnAreas(class LevelChunk& lc);

    MCAPI class BlockPos chunkStartAtSurfaceLevel(
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class ChunkPos                           pos,
        int                                      defaultYLevel
    );

    MCAPI void createBlueprints(
        class Dimension&                         dimension,
        class ChunkPos const&                    cp,
        class BiomeSource const&                 biomeSource,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

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
        class Dimension&                         dimension,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class StructureFeature&                  feature,
        std::optional<class HashedString> const& biomeTag,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          result,
        int                                      featureSpacing,
        int                                      minFeatureSeparation,
        int                                      randomSalt,
        bool                                     tiltedSpacing,
        int                                      maxSearchRadius,
        bool                                     mustBeInNewChunks
    );

    MCAPI static std::pair<class BlockPos const, class Biome const*> getBiomeForFeatureGeneration(
        class BiomeSource const&                 biomeSource,
        class ChunkPos const&                    chunkPos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI static class ChunkPos getChunkPosInSpace(
        class ChunkPos const& cp,
        class Random&         random,
        uint                  levelSeed,
        int                   spacing,
        int                   separation,
        int                   salt,
        bool                  tiltedSpacing
    );

    MCAPI static void setRandomSeedFor(class Random& result, int x, int z, int salt, uint levelSeed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void addFeature(
        class Dimension&                         dimension,
        class Random&                            random,
        class ChunkPos const&                    cp,
        class BiomeSource const&                 biomeSource,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _doesBiomeHaveTag(
        class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
                                                 biomeTagRegistry,
        class BiomeSource const&                 biomeSource,
        class ChunkPos const&                    chunkPos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class HashedString const&                biomeTag
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(uint seed, ::StructureFeatureType structureFeatureType);

    MCAPI void dtor$();

    MCAPI bool getNearestGeneratedFeature$(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    MCAPI class StructureStart* getStructureAt$(int cellX, int cellY, int cellZ);

    MCAPI void initMobSpawnTypes$(class HardcodedSpawnAreaRegistry&);

    MCAPI bool shouldAddHardcodedSpawnAreas$() const;

    MCAPI bool shouldPostProcessMobs$() const;

    // NOLINTEND
};
