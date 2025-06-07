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
    MCNAPI OceanMonumentPiece(
        int                                 genDepth,
        int&                                orientation,
        ::std::shared_ptr<::RoomDefinition> roomDefinition,
        int                                 roomWidth,
        int                                 roomHeight,
        int                                 roomDepth
    );

    MCNAPI bool chunkIntersects(::BoundingBox const& chunkBB, int x0, int z0, int x1, int z1);

    MCNAPI void generateBoxOnFillOnly(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       targetBlock
    );

    MCNAPI void
    generateDefaultFloor(::BlockSource& region, ::BoundingBox const& chunkBB, int xOff, int zOff, bool downOpening);

    MCNAPI void spawnElder(::BlockSource& region, ::BoundingBox const& chunkBB, int x, int y, int z);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& mGridroomLeftWingConnectIndex();

    MCNAPI static int& mGridroomRightWingConnectIndex();

    MCNAPI static int& mGridroomSourceIndex();

    MCNAPI static int& mGridroomTopConnectIndex();

    MCNAPI static int const& mLeftWingIndex();

    MCNAPI static int const& mPenthouseIndex();

    MCNAPI static int const& mRightWingIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCNAPI int $getWorldZ(int x, int z);

    MCNAPI int $getWorldX(int x, int z);

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
