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
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const*) const /*override*/;

    virtual bool containsOnly(int allowed, int, int, int, ::gsl::span<::BiomeIdType const>) const /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const&) const
        /*override*/;

    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;

    virtual ::BiomeSourceType const getType() const /*override*/;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FixedBiomeSource(::Biome const& fixedBiome);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Biome const& fixedBiome);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const*) const;

    MCAPI bool $containsOnly(int allowed, int, int, int, ::gsl::span<::BiomeIdType const>) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const&) const;

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
