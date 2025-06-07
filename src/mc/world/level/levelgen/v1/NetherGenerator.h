#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/util/Random.h"
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
class LevelChunk;
class PerlinNoise;
class PerlinSimplexNoise;
// clang-format on

class NetherGenerator : public ::WorldGenerator {
public:
    // NetherGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // NetherGenerator inner types define
    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 17>;

    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 2568, ::Random>                              random;
        ::ll::TypedStorage<8, 262144, ::std::array<::Block const*, 32768>> blockBuffer;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        lperlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        lperlinNoise2;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        perlinNoise1;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        perlinNoise2;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        scaleNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        depthNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> surfaceNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::
            InstancedThreadLocal<::NetherGenerator::ThreadData, ::std::allocator<::NetherGenerator::ThreadData>>>
                                                               generatorHelpersPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>> mBiomeSource;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherGenerator() /*override*/;

    // vIndex: 11
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 9
    virtual bool postProcess(::ChunkViewSource& neighborhood) /*override*/;

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

    // vIndex: 40
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    // vIndex: 41
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    // vIndex: 42
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    // vIndex: 43
    virtual ::BlockPos findSpawnPosition() const /*override*/;

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
    MCAPI NetherGenerator(::Dimension& dimension, uint seed, ::Biome const* biomeOverride);

    MCAPI void _prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        bool                  factorInBeardsAndShavers,
        ::std::vector<short>* ZXheights,
        int                   skipTopN
    );

    MCAPI void buildSurfaces(::BlockVolume& blocks, ::LevelChunk& levelChunk, ::ChunkPos const& chunkPos);

    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint seed, ::Biome const* biomeOverride);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI bool $postProcess(::ChunkViewSource& neighborhood);

    MCAPI void $prepareHeights(::BlockVolume& box, ::ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCAPI void $prepareAndComputeHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>& ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeSource const& $getBiomeSource() const;

    MCFOLD ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCAPI ::BlockPos $findSpawnPosition() const;

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
    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCNAPI static void** $vftableForChunkSource();
    // NOLINTEND
};
