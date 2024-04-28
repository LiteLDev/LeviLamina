#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    OceanMonumentPiece& operator=(OceanMonumentPiece const&);
    OceanMonumentPiece(OceanMonumentPiece const&);
    OceanMonumentPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OceanMonumentPiece@@UEAA@XZ
    virtual ~OceanMonumentPiece();

    // vIndex: 5, symbol: ?postProcessMobsAt@OceanMonumentPiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 7, symbol: ?getWorldX@OceanMonumentPiece@@UEAAHHH@Z
    virtual int getWorldX(int x, int z);

    // vIndex: 8, symbol: ?getWorldZ@OceanMonumentPiece@@UEAAHHH@Z
    virtual int getWorldZ(int x, int z);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@OceanMonumentPiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    // symbol: ??0OceanMonumentPiece@@QEAA@AEAHAEAVBoundingBox@@@Z
    MCAPI OceanMonumentPiece(int& orientation, class BoundingBox& boundingBox);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0OceanMonumentPiece@@IEAA@HAEAHV?$shared_ptr@VRoomDefinition@@@std@@HHH@Z
    MCAPI OceanMonumentPiece(
        int                                   genDepth,
        int&                                  orientation,
        std::shared_ptr<class RoomDefinition> roomDefinition,
        int                                   roomWidth,
        int                                   roomHeight,
        int                                   roomDepth
    );

    // symbol: ?chunkIntersects@OceanMonumentPiece@@IEAA_NAEBVBoundingBox@@HHHH@Z
    MCAPI bool chunkIntersects(class BoundingBox const& chunkBB, int x0, int z0, int x1, int z1);

    // symbol: ?generateDefaultFloor@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HH_N@Z
    MCAPI void generateDefaultFloor(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      xOff,
        int                      zOff,
        bool                     downOpening
    );

    // symbol: ?spawnElder@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HHH@Z
    MCAPI void spawnElder(class BlockSource& region, class BoundingBox const& chunkBB, int x, int y, int z);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?mGridroomLeftWingConnectIndex@OceanMonumentPiece@@1HA
    MCAPI static int mGridroomLeftWingConnectIndex;

    // symbol: ?mGridroomRightWingConnectIndex@OceanMonumentPiece@@1HA
    MCAPI static int mGridroomRightWingConnectIndex;

    // symbol: ?mGridroomSourceIndex@OceanMonumentPiece@@1HA
    MCAPI static int mGridroomSourceIndex;

    // symbol: ?mGridroomTopConnectIndex@OceanMonumentPiece@@1HA
    MCAPI static int mGridroomTopConnectIndex;

    // symbol: ?mLeftWingIndex@OceanMonumentPiece@@1HB
    MCAPI static int const mLeftWingIndex;

    // symbol: ?mPenthouseIndex@OceanMonumentPiece@@1HB
    MCAPI static int const mPenthouseIndex;

    // symbol: ?mRightWingIndex@OceanMonumentPiece@@1HB
    MCAPI static int const mRightWingIndex;

    // NOLINTEND
};
