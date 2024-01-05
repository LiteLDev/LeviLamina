#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentEntryRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentEntryRoom& operator=(OceanMonumentEntryRoom const&);
    OceanMonumentEntryRoom(OceanMonumentEntryRoom const&);
    OceanMonumentEntryRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentEntryRoom@@UEAA@XZ
    virtual ~OceanMonumentEntryRoom() = default;

    // vIndex: 2, symbol: ?getType@OceanMonumentEntryRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentEntryRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
