#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBBridgeEndFiller : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBBridgeEndFiller& operator=(NBBridgeEndFiller const&);
    NBBridgeEndFiller(NBBridgeEndFiller const&);
    NBBridgeEndFiller();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBBridgeEndFiller() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI static std::unique_ptr<class NetherFortressPiece> createPiece(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 genDepth
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
