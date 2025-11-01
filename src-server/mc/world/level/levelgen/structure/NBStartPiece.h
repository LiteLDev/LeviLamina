#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class PieceWeight;
class Random;
class StructurePiece;
// clang-format on

class NBStartPiece : public ::NBBridgeCrossing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> previousPiece;
    ::ll::TypedStorage<8, 24, ::std::vector<::PieceWeight>> availableBridgePieces;
    ::ll::TypedStorage<8, 24, ::std::vector<::PieceWeight>> availableCastlePieces;
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePiece*>> pendingChildren;
    // NOLINTEND

public:
    // prevent constructor by default
    NBStartPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 0
    virtual ~NBStartPiece() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NBStartPiece(::Random& random, int west, int north);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Random& random, int west, int north);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::StructurePieceType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
