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
    ::ll::TypedStorage<1, 1, bool const> mUseTiltedSpacing;
    ::ll::TypedStorage<4, 4, int const> mSpacing;
    ::ll::TypedStorage<4, 4, int const> mMinSeparation;
    ::ll::TypedStorage<8, 8, ::OceanMonumentFeature&> mMonument;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> mAllowedBiomes;
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
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

    // vIndex: 4
    virtual bool getNearestGeneratedFeature(::Dimension& dimension, ::BiomeSource const& biomeSource, ::BlockPos const& origin, ::BlockPos& pos, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, bool mustBeInNewChunks, ::std::optional<::HashedString> const& biomeTag) /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&) /*override*/;

    // vIndex: 5
    virtual bool isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& pos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const& dimension) /*override*/;

    // vIndex: 0
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

    MCAPI bool $getNearestGeneratedFeature(::Dimension& dimension, ::BiomeSource const& biomeSource, ::BlockPos const& origin, ::BlockPos& pos, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, bool mustBeInNewChunks, ::std::optional<::HashedString> const& biomeTag);

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const&);

    MCAPI bool $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& pos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const& dimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
