#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/VolumeOf.h"
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlendedMultiNoiseBiomeProvider;
class BoundingBox;
class ChunkLocalNoiseCache;
class DimensionHeightRange;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
// clang-format on

class BiomeSource3d : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkd8b875;
    ::ll::UntypedStorage<2, 4>   mUnkdca619;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSource3d& operator=(BiomeSource3d const&);
    BiomeSource3d(BiomeSource3d const&);
    BiomeSource3d();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const
        /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale) const /*override*/;

    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;

    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const
        /*override*/;

    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;

    virtual ::BiomeSourceType const getType() const /*override*/;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    virtual ~BiomeSource3d() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeSource3d(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);

    MCNAPI ::ClientBlockPipeline::VolumeOf<::Biome const*>
    getBiomeVolumeToFill(::LevelChunk const& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);
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

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const& box, uint scale) const;

    MCNAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

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
