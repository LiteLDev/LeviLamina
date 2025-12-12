#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class DesertPyramidPiece : public ::ScatteredFeaturePiece {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual ::StructurePieceType getType() const /*override*/;

    virtual ~DesertPyramidPiece() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCNAPI ::StructurePieceType $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
