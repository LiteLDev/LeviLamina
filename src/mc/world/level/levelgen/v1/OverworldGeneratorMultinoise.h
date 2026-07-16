#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/AquiferNoises.h"
#include "mc/world/level/levelgen/synth/CavifierNoises.h"
#include "mc/world/level/levelgen/synth/LegacyBlendedNoise.h"
#include "mc/world/level/levelgen/synth/OverworldNoises3d.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"
#include "mc/world/level/levelgen/v1/DepthBasedBlockSupplier.h"
#include "mc/world/level/levelgen/v1/NoodleCavifierNoises.h"
#include "mc/world/level/levelgen/v1/OreVeinifierNoises.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class BaseGameVersion;
class Biome;
class BiomeRegistry;
class BiomeSource;
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class Cavifier;
class ChunkBlender;
class ChunkBlenderFactory;
class ChunkLocalNoiseCache;
class ChunkPos;
class ChunkSource;
class Dimension;
class DimensionHeightRange;
class Experiments;
class LevelChunk;
class LevelSeed64;
class Random;
class SurfaceLevelCache;
class XoroshiroPositionalRandomFactory;
// clang-format on

class OverworldGeneratorMultinoise : public ::OverworldGenerator {
public:
    // OverworldGeneratorMultinoise inner types declare
    // clang-format off
    struct BlockGenerationResult;
    struct Noises;
    // clang-format on

    // OverworldGeneratorMultinoise inner types define
    struct BlockGenerationResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> block;
        ::ll::TypedStorage<1, 1, bool const>     shouldTickUpdate;
        // NOLINTEND
    };

    struct Noises {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 120, ::LegacyBlendedNoise const>     mTerrainNoise;
        ::ll::TypedStorage<8, 896, ::CavifierNoises const>         mCavifierNoises;
        ::ll::TypedStorage<8, 248, ::AquiferNoises const>          mAquiferNoises;
        ::ll::TypedStorage<8, 224, ::NoodleCavifierNoises const>   mNoodleCavifierNoises;
        ::ll::TypedStorage<8, 248, ::OreVeinifierNoises const>     mOreVeinifierNoises;
        ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>      mBlendNoise;
        ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>      mSurfaceNoise;
        ::ll::TypedStorage<8, 904, ::OverworldNoises3d const>      mCommonNoise;
        ::ll::TypedStorage<8, 32, ::DepthBasedBlockSupplier const> mDeepslateSupplier;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2760, ::std::optional<::OverworldGeneratorMultinoise::Noises>> mNoises;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource>>                           mBiomeSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Cavifier>>                              mCavifier;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>>                    mMaterialAdjNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBlender>>                          mFixedChunkBlender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBlenderFactory>>                   mChunkBlenderFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGeneratorMultinoise();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldGeneratorMultinoise() /*override*/ = default;

    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    virtual ::BlockPos findSpawnPosition() const /*override*/;

    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const /*override*/;

    virtual int getLevelGenHeight() const /*override*/;

    virtual ::Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(::ChunkPos const&) const
        /*override*/;

    virtual void propagateCombinedChunkSource(::ChunkSource*) /*override*/;

    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp) /*override*/;

    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos) const /*override*/;

    virtual ::PerlinSimplexNoise const& getSurfaceNoise() /*override*/;

    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const /*override*/;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const
        /*override*/;

    virtual void _prepareHeights(
        ::BlockVolume&,
        ::ChunkPos const&,
        ::ChunkLocalNoiseCache const&,
        ::Aquifer*,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&&,
        bool,
        ::std::vector<short>*
    ) /*override*/;

    virtual ::std::unique_ptr<::Aquifer>
    tryMakeAquifer(::ChunkPos const&, ::SurfaceLevelCache const&, short, short, short) const /*override*/;

    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const
        /*override*/;

    virtual void _clearBlendingCache() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldGeneratorMultinoise(::Dimension& dimension, ::LevelSeed64 seed, ::Biome const* biomeOverride);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::BiomeSource> makeBiomeSource(
        ::XoroshiroPositionalRandomFactory const& random,
        ::BiomeRegistry const&                    biomeRegistry,
        ::Biome const*                            overrideBiome,
        ::BaseGameVersion const&                  baseGameVersion,
        ::Experiments const&                      experiments,
        ::OverworldNoises3d const&                overworldNoises,
        ::ChunkBlenderFactory&                    chunkBlenderFactory,
        ::DimensionHeightRange const&             heightRange
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, ::LevelSeed64 seed, ::Biome const* biomeOverride);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
