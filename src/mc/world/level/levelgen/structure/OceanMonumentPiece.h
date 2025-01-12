#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LevelChunk;
class Random;
class RoomDefinition;
// clang-format on

class OceanMonumentPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6bd372;
    ::ll::UntypedStorage<8, 16> mUnkc62c22;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMonumentPiece& operator=(OceanMonumentPiece const&);
    OceanMonumentPiece(OceanMonumentPiece const&);
    OceanMonumentPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    // vIndex: 5
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 8
    virtual int getWorldZ(int x, int z) /*override*/;

    // vIndex: 7
    virtual int getWorldX(int x, int z) /*override*/;

    // vIndex: 12
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

    // vIndex: 0
    virtual ~OceanMonumentPiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OceanMonumentPiece(
        int                                 genDepth,
        int&                                orientation,
        ::std::shared_ptr<::RoomDefinition> roomDefinition,
        int                                 roomWidth,
        int                                 roomHeight,
        int                                 roomDepth
    );

    MCAPI void
    generateDefaultFloor(::BlockSource& region, ::BoundingBox const& chunkBB, int xOff, int zOff, bool downOpening);

    MCAPI void spawnElder(::BlockSource& region, ::BoundingBox const& chunkBB, int x, int y, int z);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& mGridroomLeftWingConnectIndex();

    MCAPI static int& mGridroomRightWingConnectIndex();

    MCAPI static int& mGridroomSourceIndex();

    MCAPI static int& mGridroomTopConnectIndex();

    MCAPI static int const& mLeftWingIndex();

    MCAPI static int const& mPenthouseIndex();

    MCAPI static int const& mRightWingIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int                                 genDepth,
        int&                                orientation,
        ::std::shared_ptr<::RoomDefinition> roomDefinition,
        int                                 roomWidth,
        int                                 roomHeight,
        int                                 roomDepth
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI int $getWorldZ(int x, int z);

    MCAPI int $getWorldX(int x, int z);

    MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
