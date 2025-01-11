#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class ChunkLocalNoiseCache;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class LevelChunk;
class PerlinSimplexNoise;
class Random;
class WorldGenCache;
// clang-format on

class VoidGenerator : public ::WorldGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                          mBiome;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>>        mBiomeSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mNoise;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>          mPrototypeBlocks;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                          mPrototype;
    ::ll::TypedStorage<1, 1, bool>                                    mIsLegacyWorld;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VoidGenerator() /*override*/ = default;

    // vIndex: 41
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    // vIndex: 43
    virtual ::BlockPos findSpawnPosition() const /*override*/;

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

    // vIndex: 42
    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    // vIndex: 48
    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos chunkPos) const;

    // vIndex: 49
    virtual ::WorldGenCache createWorldGenCache(::ChunkPos chunkPos) const;

    // vIndex: 47
    virtual void
    decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;

    // vIndex: 46
    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VoidGenerator(::Dimension& dimension);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BiomeSource const& $getBiomeSource() const;

    MCFOLD ::BlockPos $findSpawnPosition() const;

    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCFOLD bool $postProcess(::ChunkViewSource& neighborhood);

    MCFOLD void $prepareHeights(::BlockVolume& box, ::ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCFOLD void $prepareAndComputeHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>& ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::WorldGenerator::BlockVolumeDimensions $getBlockVolumeDimensions() const;

    MCFOLD ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos chunkPos) const;

    MCAPI ::WorldGenCache $createWorldGenCache(::ChunkPos chunkPos) const;

    MCFOLD void
    $decorateWorldGenPostProcess(::Biome const& biome, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;

    MCFOLD void $decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();
    // NOLINTEND
};
