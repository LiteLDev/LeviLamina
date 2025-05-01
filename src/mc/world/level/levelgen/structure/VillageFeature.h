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

class VillageFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> allowedBiomes;
    ::ll::TypedStorage<4, 4, int>                    mTownSpacing;
    ::ll::TypedStorage<4, 4, int>                    mMinTownSeparation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool
    isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&) /*override*/
        ;

    // vIndex: 3
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    chunkPos,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) /*override*/;

    // vIndex: 0
    virtual ~VillageFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VillageFeature(uint seed, int townSpacing, int minTownSeparation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint seed, int townSpacing, int minTownSeparation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&);

    MCNAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCNAPI bool $shouldPostProcessMobs() const;

    MCNAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    chunkPos,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
