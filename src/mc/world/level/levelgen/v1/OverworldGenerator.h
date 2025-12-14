#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/MultidimensionalArray.h"
#include "mc/util/Random.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/feature/CanyonFeature.h"
#include "mc/world/level/levelgen/feature/MonsterRoomFeature.h"
#include "mc/world/level/levelgen/feature/UnderwaterCanyonFeature.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Biome;
class BiomeArea;
class Block;
class BlockPos;
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class BlockVolumeTarget;
class BoundingBox;
class ChunkLocalNoiseCache;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class LevelChunk;
class PerlinSimplexNoise;
class SurfaceLevelCache;
class XoroshiroPositionalRandomFactory;
// clang-format on

class OverworldGenerator : public ::WorldGenerator {
public:
    // OverworldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // OverworldGenerator inner types define
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4096, ::std::array<float, 1024>>             buffer;
        ::ll::TypedStorage<4, 1024, ::std::array<float, 256>>              depthBuffer;
        ::ll::TypedStorage<4, 1024, ::std::array<float, 256>>              dataBuffer;
        ::ll::TypedStorage<8, 655360, ::std::array<::Block const*, 81920>> blockBuffer;
        ::ll::TypedStorage<8, 8, float*>                                   fi;
        ::ll::TypedStorage<8, 8, float*>                                   fis;
        ::ll::TypedStorage<8, 2576, ::Random>                              random;
        // NOLINTEND
    };

    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 41>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, float[9]>  mBiomeBlendKernel;
    ::ll::TypedStorage<1, 1, bool const> mIsLegacyWorld;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::
            InstancedThreadLocal<::OverworldGenerator::ThreadData, ::std::allocator<::OverworldGenerator::ThreadData>>>
                                                         generatorHelpersPool;
    ::ll::TypedStorage<8, 32, ::MonsterRoomFeature>      monsterRoomFeature;
    ::ll::TypedStorage<2, 16, ::CanyonFeature>           canyonFeature;
    ::ll::TypedStorage<2, 16, ::UnderwaterCanyonFeature> underwaterCanyonFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldGenerator() /*override*/;

    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhoodIn) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhoodIn) /*override*/;

    virtual ::Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(::ChunkPos const& chunkPos) const = 0;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    virtual void prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    ) /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    virtual int getLevelGenHeight() const = 0;

    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const = 0;

    virtual ::std::unique_ptr<::Aquifer>
    tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;

    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;

    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos) const;

    virtual ::PerlinSimplexNoise const& getSurfaceNoise() = 0;

    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const = 0;

    virtual void _prepareHeights(
        ::BlockVolume&,
        ::ChunkPos const&,
        ::ChunkLocalNoiseCache const&,
        ::Aquifer*,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&&,
        bool,
        ::std::vector<short>*
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldGenerator(::Dimension& dimension, bool isLegacyWorld);

    MCAPI void buildSurfaces(
        ::OverworldGenerator::ThreadData& thread,
        ::BlockVolume&                    blocks,
        ::LevelChunk&                     levelChunk,
        ::ChunkPos const&                 chunkPos,
        ::SurfaceLevelCache const&        surfaceLevelCache
    );

    MCAPI ::SurfaceLevelCache createSurfaceLevelCache(::ChunkPos chunkPos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _fixWaterAlongEdges(::LevelChunk const& lc, ::BlockSource& source, ::BlockTickingQueue& instaTickQueue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, bool isLegacyWorld);
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

    MCAPI bool $structurePostProcessChunk(::ChunkViewSource& neighborhoodIn);

    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhoodIn);

    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCAPI void $prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    );

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCFOLD ::std::unique_ptr<::Aquifer>
    $tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;

    MCFOLD void $decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const;

    MCAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForChunkSource();

    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();
    // NOLINTEND
};
