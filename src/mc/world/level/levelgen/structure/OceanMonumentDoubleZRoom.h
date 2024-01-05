#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentDoubleZRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentDoubleZRoom& operator=(OceanMonumentDoubleZRoom const&);
    OceanMonumentDoubleZRoom(OceanMonumentDoubleZRoom const&);
    OceanMonumentDoubleZRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentDoubleZRoom@@UEAA@XZ
    virtual ~OceanMonumentDoubleZRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentDoubleZRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentDoubleZRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
