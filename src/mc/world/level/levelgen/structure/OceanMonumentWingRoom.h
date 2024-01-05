#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentWingRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentWingRoom& operator=(OceanMonumentWingRoom const&);
    OceanMonumentWingRoom(OceanMonumentWingRoom const&);
    OceanMonumentWingRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentWingRoom@@UEAA@XZ
    virtual ~OceanMonumentWingRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentWingRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentWingRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5, symbol:
    // ?postProcessMobsAt@OceanMonumentWingRoom@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
