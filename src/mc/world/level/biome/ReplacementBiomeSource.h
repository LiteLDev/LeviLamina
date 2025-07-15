#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
class XoroshiroPositionalRandomFactory;
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
        ::ll::UntypedStorage<4, 2060> mUnka5c5f2;
        ::ll::UntypedStorage<4, 4>    mUnk676c16;
        ::ll::UntypedStorage<4, 4>    mUnkce81bd;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeReplacementNoise& operator=(BiomeReplacementNoise const&);
        BiomeReplacementNoise(BiomeReplacementNoise const&);
        BiomeReplacementNoise();
    };

    struct BiomeReplacementIndex {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk13891a;
        ::ll::UntypedStorage<8, 16> mUnk719d7c;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeReplacementIndex& operator=(BiomeReplacementIndex const&);
        BiomeReplacementIndex(BiomeReplacementIndex const&);
        BiomeReplacementIndex();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk659304;
    ::ll::UntypedStorage<8, 64> mUnkf3598e;
    ::ll::UntypedStorage<8, 40> mUnk885cf9;
    ::ll::UntypedStorage<8, 40> mUnkb07982;
    ::ll::UntypedStorage<8, 24> mUnk908bc6;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplacementBiomeSource& operator=(ReplacementBiomeSource const&);
    ReplacementBiomeSource(ReplacementBiomeSource const&);
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
    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<uint64 const> allowed) const /*override*/;

    // vIndex: 7
    virtual ::Biome const* getBiome(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 6
    virtual ::Biome const* getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    // vIndex: 5
    virtual ::Biome const* getBiome(int blockX, int blockY, int blockZ) const /*override*/;

    // vIndex: 8
    virtual bool hasBiomeById(ushort id) const /*override*/;

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
    MCNAPI ReplacementBiomeSource(
        ::XoroshiroPositionalRandomFactory const& random,
        ::std::vector<::BiomeReplacement> const&  biomeReplacements,
        ::std::unique_ptr<::BiomeSource>          wrappedBiomeSource
    );

    MCNAPI bool fullyReplacesBiomeByNameHash(uint64 hash) const;

    MCNAPI ::Biome const* tryReplace(::Biome const* targetBiome, ::BlockPos const& position) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::XoroshiroPositionalRandomFactory const& random,
        ::std::vector<::BiomeReplacement> const&  biomeReplacements,
        ::std::unique_ptr<::BiomeSource>          wrappedBiomeSource
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCNAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

    MCNAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<uint64 const> allowed) const;

    MCNAPI ::Biome const* $getBiome(::BlockPos const& blockPos) const;

    MCNAPI ::Biome const* $getBiome(::GetBiomeOptions const& getBiomeOptions) const;

    MCNAPI ::Biome const* $getBiome(int blockX, int blockY, int blockZ) const;

    MCNAPI bool $hasBiomeById(ushort id) const;

    MCNAPI bool $hasBiomeByNameHash(uint64 hash) const;

    MCNAPI ::BiomeSourceType const $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
