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

class AncientCityFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> mAllowedBiomes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isFeatureChunk(
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    chunkPos,
        uint                 levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) /*override*/;

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

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension& dimension,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& chunkPos,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    virtual ~AncientCityFeature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isFeatureChunk(
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    chunkPos,
        uint                 levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    );

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

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension& dimension,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& chunkPos,
        ::IPreliminarySurfaceProvider const&
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
