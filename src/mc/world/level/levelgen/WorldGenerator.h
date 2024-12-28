#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
class BlockPos;
class BlockSource;
class BlockVolume;
class BlockVolumeTarget;
class BoundingBox;
class ChunkPos;
class Dimension;
class HashedString;
class LevelChunk;
class Random;
class StructureFeatureRegistry;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class WorldGenerator : public ::ChunkSource, public ::IPreliminarySurfaceProvider {
public:
    // WorldGenerator inner types declare
    // clang-format off
    struct BlockVolumeDimensions;
    // clang-format on

    // WorldGenerator inner types define
    struct BlockVolumeDimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mWidth;
        ::ll::TypedStorage<4, 4, uint> mDepth;
        ::ll::TypedStorage<4, 4, uint> mHeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockVolumeDimensions& operator=(BlockVolumeDimensions const&);
        BlockVolumeDimensions(BlockVolumeDimensions const&);
        BlockVolumeDimensions();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureFeatureRegistry>> mStructureFeatureRegistry;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                  mCreateStructuresAndVisitedPositionsMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>                    mStructureInstanceWaitVar;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                            mActiveStructureInstanceCreateCount;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>             mVisitedPositions;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenerator& operator=(WorldGenerator const&);
    WorldGenerator(WorldGenerator const&);
    WorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenerator() /*override*/;

    // vIndex: 34
    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos);

    // vIndex: 35
    virtual bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;

    // vIndex: 36
    virtual bool findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    );

    // vIndex: 37
    virtual void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks);

    // vIndex: 38
    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, bool) = 0;

    // vIndex: 39
    virtual void prepareAndComputeHeights(::BlockVolume&, ::ChunkPos const&, ::std::vector<short>&, bool, int) = 0;

    // vIndex: 40
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;

    // vIndex: 41
    virtual ::BiomeSource const& getBiomeSource() const = 0;

    // vIndex: 42
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const = 0;

    // vIndex: 43
    virtual ::BlockPos findSpawnPosition() const = 0;

    // vIndex: 44
    virtual void addHardcodedSpawnAreas(::LevelChunk& lc);

    // vIndex: 13
    virtual void
    postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random) /*override*/;

    // vIndex: 12
    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const /*override*/;

    // vIndex: 1
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const /*override*/;

    // vIndex: 45
    virtual void debugRender();

    // vIndex: 46
    virtual void
    decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&)
        const = 0;

    // vIndex: 47
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldGenerator(::Dimension& dimension);

    MCAPI
    WorldGenerator(::Dimension& dimension, ::std::unique_ptr<::StructureFeatureRegistry> structureFeatureRegistry);

    MCAPI ::std::vector<short> computeChunkHeightMap(::ChunkPos const& pos);

    MCAPI ::StructureFeatureRegistry& getStructureFeatureRegistry() const;

    MCAPI void postProcessStructureFeatures(::BlockSource& region, ::Random& random, int chunkX, int chunkZ);

    MCAPI void postProcessStructures(::BlockSource& region, ::Random& random, int chunkX, int chunkZ);

    MCAPI void preProcessStructures(::Dimension& dimension, ::ChunkPos const& cp, ::BiomeSource const& biomeSource);

    MCAPI void prepareStructureFeatureBlueprints(
        ::Dimension&                         dimension,
        ::ChunkPos const&                    cp,
        ::BiomeSource const&                 biomeSource,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceProvider
    );

    MCAPI void waitForStructures();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& TICKING_QUEUE_PASS_LIMIT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension);

    MCAPI void* $ctor(::Dimension& dimension, ::std::unique_ptr<::StructureFeatureRegistry> structureFeatureRegistry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HashedString $findStructureFeatureTypeAt(::BlockPos const& pos);

    MCAPI bool $isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;

    MCAPI bool $findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    );

    MCAPI void $garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks);

    MCAPI void $addHardcodedSpawnAreas(::LevelChunk& lc);

    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    MCAPI void $debugRender();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCAPI static void** $vftableForChunkSource();
    // NOLINTEND
};
