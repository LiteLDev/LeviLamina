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
    // vIndex: 0
    virtual ~OceanMonumentPiece();

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 7
    virtual int getWorldX(int x, int z);

    // vIndex: 8
    virtual int getWorldZ(int x, int z);

    // vIndex: 12
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    MCAPI OceanMonumentPiece(int& orientation, class BoundingBox& boundingBox);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI OceanMonumentPiece(
        int                                   genDepth,
        int&                                  orientation,
        std::shared_ptr<class RoomDefinition> roomDefinition,
        int                                   roomWidth,
        int                                   roomHeight,
        int                                   roomDepth
    );

    MCAPI bool chunkIntersects(class BoundingBox const& chunkBB, int x0, int z0, int x1, int z1);

    MCAPI void generateDefaultFloor(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      xOff,
        int                      zOff,
        bool                     downOpening
    );

    MCAPI void spawnElder(class BlockSource& region, class BoundingBox const& chunkBB, int x, int y, int z);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(int& orientation, class BoundingBox& boundingBox);

    MCAPI void* ctor$(
        int                                   genDepth,
        int&                                  orientation,
        std::shared_ptr<class RoomDefinition> roomDefinition,
        int                                   roomWidth,
        int                                   roomHeight,
        int                                   roomDepth
    );

    MCAPI void dtor$();

    MCAPI void addHardcodedSpawnAreas$(class LevelChunk& chunk) const;

    MCAPI int getWorldX$(int x, int z);

    MCAPI int getWorldZ$(int x, int z);

    MCAPI void postProcessMobsAt$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI static int& mGridroomLeftWingConnectIndex();

    MCAPI static int& mGridroomRightWingConnectIndex();

    MCAPI static int& mGridroomSourceIndex();

    MCAPI static int& mGridroomTopConnectIndex();

    MCAPI static int const& mLeftWingIndex();

    MCAPI static int const& mPenthouseIndex();

    MCAPI static int const& mRightWingIndex();

    // NOLINTEND
};
