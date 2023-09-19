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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?isInInvalidLocation@MineshaftPiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
    virtual bool isInInvalidLocation(class BlockSource&, class BoundingBox const&);

    // vIndex: 10, symbol: ?canBeReplaced@MineshaftPiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);

    // symbol: ??1MineshaftPiece@@UEAA@XZ
    MCVAPI ~MineshaftPiece();

    // symbol:
    // ?createRandomShaftPiece@MineshaftPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEAUMineshaftData@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class StructurePiece> createRandomShaftPiece(
        struct MineshaftData&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );

    // symbol:
    // ?generateAndAddPiece@MineshaftPiece@@QEAAPEAVStructurePiece@@AEAV2@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH@Z
    MCAPI class StructurePiece* generateAndAddPiece(
        class StructurePiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );

    // symbol: ?setPlanksBlock@MineshaftPiece@@QEAAXAEAVBlockSource@@AEBVBlock@@HHH@Z
    MCAPI void setPlanksBlock(class BlockSource&, class Block const&, int, int, int);

    // NOLINTEND
};
