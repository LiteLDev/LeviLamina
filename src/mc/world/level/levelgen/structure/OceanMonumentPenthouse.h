#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentPenthouse : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentPenthouse& operator=(OceanMonumentPenthouse const&);
    OceanMonumentPenthouse(OceanMonumentPenthouse const&);
    OceanMonumentPenthouse();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentPenthouse@@UEAA@XZ
    virtual ~OceanMonumentPenthouse() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentPenthouse@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentPenthouse@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5, symbol:
    // ?postProcessMobsAt@OceanMonumentPenthouse@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
