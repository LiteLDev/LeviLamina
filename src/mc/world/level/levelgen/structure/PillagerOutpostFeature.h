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

class PillagerOutpostFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2efe6c;
    ::ll::UntypedStorage<4, 4>  mUnk52e76e;
    ::ll::UntypedStorage<8, 24> mUnke03df7;
    // NOLINTEND

public:
    // prevent constructor by default
    PillagerOutpostFeature& operator=(PillagerOutpostFeature const&);
    PillagerOutpostFeature(PillagerOutpostFeature const&);
    PillagerOutpostFeature();

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

    // vIndex: 4
    virtual bool
    isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&) /*override*/
        ;

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart>
    createStructureStart(::Dimension& generator, ::BiomeSource const&, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&) /*override*/
        ;

    // vIndex: 0
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
    // destructor thunk
    // NOLINTBEGIN

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

    MCAPI bool
    $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&);

    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI ::std::unique_ptr<::StructureStart>
    $createStructureStart(::Dimension& generator, ::BiomeSource const&, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
