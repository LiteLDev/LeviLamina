#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"

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
struct BiomeHashType;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5d4fd5;
    ::ll::UntypedStorage<8, 64> mUnkfe4142;
    ::ll::UntypedStorage<8, 40> mUnk5890e1;
    ::ll::UntypedStorage<8, 40> mUnk6ec4f8;
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
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const
        /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;

    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const
        /*override*/;

    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;

    virtual ::BiomeSourceType const getType() const /*override*/;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    virtual ~ReplacementBiomeSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReplacementBiomeSource(
        ::XoroshiroPositionalRandomFactory const& random,
        ::std::vector<::BiomeReplacement> const&  biomeReplacements,
        ::std::unique_ptr<::BiomeSource3d>        wrappedBiomeSource
    );

    MCNAPI bool fullyReplacesBiomeById(::BiomeIdType id) const;

    MCNAPI bool fullyReplacesBiomeByNameHash(::BiomeHashType hash) const;

    MCNAPI ::Biome const* tryReplace(::Biome const* targetBiome, ::BlockPos const& position) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::XoroshiroPositionalRandomFactory const& random,
        ::std::vector<::BiomeReplacement> const&  biomeReplacements,
        ::std::unique_ptr<::BiomeSource3d>        wrappedBiomeSource
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
    MCNAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCNAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

    MCNAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const;

    MCNAPI bool $hasBiomeById(::BiomeIdType id) const;

    MCNAPI bool $hasBiomeByNameHash(::BiomeHashType hash) const;

    MCNAPI ::BiomeSourceType const $getType() const;

    MCNAPI ::Biome const* $_getBiome(::GetBiomeOptions const& getBiomeOptions) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
