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
class Dimension;
class LevelChunk;
class LevelSeed64;
class NoodleCavifier;
class OreVeinifier;
class Random;
class SurfaceLevelCache;
class WorldGenCache;
class XoroshiroPositionalRandomFactory;
struct TerrainInfo;
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

    public:
        // prevent constructor by default
        Noises& operator=(Noises const&);
        Noises(Noises const&);
        Noises();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Noises(::OverworldGeneratorMultinoise::Noises&&);

        MCNAPI ~Noises();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::OverworldGeneratorMultinoise::Noises
        make(::XoroshiroPositionalRandomFactory const& randomFactory);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OverworldGeneratorMultinoise::Noises&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    // vIndex: 0
    virtual ~OverworldGeneratorMultinoise() /*override*/;

    // vIndex: 41
    virtual ::BiomeSource const& getBiomeSource() const /*override*/;

    // vIndex: 43
    virtual ::BlockPos findSpawnPosition() const /*override*/;

    // vIndex: 1
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;

    // vIndex: 49
    virtual int getLevelGenHeight() const /*override*/;

    // vIndex: 48
    virtual ::Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(::ChunkPos const& chunkPos) const /*override*/;

    // vIndex: 33
    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp) /*override*/;

    // vIndex: 54
    virtual ::PerlinSimplexNoise const& getSurfaceNoise() /*override*/;

    // vIndex: 55
    virtual ::std::unique_ptr<::PerlinSimplexNoise> const& getMaterialAdjNoise() const /*override*/;

    // vIndex: 47
    virtual void
    decorateWorldGenPostProcess(::Biome const&, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const
        /*override*/;

    // vIndex: 56
    virtual void _prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::WorldGenCache const&                                          worldGenCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights,
        int                                                             skipTopN
    ) /*override*/;

    // vIndex: 51
    virtual ::std::unique_ptr<::Aquifer> tryMakeAquifer(
        ::ChunkPos const&          chunkPos,
        ::SurfaceLevelCache const& surfaceLevelCache,
        short                      minHeight,
        short                      levelGenHeight,
        short                      seaLevel
    ) const /*override*/;

    // vIndex: 50
    virtual ::std::optional<::XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const
        /*override*/;

    // vIndex: 52
    virtual ::ChunkLocalNoiseCache createNoiseCache(::ChunkPos chunkPos) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldGeneratorMultinoise(::Dimension& dimension, ::LevelSeed64 seed, ::Biome const* biomeOverride);

    MCAPI ::TerrainInfo
    _attenuateOffsetAndFactor(::DividedPos2d<4> worldQuartPos, ::TerrainInfo defaultTerrainInfo) const;

    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(
        ::ChunkPos const&      chunkPos,
        ::WorldGenCache const& worldGenCache,
        ::NoodleCavifier*      noodleCavifier,
        ::OreVeinifier*        oreVeinifier
    ) const;

    MCAPI ::std::unique_ptr<::BiomeSource> _makeBiomeSource(
        ::XoroshiroPositionalRandomFactory const& biomeRegistry,
        ::BiomeRegistry const&                    overrideBiome,
        ::Biome const*
    );

    MCAPI ::OverworldGeneratorMultinoise::BlockGenerationResult const _updateNoiseAndGenerateBaseBlock(
        float                 noiseValue,
        ::BlockPos const&     worldPosition,
        short                 aquiferPtr,
        ::Aquifer*            shouldTickUpdate,
        bool                  chunkBlender,
        ::ChunkBlender const* stone,
        ::Block const&        oreVeinifier,
        ::OreVeinifier*
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::PerlinSimplexNoise> createMaterialAdjNoise(uint seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, ::LevelSeed64 seed, ::Biome const* biomeOverride);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BiomeSource const& $getBiomeSource() const;

    MCAPI ::BlockPos $findSpawnPosition() const;

    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;

    MCFOLD int $getLevelGenHeight() const;

    MCAPI ::Util::MultidimensionalArray<float, 5, 5, 41>
    $generateDensityCellsForChunk(::ChunkPos const& chunkPos) const;

    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);

    MCAPI ::PerlinSimplexNoise const& $getSurfaceNoise();

    MCAPI ::std::unique_ptr<::PerlinSimplexNoise> const& $getMaterialAdjNoise() const;

    MCAPI void
    $decorateWorldGenPostProcess(::Biome const&, ::LevelChunk& lc, ::BlockSource& source, ::Random& random) const;

    MCAPI void $_prepareHeights(
        ::BlockVolume&                                                  box,
        ::ChunkPos const&                                               chunkPos,
        ::WorldGenCache const&                                          worldGenCache,
        ::Aquifer*                                                      aquiferPtr,
        ::std::function<void(::BlockPos const&, ::Block const&, int)>&& tickUpdateFn,
        bool                                                            factorInBeardsAndShavers,
        ::std::vector<short>*                                           ZXheights,
        int                                                             skipTopN
    );

    MCAPI ::std::unique_ptr<::Aquifer> $tryMakeAquifer(
        ::ChunkPos const&          chunkPos,
        ::SurfaceLevelCache const& surfaceLevelCache,
        short                      minHeight,
        short                      levelGenHeight,
        short                      seaLevel
    ) const;

    MCAPI ::std::optional<::XoroshiroPositionalRandomFactory> $getXoroshiroPositionalRandomFactory() const;

    MCAPI ::ChunkLocalNoiseCache $createNoiseCache(::ChunkPos chunkPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCNAPI static void** $vftableForChunkSource();
    // NOLINTEND
};
