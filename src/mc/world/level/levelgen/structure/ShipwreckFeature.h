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
// clang-format on

class ShipwreckFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd45d35;
    ::ll::UntypedStorage<4, 4>  mUnk7f361c;
    ::ll::UntypedStorage<4, 4>  mUnk4ce55a;
    ::ll::UntypedStorage<8, 8>  mUnkc7588e;
    ::ll::UntypedStorage<8, 24> mUnkeb64e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ShipwreckFeature& operator=(ShipwreckFeature const&);
    ShipwreckFeature(ShipwreckFeature const&);
    ShipwreckFeature();

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
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&         generator,
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    lc,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;

    // vIndex: 4
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

    // vIndex: 0
    virtual ~ShipwreckFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShipwreckFeature(::OceanMonumentFeature& monument, uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OceanMonumentFeature& monument, uint seed, ::BaseGameVersion const& baseGameVersion);
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

    MCNAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&         generator,
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        ::ChunkPos const&    lc,
        ::IPreliminarySurfaceProvider const&
    );

    MCNAPI bool $isFeatureChunk(
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
