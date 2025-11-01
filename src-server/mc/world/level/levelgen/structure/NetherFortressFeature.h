#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class ChunkPos;
class Dimension;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class NetherFortressFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> mAllowedBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherFortressFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    // vIndex: 5
    virtual bool isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const& dimension) /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& cp, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel) /*override*/;

    // vIndex: 0
    virtual ~NetherFortressFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherFortressFeature(uint& seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint& seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCAPI bool $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const& dimension);

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& cp, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
