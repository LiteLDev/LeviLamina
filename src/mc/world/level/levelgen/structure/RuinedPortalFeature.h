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
    // prevent constructor by default
    RuinedPortalFeature();

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
        ::Random&            cp,
        ::ChunkPos const&    preliminarySurfaceLevel,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const& random,
        ::Random&            pos,
        ::ChunkPos const&    levelSeed,
        uint,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RuinedPortalFeature(uint seed, bool nether);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, bool nether);
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
        ::Random&            cp,
        ::ChunkPos const&    preliminarySurfaceLevel,
        ::IPreliminarySurfaceProvider const&
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const& random,
        ::Random&            pos,
        ::ChunkPos const&    levelSeed,
        uint,
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
