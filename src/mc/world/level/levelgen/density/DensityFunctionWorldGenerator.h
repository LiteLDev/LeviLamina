#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/util/Random.h"
#include "mc/util/random/XoroshiroRandom.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

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
class LevelChunk;
// clang-format on

class DensityFunctionWorldGenerator : public ::WorldGenerator {
public:
    // DensityFunctionWorldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // DensityFunctionWorldGenerator inner types define
    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 2576, ::Random> random;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<
            ::DensityFunctionWorldGenerator::ThreadData,
            ::std::allocator<::DensityFunctionWorldGenerator::ThreadData>>>
                                                                      generatorHelpersPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>>        mBiomeSource;
    ::ll::TypedStorage<8, 32, ::DensityCalculators>                   mDensityCalculators;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>>         mFillBlock;
    ::ll::TypedStorage<8, 2576, ::Random>                             mMaterialAdjRandom;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mMaterialAdjNoise;
    ::ll::TypedStorage<8, 64, ::XoroshiroRandom>                      mSurfaceRandom;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>                   mSurfaceNoise;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DensityFunctionWorldGenerator() /*override*/ = default;

    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    virtual bool structurePostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual bool decorationPostProcessChunk(::ChunkViewSource&) /*override*/;

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, ::std::vector<short>*, bool) /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const /*override*/;

    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const /*override*/;

    virtual ::BlockPos findSpawnPosition() const /*override*/;

    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const /*override*/;

    virtual void
    decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const
        /*override*/;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
