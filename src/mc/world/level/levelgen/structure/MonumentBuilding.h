#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class RoomDefinition;
// clang-format on

class MonumentBuilding : public ::OceanMonumentPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::OceanMonumentPiece>>> mChildPieces;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::RoomDefinition>>>     mRoomGrid;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RoomDefinition>>                    mSourceRoom;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RoomDefinition>>                    mCoreRoom;
    // NOLINTEND

public:
    // prevent constructor by default
    MonumentBuilding();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual ~MonumentBuilding() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MonumentBuilding(::Random& random, short seaLevel, int west, int north, int& orientation);

    MCAPI void generateEntranceArchs(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void generateEntranceWall(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void generateLowerWall(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void generateMiddleWall(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void generateRoofPiece(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI ::std::vector<::std::shared_ptr<::RoomDefinition>> generateRoomGraph(::Random& random);

    MCAPI void generateUpperWall(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void
    generateWing(bool isFlipped, int xoff, ::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Random& random, short seaLevel, int west, int north, int& orientation);
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

    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
