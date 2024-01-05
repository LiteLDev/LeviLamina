#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentDoubleXRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentDoubleXRoom& operator=(OceanMonumentDoubleXRoom const&);
    OceanMonumentDoubleXRoom(OceanMonumentDoubleXRoom const&);
    OceanMonumentDoubleXRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentDoubleXRoom@@UEAA@XZ
    virtual ~OceanMonumentDoubleXRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentDoubleXRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentDoubleXRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
