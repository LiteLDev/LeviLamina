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
    // vIndex: 0, symbol: __gen_??1ShipwreckFeature@@UEAA@XZ
    virtual ~ShipwreckFeature() = default;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@ShipwreckFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@ShipwreckFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@ShipwreckFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    // symbol: ??0ShipwreckFeature@@QEAA@AEAVOceanMonumentFeature@@IAEBVBaseGameVersion@@@Z
    MCAPI
    ShipwreckFeature(class OceanMonumentFeature& monument, uint seed, class BaseGameVersion const& baseGameVersion);

    // symbol: ?isShipwreckBeached@ShipwreckFeature@@SA_NPEBVBiome@@@Z
    MCAPI static bool isShipwreckBeached(class Biome const* biome);

    // NOLINTEND
};
