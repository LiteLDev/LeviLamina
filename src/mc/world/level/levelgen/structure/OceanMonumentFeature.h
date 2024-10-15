#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class OceanMonumentFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    OceanMonumentFeature& operator=(OceanMonumentFeature const&);
    OceanMonumentFeature(OceanMonumentFeature const&);
    OceanMonumentFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OceanMonumentFeature() = default;

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

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

    // vIndex: 4
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& pos, uint levelSeed, class IPreliminarySurfaceProvider const& preliminarySurfaceLevel, class Dimension const&);

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const&, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI explicit OceanMonumentFeature(uint seed);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(uint seed);

    MCAPI std::unique_ptr<class StructureStart>
    createStructureStart$(class Dimension& generator, class BiomeSource const&, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI bool getNearestGeneratedFeature$(
        class Dimension&                         dimension,
        class BiomeSource const&                 biomeSource,
        class BlockPos const&                    origin,
        class BlockPos&                          pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        bool                                     mustBeInNewChunks,
        std::optional<class HashedString> const& biomeTag
    );

    MCAPI void initMobSpawnTypes$(class HardcodedSpawnAreaRegistry& spawnAreas);

    MCAPI bool
    isFeatureChunk$(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& pos, uint levelSeed, class IPreliminarySurfaceProvider const& preliminarySurfaceLevel, class Dimension const&);

    MCAPI bool shouldAddHardcodedSpawnAreas$() const;

    MCAPI bool shouldPostProcessMobs$() const;

    // NOLINTEND
};
