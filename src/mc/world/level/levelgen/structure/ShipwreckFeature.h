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
class OceanMonumentFeature;
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class ShipwreckFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd45d35;
    ::ll::UntypedStorage<4, 4>  mUnk7f361c;
    ::ll::UntypedStorage<4, 4>  mUnk4ce55a;
    ::ll::UntypedStorage<8, 8>  mUnkc7588e;
    ::ll::UntypedStorage<8, 24> mUnk227c84;
    // NOLINTEND

public:
    // prevent constructor by default
    ShipwreckFeature& operator=(ShipwreckFeature const&);
    ShipwreckFeature(ShipwreckFeature const&);
    ShipwreckFeature();

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

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&         generator,
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    lc,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

    virtual ~ShipwreckFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShipwreckFeature(::OceanMonumentFeature& monument, uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OceanMonumentFeature& monument, uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

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
        ::Dimension&         generator,
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    lc,
        ::IPreliminarySurfaceProvider const&
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
