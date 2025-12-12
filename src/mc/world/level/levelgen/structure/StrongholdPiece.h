#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class SHStartPiece;
// clang-format on

class StrongholdPiece : public ::StructurePiece {
public:
    // StrongholdPiece inner types define
    enum class SmallDoorType : int {
        Opening  = 0,
        WoodDoor = 1,
        Grates   = 2,
        IronDoor = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StrongholdPiece::SmallDoorType> entryDoor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StrongholdPiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::StructurePiece> findAndCreatePieceFactory(
        ::std::string const&                                pieceClass,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCAPI ::StructurePiece* generateAndAddPiece(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCAPI ::std::unique_ptr<::StructurePiece> generatePieceFromSmallDoor(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random const&                                     randomRef,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCAPI void generateSmallDoor(
        ::BlockSource& region,
        ::Random&,
        ::BoundingBox const&             chunkBB,
        ::StrongholdPiece::SmallDoorType doorType,
        int                              footX,
        int                              footY,
        int                              footZ
    );

    MCAPI ::StructurePiece* generateSmallDoorChildForward(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 xOff,
        int                                                 yOff
    );

    MCAPI ::StructurePiece* generateSmallDoorChildLeft(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff
    );

    MCAPI ::StructurePiece* generateSmallDoorChildRight(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void forceAddPortalRoom(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
