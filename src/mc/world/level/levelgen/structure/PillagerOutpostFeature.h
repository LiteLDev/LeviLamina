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

class PillagerOutpostFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                     OUTPOST_SPACING;
    ::ll::TypedStorage<4, 4, int const>                     MIN_OUTPOST_SEPARATION;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> mAllowedBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    PillagerOutpostFeature();

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

    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&
    ) /*override*/;

    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    virtual bool shouldPostProcessMobs() const /*override*/;

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& lc,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    virtual ~PillagerOutpostFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PillagerOutpostFeature(uint seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&
    );

    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& lc,
        ::IPreliminarySurfaceProvider const&
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
