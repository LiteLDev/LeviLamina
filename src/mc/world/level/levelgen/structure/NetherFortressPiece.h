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
    // virtual functions
    // NOLINTBEGIN
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
