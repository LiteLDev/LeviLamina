#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class StrongholdPiece : public ::StructurePiece {
public:
    // StrongholdPiece inner types define
    enum class SmallDoorType {};

public:
    // prevent constructor by default
    StrongholdPiece& operator=(StrongholdPiece const&);
    StrongholdPiece(StrongholdPiece const&);
    StrongholdPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StrongholdPiece@@UEAA@XZ
    virtual ~StrongholdPiece();

    // symbol:
    // ?findAndCreatePieceFactory@StrongholdPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class StructurePiece> findAndCreatePieceFactory(
        std::string const&                                  pieceClass,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    // symbol:
    // ?generateAndAddPiece@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH@Z
    MCAPI class StructurePiece* generateAndAddPiece(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    // symbol:
    // ?generatePieceFromSmallDoor@StrongholdPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEBVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class StructurePiece> generatePieceFromSmallDoor(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random const&                                 randomRef,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    // symbol:
    // ?generateSmallDoor@StrongholdPiece@@QEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@W4SmallDoorType@1@HHH@Z
    MCAPI void generateSmallDoor(
        class BlockSource& region,
        class Random&,
        class BoundingBox const&         chunkBB,
        ::StrongholdPiece::SmallDoorType doorType,
        int                              footX,
        int                              footY,
        int                              footZ
    );

    // symbol:
    // ?generateSmallDoorChildForward@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH@Z
    MCAPI class StructurePiece* generateSmallDoorChildForward(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 xOff,
        int                                                 yOff
    );

    // symbol:
    // ?generateSmallDoorChildLeft@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH@Z
    MCAPI class StructurePiece* generateSmallDoorChildLeft(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff
    );

    // symbol:
    // ?generateSmallDoorChildRight@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH@Z
    MCAPI class StructurePiece* generateSmallDoorChildRight(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff
    );

    // symbol:
    // ?forceAddPortalRoom@StrongholdPiece@@SAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    MCAPI static void
    forceAddPortalRoom(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // NOLINTEND
};
