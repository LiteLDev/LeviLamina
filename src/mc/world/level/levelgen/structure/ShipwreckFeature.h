#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class ShipwreckFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    ShipwreckFeature& operator=(ShipwreckFeature const&);
    ShipwreckFeature(ShipwreckFeature const&);
    ShipwreckFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShipwreckFeature() = default;

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
    virtual bool isFeatureChunk(
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    pos,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class Dimension const&                   dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI
    ShipwreckFeature(class OceanMonumentFeature& monument, uint seed, class BaseGameVersion const& baseGameVersion);

    MCAPI static bool isShipwreckBeached(class Biome const* biome);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class OceanMonumentFeature& monument, uint seed, class BaseGameVersion const& baseGameVersion);

    MCAPI std::unique_ptr<class StructureStart>
    createStructureStart$(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI bool getNearestGeneratedFeature$(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    MCAPI bool isFeatureChunk$(
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    pos,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class Dimension const&                   dimension
    );

    // NOLINTEND
};
