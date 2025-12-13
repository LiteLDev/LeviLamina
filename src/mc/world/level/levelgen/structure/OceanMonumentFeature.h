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
struct BiomeIdType;
// clang-format on

class OceanMonumentFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2ae599;
    ::ll::UntypedStorage<4, 4>  mUnke06b25;
    ::ll::UntypedStorage<8, 24> mUnk65d813;
    ::ll::UntypedStorage<8, 24> mUnk43c5e6;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMonumentFeature& operator=(OceanMonumentFeature const&);
    OceanMonumentFeature(OceanMonumentFeature const&);
    OceanMonumentFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&
    ) /*override*/;

    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    virtual bool shouldPostProcessMobs() const /*override*/;

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& lc,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    virtual ~OceanMonumentFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OceanMonumentFeature(uint seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed);
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
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&
    );

    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& lc,
        ::IPreliminarySurfaceProvider const&
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
