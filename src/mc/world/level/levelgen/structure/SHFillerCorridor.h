#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class SHFillerCorridor : public ::StrongholdPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> steps;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual bool postProcess(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const&) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BoundingBox findPieceBox(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::StructurePieceType $getType() const;

    MCAPI bool $postProcess(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
