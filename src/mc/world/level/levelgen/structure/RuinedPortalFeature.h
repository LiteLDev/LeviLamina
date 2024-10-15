#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class RuinedPortalFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    RuinedPortalFeature& operator=(RuinedPortalFeature const&);
    RuinedPortalFeature(RuinedPortalFeature const&);
    RuinedPortalFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RuinedPortalFeature() = default;

    // vIndex: 3
    virtual bool getNearestGeneratedFeature(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random& random, class ChunkPos const& pos, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart> createStructureStart(
        class Dimension&         dimension,
        class BiomeSource const& biomeSource,
        class Random&,
        class ChunkPos const&                    cp,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI RuinedPortalFeature(uint seed, bool nether);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(uint seed, bool nether);

    MCAPI std::unique_ptr<class StructureStart> createStructureStart$(
        class Dimension&         dimension,
        class BiomeSource const& biomeSource,
        class Random&,
        class ChunkPos const&                    cp,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI bool getNearestGeneratedFeature$(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    MCAPI bool
    isFeatureChunk$(class BiomeSource const&, class Random& random, class ChunkPos const& pos, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // NOLINTEND
};
