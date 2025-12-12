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
    // vIndex: 0
    virtual ~BiomeSource() = default;

    // vIndex: 1
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const = 0;

    // vIndex: 3
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;

    // vIndex: 2
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const = 0;

    // vIndex: 4
    virtual bool containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const>) const = 0;

    // vIndex: 5
    virtual bool hasBiomeById(::BiomeIdType) const = 0;

    // vIndex: 6
    virtual bool hasBiomeByNameHash(::BiomeHashType) const = 0;

    // vIndex: 7
    virtual ::BiomeSourceType const getType() const = 0;

    // vIndex: 8
    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
