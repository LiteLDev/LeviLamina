#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct GetBiomeOptions;
// clang-format on

class BiomeSource {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeSource() = default;

    // vIndex: 1
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const&) const = 0;

    // vIndex: 3
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;

    // vIndex: 2
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const = 0;

    // vIndex: 4
    virtual bool containsOnly(int, int, int, int, ::gsl::span<uint64 const>) const = 0;

    // vIndex: 7
    virtual ::Biome const* getBiome(::BlockPos const&) const = 0;

    // vIndex: 6
    virtual ::Biome const* getBiome(::GetBiomeOptions const&) const = 0;

    // vIndex: 5
    virtual ::Biome const* getBiome(int, int, int) const = 0;

    // vIndex: 8
    virtual bool has(uint64) const = 0;

    // vIndex: 9
    virtual bool hasByHashId(uint64) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
