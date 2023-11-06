#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentSimpleRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentSimpleRoom& operator=(OceanMonumentSimpleRoom const&);
    OceanMonumentSimpleRoom(OceanMonumentSimpleRoom const&);
    OceanMonumentSimpleRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OceanMonumentSimpleRoom();

    // vIndex: 2, symbol: ?getType@OceanMonumentSimpleRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentSimpleRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
