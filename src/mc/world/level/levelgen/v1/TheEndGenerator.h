#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

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
class ChunkViewSource;
class Dimension;
class FixedBiomeSource;
class LevelChunk;
class PerlinNoise;
class PerlinSimplexNoise;
class Random;
class SimplexNoise;
// clang-format on

class TheEndGenerator : public ::WorldGenerator {
public:
    // TheEndGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // TheEndGenerator inner types define
    using CellPos2d = ::DividedPos2d<8>;

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 3, 3, 33>;

    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 262144> mUnk420483;
        // NOLINTEND

    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mLPerlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mLPerlinNoise2;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mPerlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>       mIslandNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::
            InstancedThreadLocal<::TheEndGenerator::ThreadData, ::std::allocator<::TheEndGenerator::ThreadData>>>
                                                                    generatorHelpersPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FixedBiomeSource>> mBiomeSource;
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndGenerator& operator=(TheEndGenerator const&);
    TheEndGenerator(TheEndGenerator const&);
    TheEndGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TheEndGenerator() /*override*/ = default;

    // vIndex: 11
    virtual void loadChunk(::LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 9
    virtual bool postProcess(::ChunkViewSource& neighborhood) /*override*/;

    // vIndex: 13
    virtual void
    postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random) /*override*/;

    // vIndex: 38
    virtual void
    prepareHeights(::BlockVolume& box, ::ChunkPos const& chunkPos, bool factorInBeardsAndShavers) /*override*/;

    // vIndex: 39
    virtual void prepareAndComputeHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>& ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    ) /*override*/;

    // vIndex: 1
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;

    // vIndex: 40
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    // vIndex: 41
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    // vIndex: 43
    virtual ::BlockPos findSpawnPosition() const /*override*/;

    // vIndex: 42
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    // vIndex: 46
    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;

    // vIndex: 47
    virtual void
    decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TheEndGenerator(::Dimension& dimension, uint seed, ::Biome const* overrideBiome);

    MCAPI void _prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        bool                  factorInBeardsAndShavers,
        ::std::vector<short>* ZXheights,
        int                   skipTopN
    );

    MCAPI ::Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;

    MCAPI float getIslandHeightValue(int chunkX, int chunkZ, int cellOffsetX, int cellOffsetZ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isOutsideCentralIslandArea(::ChunkPos const& chunkPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint seed, ::Biome const* overrideBiome);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadChunk(::LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    MCAPI bool $postProcess(::ChunkViewSource& neighborhood);

    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    MCAPI void $prepareHeights(::BlockVolume& box, ::ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCAPI void $prepareAndComputeHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>& ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeSource const& $getBiomeSource() const;

    MCAPI ::BlockPos $findSpawnPosition() const;

    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCAPI void $decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const;

    MCAPI void
    $decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();
    // NOLINTEND
};
