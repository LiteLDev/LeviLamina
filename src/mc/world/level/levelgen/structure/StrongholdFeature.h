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

class StrongholdFeature : public ::StructureFeature {
public:
    // StrongholdFeature inner types declare
    // clang-format off
    struct StrongholdResult;
    // clang-format on

    // StrongholdFeature inner types define
    struct StrongholdResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb304b0;
        ::ll::UntypedStorage<8, 8> mUnk65e98b;
        // NOLINTEND

    public:
        // prevent constructor by default
        StrongholdResult& operator=(StrongholdResult const&);
        StrongholdResult(StrongholdResult const&);
        StrongholdResult();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk97c3dc;
    ::ll::UntypedStorage<8, 24> mUnk4c1f2a;
    ::ll::UntypedStorage<8, 8>  mUnka0ac9e;
    ::ll::UntypedStorage<8, 80> mUnk97dbad;
    // NOLINTEND

public:
    // prevent constructor by default
    StrongholdFeature& operator=(StrongholdFeature const&);
    StrongholdFeature(StrongholdFeature const&);
    StrongholdFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

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
    createStructureStart(::Dimension& generator, ::BiomeSource const&, ::Random& random, ::ChunkPos const& cp, ::IPreliminarySurfaceProvider const&) /*override*/
        ;

    // vIndex: 0
    virtual ~StrongholdFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StrongholdFeature::StrongholdResult const _generateStronghold(uint levelSeed, ::ChunkPos const& cp);

    MCNAPI bool _getNearestStronghold(
        ::Dimension const& dimension,
        uint               levelSeed,
        ::BlockPos const&  origin,
        ::BlockPos&        pos,
        bool               mustBeInNewChunks
    );

    MCNAPI void generatePositions(
        ::Random&                            random,
        ::BiomeSource const&                 biomeSource,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockPos const& START_OFFSET();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );

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
    $createStructureStart(::Dimension& generator, ::BiomeSource const&, ::Random& random, ::ChunkPos const& cp, ::IPreliminarySurfaceProvider const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
