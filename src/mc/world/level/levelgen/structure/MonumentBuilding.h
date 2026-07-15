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
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
