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
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@NetherFortressPiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

    // symbol: ??0NetherFortressPiece@@QEAA@H@Z
    MCAPI explicit NetherFortressPiece(int);

    // symbol:
    // ?findAndCreateBridgePieceFactory@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(
        std::string const&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );

    // symbol:
    // ?generateAndAddPiece@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH_N@Z
    MCAPI class StructurePiece* generateAndAddPiece(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int,
        bool
    );

    // symbol:
    // ?generateChildForward@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
    MCAPI class StructurePiece* generateChildForward(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        bool
    );

    // symbol:
    // ?generateChildLeft@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
    MCAPI class StructurePiece* generateChildLeft(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        bool
    );

    // symbol:
    // ?generateChildRight@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
    MCAPI class StructurePiece* generateChildRight(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        bool
    );

    // symbol:
    // ?generatePiece@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEAVNBStartPiece@@AEAV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(
        class NBStartPiece&,
        std::vector<class PieceWeight>&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );

    // NOLINTEND
};
