#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class NBBridgeStraight : public ::NetherFortressPiece {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    ) /*override*/;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
