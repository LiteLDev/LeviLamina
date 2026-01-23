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
class DensityCalculators;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
// clang-format on

class DensityFunctionBiomeSource : public ::BiomeSource {
public:
    // DensityFunctionBiomeSource inner types declare
    // clang-format off
    struct BiomeTarget;
    // clang-format on

    // DensityFunctionBiomeSource inner types define
    struct BiomeTarget {
    public:
        // BiomeTarget inner types declare
        // clang-format off
        struct ValueRange;
        // clang-format on

        // BiomeTarget inner types define
        struct ValueRange {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, float> mMin;
            ::ll::TypedStorage<4, 4, float> mMax;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Biome const*>>                                       mBiome;
        ::ll::TypedStorage<8, 24, ::std::vector<::DensityFunctionBiomeSource::BiomeTarget::ValueRange>> mRanges;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DensityCalculators>>                      mDensityCalculators;
    ::ll::TypedStorage<8, 24, ::std::vector<::DensityFunctionBiomeSource::BiomeTarget>> mBiomeTargets;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DensityFunctionBiomeSource() /*override*/ = default;

    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const /*override*/;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const>) const /*override*/;

    virtual bool hasBiomeById(::BiomeIdType) const /*override*/;

    virtual bool hasBiomeByNameHash(::BiomeHashType) const /*override*/;

    virtual ::BiomeSourceType const getType() const /*override*/;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
