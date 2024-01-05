#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentDoubleXYRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentDoubleXYRoom& operator=(OceanMonumentDoubleXYRoom const&);
    OceanMonumentDoubleXYRoom(OceanMonumentDoubleXYRoom const&);
    OceanMonumentDoubleXYRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentDoubleXYRoom@@UEAA@XZ
    virtual ~OceanMonumentDoubleXYRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentDoubleXYRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentDoubleXYRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
