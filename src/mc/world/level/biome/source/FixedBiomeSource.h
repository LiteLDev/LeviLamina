#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"

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

class FixedBiomeSource : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const&> mFixedBiome;
    // NOLINTEND

public:
    explicit FixedBiomeSource(Biome const& biome) : mFixedBiome(biome) {}

public:
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const
        /*override*/;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const> allowed) const /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;

    virtual ::BiomeSourceType const getType() const /*override*/;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const /*override*/;

    virtual ~FixedBiomeSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const;

    MCAPI bool $containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const> allowed) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const;

    MCAPI bool $hasBiomeById(::BiomeIdType id) const;

    MCAPI bool $hasBiomeByNameHash(::BiomeHashType hash) const;

    MCFOLD ::BiomeSourceType const $getType() const;

    MCFOLD ::Biome const* $_getBiome(::GetBiomeOptions const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
