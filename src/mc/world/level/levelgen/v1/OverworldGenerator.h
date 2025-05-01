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
class WorldGenCache;
class XoroshiroPositionalRandomFactory;
// clang-format on

class OverworldGenerator : public ::WorldGenerator {
public:
    // OverworldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // OverworldGenerator inner types define
    using NoiseBuffer = ::Util::MultidimensionalArray<float, 5, 5, 41>;

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
        ::ll::TypedStorage<8, 2568, ::Random>                              random;
        // NOLINTEND
    };

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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OverworldGenerator() /*override*/;

    // vIndex: 11
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 9
    virtual bool postProcess(::ChunkViewSource& neighborhood) /*override*/;

    // vIndex: 48
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const& chunkPos
    ) const = 0;

    // vIndex: 42
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

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

    // vIndex: 49
    virtual int getLevelGenHeight() const = 0;

    // vIndex: 50
    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const = 0;

    // vIndex: 51
    virtual ::std::unique_ptr<::Aquifer>
    tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;

    // vIndex: 46
    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;

    // vIndex: 52
    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos chunkPos) const;

    // vIndex: 53
    virtual ::WorldGenCache createWorldGenCache(::ChunkPos chunkPos) const;

    // vIndex: 54
    virtual ::PerlinSimplexNoise const& getSurfaceNoise() = 0;

    // vIndex: 55
    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const = 0;

    // vIndex: 56
    virtual void _prepareHeights(
        ::BlockVolume&,
        ::ChunkPos const&,
        ::WorldGenCache const&,
        ::Aquifer*,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&&,
        bool,
        ::std::vector<short>*,
        int
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OverworldGenerator(::Dimension& dimension, bool isLegacyWorld);

    MCNAPI void buildSurfaces(
        ::OverworldGenerator::ThreadData& thread,
        ::BlockVolume&                    blocks,
        ::LevelChunk&                     levelChunk,
        ::ChunkPos const&                 chunkPos,
        ::SurfaceLevelCache const&        surfaceLevelCache
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _fixWaterAlongEdges(::LevelChunk const& lc, ::BlockSource& source, ::BlockTickingQueue& instaTickQueue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension& dimension, bool isLegacyWorld);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCNAPI bool $postProcess(::ChunkViewSource& neighborhood);

    MCNAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCNAPI void $prepareHeights(::BlockVolume& box, ::ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCNAPI void $prepareAndComputeHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>& ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCNAPI ::std::unique_ptr<::Aquifer>
    $tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const;

    MCNAPI void $decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const;

    MCNAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos chunkPos) const;

    MCNAPI ::WorldGenCache $createWorldGenCache(::ChunkPos chunkPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForChunkSource();

    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();
    // NOLINTEND
};
