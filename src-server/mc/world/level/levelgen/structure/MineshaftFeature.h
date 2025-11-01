#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class ChunkPos;
class Dimension;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
// clang-format on

class MineshaftFeature : public ::StructureFeature {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftFeature() /*override*/ = default;

    // vIndex: 5
    virtual bool isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& pos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const& dimension) /*override*/;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& pos, uint levelSeed, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel, ::Dimension const& dimension);

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(::Dimension& generator, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& lc, ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
