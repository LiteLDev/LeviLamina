#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/VolumeOf.h"
#include "mc/world/level/biome/biomeproviders/BlendedMultiNoiseBiomeProvider.h"
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
// clang-format on

class BiomeSource3d : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::BlendedMultiNoiseBiomeProvider> mBiomeProvider;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange const> mDimensionHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSource3d();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const /*override*/;

    // vIndex: 3
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale) const /*override*/;

    // vIndex: 2
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;

    // vIndex: 4
    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const /*override*/;

    // vIndex: 5
    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    // vIndex: 6
    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;

    // vIndex: 7
    virtual ::BiomeSourceType const getType() const /*override*/;

    // vIndex: 8
    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    // vIndex: 0
    virtual ~BiomeSource3d() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeSource3d(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);

    MCAPI ::ClientBlockPipeline::VolumeOf<::Biome const*> getBiomeVolumeToFill(::LevelChunk const& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const;

    MCFOLD ::BiomeArea $getBiomeArea(::BoundingBox const& box, uint scale) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

    MCAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const;

    MCAPI bool $hasBiomeById(::BiomeIdType id) const;

    MCAPI bool $hasBiomeByNameHash(::BiomeHashType hash) const;

    MCFOLD ::BiomeSourceType const $getType() const;

    MCAPI ::Biome const* $_getBiome(::GetBiomeOptions const& getBiomeOptions) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
