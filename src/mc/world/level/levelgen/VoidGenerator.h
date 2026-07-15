#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolumeTarget;
class BoundingBox;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class LevelChunk;
class PerlinSimplexNoise;
class Random;
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
    // prevent constructor by default
    VoidGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VoidGenerator() /*override*/ = default;

    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    virtual ::BlockPos findSpawnPosition() const /*override*/;

    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, ::std::vector<short>*, bool) /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const /*override*/;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const
        /*override*/;

    virtual void
    decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const
        /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
