#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class BiomeSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeSource() = default;

    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const = 0;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const>) const = 0;

    virtual bool hasBiomeById(::BiomeIdType) const = 0;

    virtual bool hasBiomeByNameHash(::BiomeHashType) const = 0;

    virtual ::BiomeSourceType const getType() const = 0;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
