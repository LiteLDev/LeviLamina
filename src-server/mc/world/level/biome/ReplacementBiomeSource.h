#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/levelgen/synth/SimplexNoise.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource3d;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
class XoroshiroPositionalRandomFactory;
struct BiomeIdType;
struct BiomeReplacement;
struct GetBiomeOptions;
// clang-format on

class ReplacementBiomeSource : public ::BiomeSource {
public:
    // ReplacementBiomeSource inner types declare
    // clang-format off
    struct BiomeReplacementIndex;
    struct BiomeReplacementNoise;
    // clang-format on

    // ReplacementBiomeSource inner types define
    struct BiomeReplacementNoise {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 2060, ::SimplexNoise const> mNoise;
        ::ll::TypedStorage<4, 4, float>                   mAmount;
        ::ll::TypedStorage<4, 4, float>                   mNoiseFrequencyScale;
        // NOLINTEND
    };

    struct BiomeReplacementIndex {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Biome const*>> mBiome;
        ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mNoiseIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeSource3d>> mWrappedBiomeSource;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::BiomeIdType, ::std::vector<::ReplacementBiomeSource::BiomeReplacementIndex>>>
        mVanillaBiomeToReplacementNoiseIndex;
    ::ll::
        TypedStorage<8, 40, ::brstd::flat_set<::BiomeIdType, ::std::less<::BiomeIdType>, ::std::vector<::BiomeIdType>>>
            mFullyReplacedBiomeIds;
    ::ll::TypedStorage<8, 40, ::brstd::flat_set<uint64, ::std::less<uint64>, ::std::vector<uint64>>>
        mFullyReplacedBiomeNameHashes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ReplacementBiomeSource::BiomeReplacementNoise>> mNoiseEntries;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplacementBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const
        /*override*/;

    // vIndex: 3
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    // vIndex: 2
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;

    // vIndex: 4
    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const
        /*override*/;

    // vIndex: 7
    virtual ::Biome const* getBiome(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 6
    virtual ::Biome const* getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    // vIndex: 5
    virtual ::Biome const* getBiome(int blockX, int blockY, int blockZ) const /*override*/;

    // vIndex: 8
    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    // vIndex: 9
    virtual bool hasBiomeByNameHash(uint64 hash) const /*override*/;

    // vIndex: 10
    virtual ::BiomeSourceType const getType() const /*override*/;

    // vIndex: 0
    virtual ~ReplacementBiomeSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReplacementBiomeSource(
        ::XoroshiroPositionalRandomFactory const& random,
        ::std::vector<::BiomeReplacement> const&  biomeReplacements,
        ::std::unique_ptr<::BiomeSource3d>        wrappedBiomeSource
    );

    MCAPI bool fullyReplacesBiomeById(::BiomeIdType id) const;

    MCAPI ::Biome const* tryReplace(::Biome const* targetBiome, ::BlockPos const& position) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::XoroshiroPositionalRandomFactory const& random,
        ::std::vector<::BiomeReplacement> const&  biomeReplacements,
        ::std::unique_ptr<::BiomeSource3d>        wrappedBiomeSource
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;

    MCFOLD ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

    MCAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const;

    MCFOLD ::Biome const* $getBiome(::BlockPos const& blockPos) const;

    MCAPI ::Biome const* $getBiome(::GetBiomeOptions const& getBiomeOptions) const;

    MCFOLD ::Biome const* $getBiome(int blockX, int blockY, int blockZ) const;

    MCAPI bool $hasBiomeById(::BiomeIdType id) const;

    MCAPI bool $hasBiomeByNameHash(uint64 hash) const;

    MCFOLD ::BiomeSourceType const $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
