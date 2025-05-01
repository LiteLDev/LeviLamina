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

class BuriedTreasureFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1183a0;
    ::ll::UntypedStorage<4, 4>  mUnk111efd;
    ::ll::UntypedStorage<8, 24> mUnk6c25e8;
    // NOLINTEND

public:
    // prevent constructor by default
    BuriedTreasureFeature& operator=(BuriedTreasureFeature const&);
    BuriedTreasureFeature(BuriedTreasureFeature const&);
    BuriedTreasureFeature();

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

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart>
    createStructureStart(::Dimension& generator, ::BiomeSource const&, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&) /*override*/
        ;

    // vIndex: 4
    virtual bool
    isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& pos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&) /*override*/
        ;

    // vIndex: 0
    virtual ~BuriedTreasureFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BuriedTreasureFeature(uint seed);
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

    MCNAPI ::std::unique_ptr<::StructureStart>
    $createStructureStart(::Dimension& generator, ::BiomeSource const&, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&);

    MCNAPI bool
    $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& pos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
