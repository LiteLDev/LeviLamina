#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class ShipwreckPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    ShipwreckPiece& operator=(ShipwreckPiece const&);
    ShipwreckPiece(ShipwreckPiece const&);
    ShipwreckPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShipwreckPiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BlockPos
    _calculateTargetPos(class BlockSource& region, class BlockPos origin, ::Rotation rot, class BlockPos size);

    MCAPI static class BlockPos
    _calculateTargetPosLegacy(class BlockSource& region, class BlockPos origin, ::Rotation rot, class BlockPos size);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI static ::ll::CArrayT<std::string const>& STRUCTURE_SHIPWRECK_TYPES();

    // NOLINTEND
};
