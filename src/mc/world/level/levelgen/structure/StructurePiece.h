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
    virtual ~StructurePiece();

    virtual void moveBoundingBox(int dx, int dy, int dz);

    virtual ::StructurePieceType getType() const;

    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    virtual bool isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    virtual int getWorldX(int x, int z);

    virtual int getWorldZ(int x, int z);

    virtual void
    placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);

    virtual bool canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

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

    virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addTerrainAdjustmentToken(::std::shared_ptr<bool> token);

    MCAPI void generateBox(
        ::BlockSource&         region,
        ::BoundingBox const&   chunkBB,
        int                    x0,
        int                    y0,
        int                    z0,
        int                    x1,
        int                    y1,
        int                    z1,
        bool                   skipAir,
        ::Random&              random,
        ::BlockSelector const& selector
    );

    MCAPI void generateMaybeBox(
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
        bool                 skipAir,
        bool                 excludeSky
    );

    MCAPI ::Block const& getBlock(::BlockSource& region, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCAPI ushort getOrientationData(::Block const* block, ushort data);

    MCAPI bool isAboveGround(int x0, int y1, int z, ::BlockSource& region);

    MCAPI void maybeGenerateBlockIfNotFloating(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        float                probability,
        int                  x,
        int                  y,
        int                  z,
        ::Block const&       block
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $moveBoundingBox(int dx, int dy, int dz);

    MCFOLD ::StructurePieceType $getType() const;

    MCFOLD void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    MCFOLD void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI bool $isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    MCAPI int $getWorldX(int x, int z);

    MCAPI int $getWorldZ(int x, int z);

    MCAPI void
    $placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCFOLD bool $canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

    MCAPI void $generateBox(
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

    MCFOLD void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
