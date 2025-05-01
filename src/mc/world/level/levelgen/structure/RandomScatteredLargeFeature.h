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

class RandomScatteredLargeFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke39d38;
    ::ll::UntypedStorage<4, 4>  mUnk8f09d8;
    ::ll::UntypedStorage<4, 4>  mUnke95172;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomScatteredLargeFeature& operator=(RandomScatteredLargeFeature const&);
    RandomScatteredLargeFeature(RandomScatteredLargeFeature const&);
    RandomScatteredLargeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 4
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&                         dimension,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) /*override*/;

    // vIndex: 0
    virtual ~RandomScatteredLargeFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RandomScatteredLargeFeature(uint seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint seed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCNAPI bool $shouldAddHardcodedSpawnAreas() const;

    MCNAPI bool $shouldPostProcessMobs() const;

    MCNAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );

    MCNAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&                         dimension,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
