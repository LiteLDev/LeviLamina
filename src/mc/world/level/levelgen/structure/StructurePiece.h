#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSelector;
class BlockSource;
class BoundingBox;
class LevelChunk;
class PieceWeight;
class Random;
// clang-format on

class StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk8c6046;
    ::ll::UntypedStorage<4, 4>  mUnkc77b68;
    ::ll::UntypedStorage<4, 4>  mUnk85df9a;
    ::ll::UntypedStorage<8, 16> mUnk6ab179;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePiece& operator=(StructurePiece const&);
    StructurePiece(StructurePiece const&);
    StructurePiece();

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
    MCAPI ::BlockPos _getWorldPos(int x, int y, int z);

    MCAPI void addTerrainAdjustmentToken(::std::shared_ptr<bool> token);

    MCAPI void
    generateAirBox(::BlockSource& region, ::BoundingBox const& chunkBB, int x0, int y0, int z0, int x1, int y1, int z1);

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

    MCAPI void generateUpperHalfSphere(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z0,
        int                  x1,
        int                  y1,
        int                  z1,
        ::Block const&       fillBlock,
        bool                 skipAir
    );

    MCAPI ::Block const& getBlock(::BlockSource& region, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCAPI ::Direction::Type getOrientation() const;

    MCAPI ushort getOrientationData(::Block const* block, ushort data);

    MCAPI int getWorldY(int y);

    MCAPI bool isAboveGround(int x0, int y1, int z, ::BlockSource& region);

    MCAPI bool isAir(::BlockSource& region, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCAPI bool isReplaceableBlock(::Block const& block);

    MCAPI void maybeGenerateBlock(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        ::Random&            random,
        float                probability,
        int                  x,
        int                  y,
        int                  z,
        ::Block const&       block
    );

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::StructurePiece*
    findCollisionPiece(::std::vector<::std::unique_ptr<::StructurePiece>> const& pieces, ::BoundingBox const& box);

    MCAPI static int getTotalWeight(::std::vector<::PieceWeight> const& pieceWeights);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $moveBoundingBox(int dx, int dy, int dz);

    MCAPI ::StructurePieceType $getType() const;

    MCAPI void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI bool $isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    MCAPI int $getWorldX(int x, int z);

    MCAPI int $getWorldZ(int x, int z);

    MCAPI void
    $placeBlock(::BlockSource& region, ::Block const& block, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCAPI bool $canBeReplaced(::BlockSource&, int const, int const, int const, ::BoundingBox const&);

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

    MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
