#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHFillerCorridor : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHFillerCorridor& operator=(SHFillerCorridor const&);
    SHFillerCorridor(SHFillerCorridor const&);
    SHFillerCorridor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SHFillerCorridor() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    MCAPI static class BoundingBox findPieceBox(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&,
        int footX,
        int footY,
        int footZ,
        int direction
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    // NOLINTEND
};
