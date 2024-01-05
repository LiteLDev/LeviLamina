#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentCoreRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentCoreRoom& operator=(OceanMonumentCoreRoom const&);
    OceanMonumentCoreRoom(OceanMonumentCoreRoom const&);
    OceanMonumentCoreRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentCoreRoom@@UEAA@XZ
    virtual ~OceanMonumentCoreRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentCoreRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentCoreRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
