#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentDoubleYRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentDoubleYRoom& operator=(OceanMonumentDoubleYRoom const&);
    OceanMonumentDoubleYRoom(OceanMonumentDoubleYRoom const&);
    OceanMonumentDoubleYRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentDoubleYRoom@@UEAA@XZ
    virtual ~OceanMonumentDoubleYRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentDoubleYRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentDoubleYRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
