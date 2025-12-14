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
// clang-format on

class RuinedPortalFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mNether;
    ::ll::TypedStorage<4, 4, int const>  mOverworldSpacing;
    ::ll::TypedStorage<4, 4, int const>  mOverworldMinSeparation;
    ::ll::TypedStorage<4, 4, int const>  mNetherSpacing;
    ::ll::TypedStorage<4, 4, int const>  mNetherMinSeparation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
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
        ::Dimension&         dimension,
        ::BiomeSource const& biomeSource,
        ::Random&,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& pos,
        uint              levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) /*override*/;

    virtual ~RuinedPortalFeature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
        ::Dimension&         dimension,
        ::BiomeSource const& biomeSource,
        ::Random&,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& pos,
        uint              levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
