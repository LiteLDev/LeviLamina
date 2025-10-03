#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
class VillageFeature;
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
        ::ll::TypedStorage<1, 1, bool>       success;
        ::ll::TypedStorage<8, 8, ::ChunkPos> location;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mIsSpotSelected;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkPos>>   mSelectedChunks;
    ::ll::TypedStorage<8, 8, ::VillageFeature*>            mVillages;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mPositionMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

    // vIndex: 4
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& cp,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    // vIndex: 0
    virtual ~StrongholdFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StrongholdFeature::StrongholdResult const _generateStronghold(uint levelSeed, ::ChunkPos const& cp);

    MCAPI bool _getNearestStronghold(
        ::Dimension const& dimension,
        uint               levelSeed,
        ::BlockPos const&  origin,
        ::BlockPos&        pos,
        bool               mustBeInNewChunks
    );

    MCAPI void generatePositions(
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
    MCAPI static ::BlockPos const& START_OFFSET();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );

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
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& cp,
        ::IPreliminarySurfaceProvider const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
