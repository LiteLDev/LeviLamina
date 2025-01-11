#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockVolume;
class BoundingBox;
class ChunkPos;
class Dimension;
class Random;
class StructurePoolElement;
struct JigsawJunction;
// clang-format on

class PoolElementStructurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnkae4efc;
    ::ll::UntypedStorage<4, 4>  mUnk98ec3b;
    ::ll::UntypedStorage<4, 4>  mUnkdb7900;
    ::ll::UntypedStorage<4, 4>  mUnkbce672;
    ::ll::UntypedStorage<4, 4>  mUnk7c68cb;
    ::ll::UntypedStorage<8, 8>  mUnkc93c20;
    ::ll::UntypedStorage<4, 12> mUnkea11e1;
    ::ll::UntypedStorage<1, 1>  mUnk8a1f71;
    ::ll::UntypedStorage<4, 24> mUnkd032f6;
    ::ll::UntypedStorage<8, 64> mUnkdb9bdf;
    ::ll::UntypedStorage<4, 12> mUnkcaf6a7;
    // NOLINTEND

public:
    // prevent constructor by default
    PoolElementStructurePiece& operator=(PoolElementStructurePiece const&);
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    PoolElementStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 5
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz) /*override*/;

    // vIndex: 13
    virtual int
    generateHeightAtPosition(::BlockPos const&, ::Dimension&, ::BlockVolume&, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>&)
        const = 0;

    // vIndex: 14
    virtual ::Block const* getSupportBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const = 0;

    // vIndex: 15
    virtual ::Block const& getBeardStabilizeBlock(::Block const&) const = 0;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const = 0;

    // vIndex: 17
    virtual bool _needsPostProcessing(::BlockSource& region);

    // vIndex: 0
    virtual ~PoolElementStructurePiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PoolElementStructurePiece(
        ::StructurePoolElement const& element,
        ::BlockPos                    position,
        ::Rotation                    rotation,
        int                           genDepth,
        ::JigsawJunction&             junction,
        ::BoundingBox const&          box,
        ::BlockPos                    refPos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::StructurePoolElement const& element,
        ::BlockPos                    position,
        ::Rotation                    rotation,
        int                           genDepth,
        ::JigsawJunction&             junction,
        ::BoundingBox const&          box,
        ::BlockPos                    refPos
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
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void $moveBoundingBox(int dx, int dy, int dz);

    MCFOLD bool $_needsPostProcessing(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
