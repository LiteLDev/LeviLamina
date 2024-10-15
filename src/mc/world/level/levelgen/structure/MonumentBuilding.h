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
    // vIndex: 0
    virtual ~MonumentBuilding() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI MonumentBuilding(class Random& random, short seaLevel, int west, int north, int& orientation);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void generateEntranceArchs(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void generateEntranceWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void generateLowerWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void generateMiddleWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void generateRoofPiece(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI std::vector<std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random& random);

    MCAPI void generateUpperWall(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void generateWing(
        bool                     isFlipped,
        int                      xoff,
        class BlockSource&       region,
        class Random&            random,
        class BoundingBox const& chunkBB
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Random& random, short seaLevel, int west, int north, int& orientation);

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void postProcessMobsAt$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
