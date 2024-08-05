#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftStairs : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftStairs& operator=(MineshaftStairs const&);
    MineshaftStairs(MineshaftStairs const&);
    MineshaftStairs();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftStairs() = default;

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
};
