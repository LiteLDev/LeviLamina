#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NetherFortressPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    NetherFortressPiece& operator=(NetherFortressPiece const&);
    NetherFortressPiece(NetherFortressPiece const&);
    NetherFortressPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetherFortressPiece@@UEAA@XZ
    virtual ~NetherFortressPiece();

    // vIndex: 4, symbol: ?postProcess@NetherFortressPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@NetherFortressPiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    // symbol: ??0NetherFortressPiece@@QEAA@H@Z
    MCAPI explicit NetherFortressPiece(int genDepth);

    // symbol:
    // ?findAndCreateBridgePieceFactory@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(
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
    // ?generateAndAddPiece@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH_N@Z
    MCAPI class StructurePiece* generateAndAddPiece(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth,
        bool                                                isCastle
    );

    // symbol:
    // ?generateChildForward@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
    MCAPI class StructurePiece* generateChildForward(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 xOff,
        int                                                 yOff,
        bool                                                isCastle
    );

    // symbol:
    // ?generateChildLeft@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
    MCAPI class StructurePiece* generateChildLeft(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );

    // symbol:
    // ?generateChildRight@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
    MCAPI class StructurePiece* generateChildRight(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );

    // symbol:
    // ?generatePiece@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEAVNBStartPiece@@AEAV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(
        class NBStartPiece&                                 startPiece,
        std::vector<class PieceWeight>&                     currentPieces,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    // NOLINTEND
};
