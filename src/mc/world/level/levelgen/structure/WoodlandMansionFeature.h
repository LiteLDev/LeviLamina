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

class WoodlandMansionFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkab848b;
    ::ll::UntypedStorage<4, 4>  mUnk7a5b05;
    ::ll::UntypedStorage<8, 24> mUnkf680af;
    // NOLINTEND

public:
    // prevent constructor by default
    WoodlandMansionFeature& operator=(WoodlandMansionFeature const&);
    WoodlandMansionFeature(WoodlandMansionFeature const&);
    WoodlandMansionFeature();

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

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 4
    virtual bool
    isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&) /*override*/
        ;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart>
    createStructureStart(::Dimension& dimension, ::BiomeSource const&, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&) /*override*/
        ;

    // vIndex: 0
    virtual ~WoodlandMansionFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WoodlandMansionFeature(uint seed);
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

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI bool
    $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&);

    MCAPI ::std::unique_ptr<::StructureStart>
    $createStructureStart(::Dimension& dimension, ::BiomeSource const&, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
