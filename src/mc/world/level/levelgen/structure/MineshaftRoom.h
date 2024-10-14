#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftRoom : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftRoom& operator=(MineshaftRoom const&);
    MineshaftRoom(MineshaftRoom const&);
    MineshaftRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftRoom() = default;

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void addChildren$(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    MCAPI ::StructurePieceType getType$() const;

    MCAPI void moveBoundingBox$(int dx, int dy, int dz);

    MCAPI bool postProcess$(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    // NOLINTEND
};
