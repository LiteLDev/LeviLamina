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
    // vIndex: 0
    virtual ~StrongholdPiece();

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

    MCAPI void generateSmallDoor(
        class BlockSource& region,
        class Random&,
        class BoundingBox const&         chunkBB,
        ::StrongholdPiece::SmallDoorType doorType,
        int                              footX,
        int                              footY,
        int                              footZ
    );

    MCAPI class StructurePiece* generateSmallDoorChildForward(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 xOff,
        int                                                 yOff
    );

    MCAPI class StructurePiece* generateSmallDoorChildLeft(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff
    );

    MCAPI class StructurePiece* generateSmallDoorChildRight(
        class SHStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff
    );

    MCAPI static void
    forceAddPortalRoom(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // NOLINTEND
};
