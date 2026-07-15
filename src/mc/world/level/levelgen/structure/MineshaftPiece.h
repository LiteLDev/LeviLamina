#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftData.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
// clang-format on

class MineshaftPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MineshaftData> mMetadata;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB) /*override*/;

    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
