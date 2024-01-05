#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentDoubleYZRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentDoubleYZRoom& operator=(OceanMonumentDoubleYZRoom const&);
    OceanMonumentDoubleYZRoom(OceanMonumentDoubleYZRoom const&);
    OceanMonumentDoubleYZRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentDoubleYZRoom@@UEAA@XZ
    virtual ~OceanMonumentDoubleYZRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentDoubleYZRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentDoubleYZRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
