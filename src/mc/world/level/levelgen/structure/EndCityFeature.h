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

class EndCityFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    EndCityFeature& operator=(EndCityFeature const&);
    EndCityFeature(EndCityFeature const&);
    EndCityFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    virtual bool shouldPostProcessMobs() const /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const&                 random,
        ::Random&                            pos,
        ::ChunkPos const&                    levelSeed,
        uint                                 preliminarySurfaceLevel,
        ::IPreliminarySurfaceProvider const& dimension,
        ::Dimension const&
    ) /*override*/;

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&         dimension,
        ::BiomeSource const& random,
        ::Random&            pos,
        ::ChunkPos const&,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EndCityFeature(::Dimension& dimension, uint& seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, uint& seed);
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

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 random,
        ::Random&                            pos,
        ::ChunkPos const&                    levelSeed,
        uint                                 preliminarySurfaceLevel,
        ::IPreliminarySurfaceProvider const& dimension,
        ::Dimension const&
    );

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&         dimension,
        ::BiomeSource const& random,
        ::Random&            pos,
        ::ChunkPos const&,
        ::IPreliminarySurfaceProvider const&
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
