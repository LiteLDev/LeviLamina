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
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;

    virtual ::StructurePieceType getType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
