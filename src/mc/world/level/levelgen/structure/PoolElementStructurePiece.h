#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/JigsawJunction.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BlockVolume;
class ChunkPos;
class Dimension;
class Random;
class StructurePoolElement;
struct ActorDefinitionIdentifier;
// clang-format on

class PoolElementStructurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>                mCachedPieceBounds;
    ::ll::TypedStorage<4, 4, int>                           mCachedPieceBaseY;
    ::ll::TypedStorage<4, 4, int>                           mCachedXCenter;
    ::ll::TypedStorage<4, 4, int>                           mCachedZCenter;
    ::ll::TypedStorage<4, 4, float>                         mCachedMaxRadius;
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const&> mElement;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mPosition;
    ::ll::TypedStorage<1, 1, ::Rotation>                    mRotation;
    ::ll::TypedStorage<4, 24, ::JigsawJunction>             mJigsawJunction;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>>
                                          mEntitiesToPlace;
    ::ll::TypedStorage<4, 12, ::BlockPos> mRefPos;
    // NOLINTEND

public:
    PoolElementStructurePiece(
        ::StructurePoolElement const& element,
        ::BlockPos                    position,
        ::Rotation                    rotation,
        int                           genDepth,
        ::JigsawJunction&             junction,
        ::BoundingBox const&          box,
        ::BlockPos                    refPos
    )
    : mElement(element),
      mPosition(position),
      mRotation(rotation),
      mJigsawJunction(junction),
      mRefPos(refPos) {
        mCachedPieceBaseY = 0;
        mCachedXCenter    = 0;
        mCachedZCenter    = 0;
        mCachedMaxRadius  = 0.0f;
        mBoundingBox      = box;
        mGenDepth         = genDepth;
    }

public:
    // prevent constructor by default
    PoolElementStructurePiece& operator=(PoolElementStructurePiece const&);
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    PoolElementStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual void moveBoundingBox(int dx, int dy, int dz) /*override*/;

    virtual int generateHeightAtPosition(
        ::BlockPos const&                                                          pos,
        ::Dimension&                                                               dim,
        ::BlockVolume&                                                             box,
        ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>& chunkHeightCache
    ) const = 0;

    virtual ::Block const*
    getSupportBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const = 0;

    virtual ::Block const& getBeardStabilizeBlock(::Block const& foundationBlock) const = 0;

    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const = 0;

    virtual bool _needsPostProcessing(::BlockSource& region);

    virtual ~PoolElementStructurePiece() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
