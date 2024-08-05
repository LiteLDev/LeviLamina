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
    // vIndex: 0
    virtual ~OceanMonumentDoubleXYRoom() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
