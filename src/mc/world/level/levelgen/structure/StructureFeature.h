#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class BlockSource;
class BoundingBox;
class Dimension;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
struct BiomeIdType;
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
    // prevent constructor by default
    StructureFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureFeature();

    virtual bool shouldAddHardcodedSpawnAreas() const;

    virtual bool shouldPostProcessMobs() const;

    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const;

    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    virtual bool isFeatureChunk(
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        uint,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) = 0;

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&,
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        ::IPreliminarySurfaceProvider const&
    ) = 0;

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

    MCAPI void createBlueprints(
        ::Dimension&                         dimension,
        ::ChunkPos const&                    cp,
        ::BiomeSource const&                 biomeSource,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI ::std::vector<::ChunkPos> findFarAwayStructures(::buffer_span<::ChunkPos> activeChunks, uint safetyBorder);

    MCAPI void foreachIntersectingStructureStart(::BoundingBox const& bb, ::std::function<void(::StructureStart&)> fn);

    MCAPI void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks, uint safetyBorder);

    MCAPI bool isInsideBoundingFeature(int cellX, int cellY, int cellZ);

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

    MCAPI static ::ChunkPos getChunkPosInSpace(
        ::ChunkPos const& cp,
        ::Random&         random,
        uint              levelSeed,
        int               spacing,
        int               separation,
        int               salt,
        bool              tiltedSpacing
    );
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

    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
