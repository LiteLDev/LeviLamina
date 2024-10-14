#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHPortalRoom : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHPortalRoom& operator=(SHPortalRoom const&);
    SHPortalRoom(SHPortalRoom const&);
    SHPortalRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SHPortalRoom() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void
    addChildren(class StructurePiece& startPiece, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&,
        int footX,
        int footY,
        int footZ,
        int direction,
        int genDepth
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void
    addChildren$(class StructurePiece& startPiece, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
