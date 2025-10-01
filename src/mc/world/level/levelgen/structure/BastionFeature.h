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
struct BiomeIdType;
// clang-format on

class BastionFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk33148d;
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
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

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

    // vIndex: 5
    virtual bool isFeatureChunk(
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    chunkPos,
        uint                 levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) /*override*/;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& chunkPos,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    // vIndex: 0
    virtual ~BastionFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BastionFeature(uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    chunkPos,
        uint                 levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    );

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& chunkPos,
        ::IPreliminarySurfaceProvider const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
