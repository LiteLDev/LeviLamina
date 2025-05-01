#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSelector;
class BlockSource;
class LevelChunk;
class Random;
// clang-format on

class StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>           mBoundingBox;
    ::ll::TypedStorage<4, 4, int>                      mOrientation;
    ::ll::TypedStorage<4, 4, int>                      mGenDepth;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mTerrainAdjustmentToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePiece();

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    // vIndex: 4
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    // vIndex: 5
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    // vIndex: 6
    virtual bool isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    // vIndex: 7
    virtual int getWorldX(int x, int z);

    // vIndex: 8
    virtual int getWorldZ(int x, int z);

    // vIndex: 9
    virtual void
    placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);

    // vIndex: 10
    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

    // vIndex: 11
    virtual void generateBox(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       edgeBlock,
        ::Block const&       fillBlock,
        bool                 skipAir
    );

    // vIndex: 12
    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addTerrainAdjustmentToken(::std::shared_ptr<bool> token);

    MCNAPI void generateBox(
        ::BlockSource&         region,
        ::BoundingBox const&   chunkBB,
        int                    x0,
        int                    y0,
        int                    z0,
        int                    x1,
        int                    y1,
        int                    z1,
        bool                   random,
        ::Random&              selector,
        ::BlockSelector const& skipAir
    );

    MCNAPI void generateMaybeBox(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        float                probability,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       edgeBlock,
        ::Block const&       fillBlock,
        bool                 excludeSky,
        bool                 skipAir
    );

    MCNAPI ::Block const& getBlock(::BlockSource& region, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCNAPI ushort getOrientationData(::Block const* block, ushort data);

    MCNAPI int getWorldY(int y);

    MCNAPI bool isAboveGround(int x0, int y1, int z, ::BlockSource& region);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $moveBoundingBox(int dx, int dy, int dz);

    MCNAPI ::StructurePieceType $getType() const;

    MCNAPI void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    MCNAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCNAPI bool $isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    MCNAPI int $getWorldX(int x, int z);

    MCNAPI int $getWorldZ(int x, int z);

    MCNAPI void
    $placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCNAPI bool $canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

    MCNAPI void $generateBox(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       edgeBlock,
        ::Block const&       fillBlock,
        bool                 skipAir
    );

    MCNAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
