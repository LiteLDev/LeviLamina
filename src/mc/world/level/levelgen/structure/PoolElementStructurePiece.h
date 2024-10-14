#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

class PoolElementStructurePiece : public ::StructurePiece {
public:
    // prevent constructor by default
    PoolElementStructurePiece& operator=(PoolElementStructurePiece const&);
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    PoolElementStructurePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PoolElementStructurePiece();

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 13
    virtual int
    generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>&)
        const = 0;

    // vIndex: 14
    virtual class Block const*
    getSupportBlock(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const = 0;

    // vIndex: 15
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const = 0;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const = 0;

    // vIndex: 17
    virtual bool _needsPostProcessing(class BlockSource& region);

    MCAPI PoolElementStructurePiece(
        class StructurePoolElement const& element,
        class BlockPos                    position,
        ::Rotation                        rotation,
        int                               genDepth,
        struct JigsawJunction&            junction,
        class BoundingBox const&          box,
        class BlockPos                    refPos
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool _needsPostProcessing$(class BlockSource& region);

    MCAPI void moveBoundingBox$(int dx, int dy, int dz);

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    MCAPI void postProcessMobsAt$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
