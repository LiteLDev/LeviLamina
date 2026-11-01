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
    ::ll::TypedStorage<1, 1, bool>                                 mDoFill;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RoomDefinition>> mRoomDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMonumentPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) = 0;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual int getWorldZ(int x, int z) /*override*/;

    virtual int getWorldX(int x, int z) /*override*/;

    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;
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

    MCNAPI void
    generateDefaultFloor(::BlockSource& region, ::BoundingBox const& chunkBB, int xOff, int zOff, bool downOpening);

    MCNAPI void spawnElder(::BlockSource& region, ::BoundingBox const& chunkBB, int x, int y, int z);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCNAPI int $getWorldZ(int x, int z);

    MCNAPI int $getWorldX(int x, int z);

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;


    // NOLINTEND
};
