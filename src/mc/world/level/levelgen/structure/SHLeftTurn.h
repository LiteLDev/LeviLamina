#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHLeftTurn : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHLeftTurn& operator=(SHLeftTurn const&);
    SHLeftTurn(SHLeftTurn const&);
    SHLeftTurn();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SHLeftTurn() = default;

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
