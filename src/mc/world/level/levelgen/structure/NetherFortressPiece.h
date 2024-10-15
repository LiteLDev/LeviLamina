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
    // vIndex: 0
    virtual ~NetherFortressPiece();

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 12
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    MCAPI explicit NetherFortressPiece(int genDepth);

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

    MCAPI class StructurePiece* generateChildForward(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 xOff,
        int                                                 yOff,
        bool                                                isCastle
    );

    MCAPI class StructurePiece* generateChildLeft(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );

    MCAPI class StructurePiece* generateChildRight(
        class NBStartPiece&                                 startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(int genDepth);

    MCAPI void dtor$();

    MCAPI void addHardcodedSpawnAreas$(class LevelChunk& chunk) const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
