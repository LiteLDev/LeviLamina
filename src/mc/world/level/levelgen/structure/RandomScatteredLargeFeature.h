#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class ChunkPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class RandomScatteredLargeFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> mAllowedBiomes;
    ::ll::TypedStorage<4, 4, int>                           mSpacing;
    ::ll::TypedStorage<4, 4, int>                           mMinSeparation;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomScatteredLargeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    virtual bool shouldPostProcessMobs() const /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        uint,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) /*override*/;

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&,
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RandomScatteredLargeFeature(uint seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
