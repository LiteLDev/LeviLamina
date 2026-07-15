#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class BuriedTreasurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mRadius;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
