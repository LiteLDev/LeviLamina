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
class Block;
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
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 262144, ::std::array<::Block const*, 32768>> blockBuffer;
        // NOLINTEND
    };

    using CellPos2d = ::DividedPos2d<8>;

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 3, 3, 33>;

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
    TheEndGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TheEndGenerator() /*override*/;

    virtual void loadChunk(::LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhoodIn) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;

    virtual void
    postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random) /*override*/;

    virtual void prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    ) /*override*/;

    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    virtual ::BlockPos findSpawnPosition() const /*override*/;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;

    virtual void
    decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TheEndGenerator(::Dimension& dimension, uint seed, ::Biome const* overrideBiome);

    MCAPI void _prepareHeights(::BlockVolume& box, ::ChunkPos const& chunkPos, ::std::vector<short>* ZXheights) const;

    MCAPI void buildSurfaces(::BlockVolume& box, ::ChunkPos const& chunkPos, ::LevelChunk& levelChunk);

    MCAPI ::Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;

    MCAPI float getIslandHeightValue(int chunkX, int chunkZ, int cellOffsetX, int cellOffsetZ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint seed, ::Biome const* overrideBiome);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadChunk(::LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    MCAPI bool $structurePostProcessChunk(::ChunkViewSource& neighborhoodIn);

    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);

    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);

    MCAPI void $prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    );

    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeSource const& $getBiomeSource() const;

    MCFOLD ::BlockPos $findSpawnPosition() const;

    MCFOLD ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCFOLD void $decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const;

    MCFOLD void
    $decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForChunkSource();

    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();
    // NOLINTEND
};
