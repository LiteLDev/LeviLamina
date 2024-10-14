#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

class LegacyJigsawPlacement {
public:
    // prevent constructor by default
    LegacyJigsawPlacement& operator=(LegacyJigsawPlacement const&);
    LegacyJigsawPlacement(LegacyJigsawPlacement const&);
    LegacyJigsawPlacement();

public:
    // NOLINTBEGIN
    MCAPI LegacyJigsawPlacement(
        int maxDepth,
        std::function<std::unique_ptr<
            class
            PoolElementStructurePiece>(class StructurePoolElement const&, class BlockPos const&, ::Rotation const&, int, struct JigsawJunction&, class BoundingBox const&, class BlockPos const&)>
            factory
    );

    MCAPI void addPieces(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class StructurePoolElement const&                   initialElement,
        class Random&                                       random,
        class BlockPos const&                               position,
        ::Rotation const&                                   rotation,
        class JigsawStructureRegistry const&                pools,
        class Dimension&                                    dimension
    );

    MCAPI ~LegacyJigsawPlacement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addPiece(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class PoolElementStructurePiece const&              sourcePiece,
        class Random&                                       random,
        class BlockPos const&                               position,
        ::Rotation const&                                   rotation,
        class JigsawStructureRegistry const&                pools,
        class Dimension&                                    dimension,
        class BlockVolume&                                  box,
        class BlockPos const&                               refPos
    );

    MCAPI bool _tryPlacingPiece(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class PoolElementStructurePiece const&              sourcePiece,
        class Random&                                       random,
        class JigsawBlockInfo const&                        sourceJigsaw,
        class BoundingBox const&                            sourceBB,
        std::vector<class BoundingBox>&                     sourceInternalBBs,
        class BlockPos const&                               attachPos,
        class StructureTemplatePool const*                  targetPool,
        class JigsawStructureRegistry const&                pools,
        class Dimension&                                    dimension,
        class BlockVolume&                                  box,
        class BlockPos const&                               refPos
    );

    MCAPI static std::shared_ptr<bool> _setTerrainAdjustment(
        ::AdjustmentEffect           adjustmentEffect,
        class BoundingBox const&     bb,
        struct JigsawJunction const& junction,
        class Dimension&             dimension
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
