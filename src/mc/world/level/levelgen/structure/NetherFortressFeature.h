#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class NetherFortressFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    NetherFortressFeature& operator=(NetherFortressFeature const&);
    NetherFortressFeature(NetherFortressFeature const&);
    NetherFortressFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherFortressFeature() = default;

    // vIndex: 1
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 4
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    chunkPos,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class Dimension const&                   dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart> createStructureStart(
        class Dimension&                         generator,
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    cp,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI NetherFortressFeature(uint& seed, class BaseGameVersion const& baseGameVersion);

    // NOLINTEND
};
