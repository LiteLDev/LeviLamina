#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MonumentBuilding : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    MonumentBuilding& operator=(MonumentBuilding const&);
    MonumentBuilding(MonumentBuilding const&);
    MonumentBuilding();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MonumentBuilding@@UEAA@XZ
    virtual ~MonumentBuilding() = default;

    // vIndex: 2, symbol: ?getType@MonumentBuilding@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@MonumentBuilding@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 5, symbol: ?postProcessMobsAt@MonumentBuilding@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ??0MonumentBuilding@@QEAA@AEAVRandom@@FHHAEAH@Z
    MCAPI MonumentBuilding(class Random&, short, int, int, int&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?generateEntranceArchs@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateEntranceArchs(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ?generateEntranceWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateEntranceWall(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ?generateLowerWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateLowerWall(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ?generateMiddleWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateMiddleWall(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ?generateRoofPiece@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateRoofPiece(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol:
    // ?generateRoomGraph@MonumentBuilding@@AEAA?AV?$vector@V?$shared_ptr@VRoomDefinition@@@std@@V?$allocator@V?$shared_ptr@VRoomDefinition@@@std@@@2@@std@@AEAVRandom@@@Z
    MCAPI std::vector<std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random&);

    // symbol: ?generateUpperWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateUpperWall(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ?generateWing@MonumentBuilding@@AEAAX_NHAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateWing(bool, int, class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
