#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LevelChunk;
class NBStartPiece;
class PieceWeight;
class Random;
// clang-format on

class NetherFortressPiece : public ::StructurePiece {
public:
    // NetherFortressPiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // NetherFortressPiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkae69c2;
        ::ll::UntypedStorage<8, 8> mUnka4a86f;
        ::ll::UntypedStorage<8, 8> mUnk34530d;
        ::ll::UntypedStorage<8, 8> mUnk14c78e;
        ::ll::UntypedStorage<8, 8> mUnk7c60a9;
        ::ll::UntypedStorage<8, 8> mUnkc479fe;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk236a8b;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherFortressPiece& operator=(NetherFortressPiece const&);
    NetherFortressPiece(NetherFortressPiece const&);
    NetherFortressPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 0
    virtual ~NetherFortressPiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::NetherFortressPiece> findAndCreateBridgePieceFactory(
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
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth,
        bool                                                isCastle
    );

    MCNAPI ::StructurePiece* generateChildForward(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 xOff,
        int                                                 yOff,
        bool                                                isCastle
    );

    MCNAPI ::StructurePiece* generateChildLeft(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );

    MCNAPI ::StructurePiece* generateChildRight(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 yOff,
        int                                                 zOff,
        bool                                                isCastle
    );

    MCNAPI ::std::unique_ptr<::NetherFortressPiece> generatePiece(
        ::NBStartPiece&                                     startPiece,
        ::std::vector<::PieceWeight>&                       currentPieces,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;

    MCNAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
