#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
class BlockSource;
class Random;
// clang-format on

class RuinedPortalPiece : public ::StructurePiece {
public:
    // RuinedPortalPiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // RuinedPortalPiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const&> mCrackedStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const&> mMossyStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const&> mPolishedBlackstoneBricks;
        ::ll::TypedStorage<8, 8, ::Block const&> mCrackedPolishedBlackstoneBricks;
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
    ::ll::TypedStorage<4, 4, int>                                 mStructureOriginX;
    ::ll::TypedStorage<4, 4, int>                                 mStructureOriginZ;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                      mStructureBounds;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry&>                    mBiomeRegistry;
    ::ll::TypedStorage<8, 8, ::Biome const&>                      mBiome;
    ::ll::TypedStorage<8, 40, ::RuinedPortalPiece::LocalRegistry> mLocalRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    RuinedPortalPiece& operator=(RuinedPortalPiece const&);
    RuinedPortalPiece(RuinedPortalPiece const&);
    RuinedPortalPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
