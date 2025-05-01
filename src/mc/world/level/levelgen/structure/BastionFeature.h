#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class BlockPos;
class ChunkPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
// clang-format on

class BastionFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk520c3b;
    // NOLINTEND

public:
    // prevent constructor by default
    BastionFeature& operator=(BastionFeature const&);
    BastionFeature(BastionFeature const&);
    BastionFeature();

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
    isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const&, ::Dimension const&) /*override*/
        ;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart>
    createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, ::IPreliminarySurfaceProvider const&) /*override*/
        ;

    // vIndex: 0
    virtual ~BastionFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BastionFeature(uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint seed, ::BaseGameVersion const& baseGameVersion);
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

    MCNAPI bool
    $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    MCNAPI bool $shouldPostProcessMobs() const;

    MCNAPI ::std::unique_ptr<::StructureStart>
    $createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, ::IPreliminarySurfaceProvider const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
