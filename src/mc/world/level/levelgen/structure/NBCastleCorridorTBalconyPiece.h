#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBCastleCorridorTBalconyPiece : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBCastleCorridorTBalconyPiece& operator=(NBCastleCorridorTBalconyPiece const&);
    NBCastleCorridorTBalconyPiece(NBCastleCorridorTBalconyPiece const&);
    NBCastleCorridorTBalconyPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBCastleCorridorTBalconyPiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
