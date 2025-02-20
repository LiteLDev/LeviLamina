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
    ::ll::UntypedStorage<8, 24> mUnk9fcf05;
    ::ll::UntypedStorage<8, 24> mUnke9d97c;
    ::ll::UntypedStorage<8, 16> mUnkea3ff3;
    ::ll::UntypedStorage<8, 16> mUnk2fd715;
    // NOLINTEND

public:
    // prevent constructor by default
    MonumentBuilding& operator=(MonumentBuilding const&);
    MonumentBuilding(MonumentBuilding const&);
    MonumentBuilding();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 5
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 0
    virtual ~MonumentBuilding() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MonumentBuilding(::Random& random, short seaLevel, int west, int north, int& orientation);

    MCAPI void generateEntranceArchs(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);

    MCAPI void generateEntranceWall(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);

    MCAPI void generateLowerWall(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);

    MCAPI void generateMiddleWall(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);

    MCAPI void generateRoofPiece(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);

    MCAPI ::std::vector<::std::shared_ptr<::RoomDefinition>> generateRoomGraph(::Random& random);

    MCAPI void generateUpperWall(::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);

    MCAPI void
    generateWing(bool isFlipped, int xoff, ::BlockSource& region, ::Random& chunkBB, ::BoundingBox const& random);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
