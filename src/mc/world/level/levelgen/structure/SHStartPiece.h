#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/SHStairsDown.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class PieceWeight;
class SHPortalRoom;
class StructurePiece;
// clang-format on

class SHStartPiece : public ::SHStairsDown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePiece*>> pendingChildren;
    ::ll::TypedStorage<8, 8, ::SHPortalRoom*>                   portalRoom;
    ::ll::TypedStorage<8, 32, ::std::string>                    imposedPiece;
    ::ll::TypedStorage<8, 32, ::std::string>                    previousPiece;
    ::ll::TypedStorage<8, 24, ::std::vector<::PieceWeight>>     pieceWeights;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual ~SHStartPiece() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
