#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/BeardKernel.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Biome;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class ChunkLocalNoiseCache;
class ChunkPos;
class Dimension;
class LevelChunk;
class PerlinNoise;
class PerlinSimplexNoise;
class Random;
class XoroshiroPositionalRandomFactory;
// clang-format on

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    // OverworldGenerator2d inner types define
    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 41>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        minLimitPerlinNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        maxLimitPerlinNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        mainPerlinNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> surfaceNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        scaleNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        depthNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>>        forestNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<1, 1, ::BeardKernel>                           mBeardKernel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>>        mBiomeSource;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerator2d();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    virtual ::BlockPos findSpawnPosition() const /*override*/;

    virtual int getLevelGenHeight() const /*override*/;

    virtual ::Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(::ChunkPos const& chunkPos) const /*override*/;

    virtual ::PerlinSimplexNoise const& getSurfaceNoise() /*override*/;

    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const /*override*/;

    virtual void
    decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;

    virtual void _prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::ChunkLocalNoiseCache const&                                   chunkLocalNoiseCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights
    ) /*override*/;

    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const
        /*override*/;

    virtual ~OverworldGenerator2d() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldGenerator2d(::Dimension& dimension, uint seed, bool isLegacyWorld, ::Biome const* biomeOverride);

    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint seed, bool isLegacyWorld, ::Biome const* biomeOverride);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BiomeSource const& $getBiomeSource() const;

    MCAPI ::BlockPos $findSpawnPosition() const;

    MCFOLD int $getLevelGenHeight() const;

    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41>
    $generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;

    MCAPI ::PerlinSimplexNoise const& $getSurfaceNoise();

    MCAPI ::std::unique_ptr<::PerlinSimplexNoise> const& $getMaterialAdjNoise() const;

    MCFOLD void
    $decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;

    MCAPI void $_prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::ChunkLocalNoiseCache const&                                   chunkLocalNoiseCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights
    );

    MCAPI ::std::optional<::XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForChunkSource();

    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();
    // NOLINTEND
};
