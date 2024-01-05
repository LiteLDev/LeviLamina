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
    // vIndex: 0, symbol: __gen_??1RuinedPortalFeature@@UEAA@XZ
    virtual ~RuinedPortalFeature() = default;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@RuinedPortalFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@RuinedPortalFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@RuinedPortalFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& cp, class IPreliminarySurfaceProvider const&);

    // symbol: ??0RuinedPortalFeature@@QEAA@I_N@Z
    MCAPI RuinedPortalFeature(uint seed, bool);

    // NOLINTEND
};
