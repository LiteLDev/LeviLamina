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
    // vIndex: 0, symbol: ??1MineshaftPiece@@UEAA@XZ
    virtual ~MineshaftPiece();

    // vIndex: 6, symbol: ?isInInvalidLocation@MineshaftPiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
    virtual bool isInInvalidLocation(class BlockSource& region, class BoundingBox const& chunkBB);

    // vIndex: 10, symbol: ?canBeReplaced@MineshaftPiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    virtual bool canBeReplaced(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    // symbol:
    // ?createRandomShaftPiece@MineshaftPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEAUMineshaftData@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
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

    // symbol:
    // ?generateAndAddPiece@MineshaftPiece@@QEAAPEAVStructurePiece@@AEAV2@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH@Z
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

    // symbol: ?setPlanksBlock@MineshaftPiece@@QEAAXAEAVBlockSource@@AEBVBlock@@HHH@Z
    MCAPI void setPlanksBlock(class BlockSource& region, class Block const&, int x, int y, int z);

    // NOLINTEND
};
