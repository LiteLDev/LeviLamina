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
    // vIndex: 0, symbol: __gen_??1NetherFortressFeature@@UEAA@XZ
    virtual ~NetherFortressFeature() = default;

    // vIndex: 1, symbol: ?shouldAddHardcodedSpawnAreas@NetherFortressFeature@@UEBA_NXZ
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 4, symbol: ?initMobSpawnTypes@NetherFortressFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@NetherFortressFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    chunkPos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@NetherFortressFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& cp, class IPreliminarySurfaceProvider const&);

    // symbol: ??0NetherFortressFeature@@QEAA@AEAIAEBVBaseGameVersion@@@Z
    MCAPI NetherFortressFeature(uint& seed, class BaseGameVersion const& baseGameVersion);

    // NOLINTEND
};
