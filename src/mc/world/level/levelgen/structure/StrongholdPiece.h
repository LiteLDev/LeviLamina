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
    ::ll::UntypedStorage<4, 4> mUnk8b2d33;
    // NOLINTEND

public:
    // prevent constructor by default
    StrongholdPiece& operator=(StrongholdPiece const&);
    StrongholdPiece(StrongholdPiece const&);
    StrongholdPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StrongholdPiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::StructurePiece> findAndCreatePieceFactory(
        ::std::string const&                                pieceClass,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCNAPI ::StructurePiece* generateAndAddPiece(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCNAPI ::std::unique_ptr<::StructurePiece> generatePieceFromSmallDoor(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random const&                                     randomRef,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCNAPI void generateSmallDoor(
        ::BlockSource&                   region,
        ::Random&                        chunkBB,
        ::BoundingBox const&             doorType,
        ::StrongholdPiece::SmallDoorType footX,
        int                              footY,
        int                              footZ,
        int
    );

    MCNAPI ::StructurePiece* generateSmallDoorChildForward(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 xOff,
        int                                                 yOff
    );

    MCNAPI ::StructurePiece* generateSmallDoorChildLeft(
        ::SHStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff
    );

    MCNAPI ::StructurePiece* generateSmallDoorChildRight(
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
    MCNAPI static void forceAddPortalRoom(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
