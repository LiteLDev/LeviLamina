#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    MineshaftPiece& operator=(MineshaftPiece const&);
    MineshaftPiece(MineshaftPiece const&);
    MineshaftPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftPiece();

    // vIndex: 6
    virtual bool isInInvalidLocation(class BlockSource& region, class BoundingBox const& chunkBB);

    // vIndex: 10
    virtual bool canBeReplaced(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    MCAPI std::unique_ptr<class StructurePiece> createRandomShaftPiece(
        struct MineshaftData&                               metadata,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 genDepth
    );

    MCAPI class StructurePiece* generateAndAddPiece(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCAPI void setPlanksBlock(class BlockSource& region, class Block const& planksBlock, int x, int y, int z);

    // NOLINTEND
};
