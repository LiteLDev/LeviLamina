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
    // virtual functions
    // NOLINTBEGIN
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual int getWorldZ(int x, int z) /*override*/;

    virtual int getWorldX(int x, int z) /*override*/;

    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
