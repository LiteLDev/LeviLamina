#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeSource;
class BlockPos;
class BlockSource;
class ChunkPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class LevelChunk;
class Random;
class StructureStart;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class StructureFeature {
public:
    // StructureFeature inner types define
    using StructureMap = ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::StructureStart>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mStructureFeatureType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::StructureStart>>> mCachedStructures;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                                    mCacheMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>                                      mVisitedPositions;
    ::ll::TypedStorage<4, 4, uint>                                                                   mRadius;
    ::ll::TypedStorage<4, 4, int>                                                                    mXScale;
    ::ll::TypedStorage<4, 4, int>                                                                    mZScale;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mCreateBlueprintsAndVisitedPositionsMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>   mBlueprintWaitVar;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>           mActiveBlueprintCreateCount;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>          mBlueprintsFinished;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureFeature();

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    // vIndex: 4
    virtual bool
    isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&) = 0;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart>
    createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&) = 0;

    // vIndex: 6
    virtual ::StructureStart* getStructureAt(int cellX, int cellY, int cellZ);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureFeature(uint seed, ::HashedString structureFeatureType);

    MCAPI void addFeature(
        ::Dimension&                         dimension,
        ::Random&                            random,
        ::ChunkPos const&                    cp,
        ::BiomeSource const&                 biomeSource,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI void addHardcodedSpawnAreas(::LevelChunk& lc);

    MCAPI ::BlockPos chunkStartAtSurfaceLevel(
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::ChunkPos                           pos,
        int                                  defaultYLevel
    );

    MCAPI void createBlueprints(
        ::Dimension&                         dimension,
        ::ChunkPos const&                    cp,
        ::BiomeSource const&                 biomeSource,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI void debugRender();

    MCAPI ::std::vector<::ChunkPos> findFarAwayStructures(::buffer_span<::ChunkPos> activeChunks, uint safetyBorder);

    MCAPI void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks, uint safetyBorder);

    MCAPI bool isInsideBoundingFeature(int cellX, int cellY, int cellZ);

    MCAPI bool postProcess(::BlockSource& region, ::Random& random, int chunkX, int chunkZ);

    MCAPI void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool findNearestFeaturePositionBySpacing(
        ::Dimension&                           dimension,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        ::StructureFeature&                    feature,
        ::std::optional<::HashedString> const& biomeTag,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            result,
        int                                    featureSpacing,
        int                                    minFeatureSeparation,
        int                                    randomSalt,
        bool                                   tiltedSpacing,
        int                                    maxSearchRadius,
        bool                                   mustBeInNewChunks
    );

    MCAPI static ::std::pair<::BlockPos const, ::Biome const*> getBiomeForFeatureGeneration(
        ::BiomeSource const&                 biomeSource,
        ::ChunkPos const&                    chunkPos,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI static ::ChunkPos getChunkPosInSpace(
        ::ChunkPos const& cp,
        ::Random&         random,
        uint              levelSeed,
        int               spacing,
        int               separation,
        int               salt,
        bool              tiltedSpacing
    );

    MCAPI static void setRandomSeedFor(::Random& result, int x, int z, int salt, uint levelSeed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, ::HashedString structureFeatureType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCAPI ::StructureStart* $getStructureAt(int cellX, int cellY, int cellZ);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
