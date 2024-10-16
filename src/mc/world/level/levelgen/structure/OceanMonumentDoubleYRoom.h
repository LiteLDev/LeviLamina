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
    // vIndex: 0
    virtual ~OceanMonumentDoubleYRoom() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
