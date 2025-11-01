#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class Block;
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
        ::ll::TypedStorage<8, 8, ::Block const&> mGlowstone;
        ::ll::TypedStorage<8, 8, ::Block const&> mNetherBrick;
        ::ll::TypedStorage<8, 8, ::Block const&> mNetherBrickFence;
        ::ll::TypedStorage<8, 8, ::Block const&> mNetherWart;
        ::ll::TypedStorage<8, 8, ::Block const&> mSoulSand;
        ::ll::TypedStorage<8, 8, ::Block const&> mAirBlock;
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
    ::ll::TypedStorage<8, 48, ::NetherFortressPiece::LocalRegistry const> mLocalRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI explicit NetherFortressPiece(int genDepth);

    MCAPI ::std::unique_ptr<::NetherFortressPiece> findAndCreateBridgePieceFactory(::std::string const& pieceClass, ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::Random& random, int footX, int footY, int footZ, int direction, int depth);

    MCAPI ::StructurePiece* generateAndAddPiece(::NBStartPiece& startPiece, ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::Random& random, int footX, int footY, int footZ, int direction, int depth, bool isCastle);

    MCAPI ::StructurePiece* generateChildForward(::NBStartPiece& startPiece, ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::Random& random, int xOff, int yOff, bool isCastle);

    MCAPI ::StructurePiece* generateChildLeft(::NBStartPiece& startPiece, ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::Random& random, int yOff, int zOff, bool isCastle);

    MCAPI ::StructurePiece* generateChildRight(::NBStartPiece& startPiece, ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::Random& random, int yOff, int zOff, bool isCastle);

    MCAPI ::std::unique_ptr<::NetherFortressPiece> generatePiece(::NBStartPiece& startPiece, ::std::vector<::PieceWeight>& currentPieces, ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::Random& random, int footX, int footY, int footZ, int direction, int depth);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int genDepth);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;

    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
