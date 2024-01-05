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
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5, symbol: ?postProcessMobsAt@MonumentBuilding@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ??0MonumentBuilding@@QEAA@AEAVRandom@@FHHAEAH@Z
    MCAPI MonumentBuilding(class Random& random, short seaLevel, int west, int north, int& orientation);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?generateEntranceArchs@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateEntranceArchs(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?generateEntranceWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateEntranceWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?generateLowerWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateLowerWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?generateMiddleWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateMiddleWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?generateRoofPiece@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateRoofPiece(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol:
    // ?generateRoomGraph@MonumentBuilding@@AEAA?AV?$vector@V?$shared_ptr@VRoomDefinition@@@std@@V?$allocator@V?$shared_ptr@VRoomDefinition@@@std@@@2@@std@@AEAVRandom@@@Z
    MCAPI std::vector<std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random& random);

    // symbol: ?generateUpperWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateUpperWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?generateWing@MonumentBuilding@@AEAAX_NHAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI void generateWing(
        bool                     isFlipped,
        int                      xoff,
        class BlockSource&       region,
        class Random&            random,
        class BoundingBox const& chunkBB
    );

    // NOLINTEND
};
