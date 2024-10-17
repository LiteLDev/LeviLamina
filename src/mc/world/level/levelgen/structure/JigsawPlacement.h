#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

class JigsawPlacement {
public:
    // prevent constructor by default
    JigsawPlacement& operator=(JigsawPlacement const&);
    JigsawPlacement(JigsawPlacement const&);
    JigsawPlacement();

public:
    // NOLINTBEGIN
    MCAPI JigsawPlacement(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        std::vector<std::unique_ptr<class StructurePiece>>& pieceList,
        std::function<std::unique_ptr<
            class
            PoolElementStructurePiece>(class StructurePoolElement const&, class BlockPos const&, ::Rotation const&, int, struct JigsawJunction&, class BoundingBox const&, class BlockPos const&)>
                                             factory,
        class Random&                        random,
        class JigsawStructureRegistry const& pools,
        class Dimension&                     dimension
    );

    MCAPI void addPieces(
        class StructurePoolElement const&              initialElement,
        class BlockPos const&                          startPosition,
        ::Rotation const&                              rotation,
        std::string_view                               startAnchorName,
        class PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCAPI ~JigsawPlacement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addPiece(
        class PoolElementStructurePiece const&         sourcePiece,
        class BlockPos const&                          position,
        ::Rotation const&                              rotation,
        class BlockPos const&                          refPos,
        uint64                                         contextDepth,
        class PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCAPI class BlockPos _findLocalAnchorOffset(
        class StructurePoolElement const& initialElement,
        class BlockPos const&             pieceCornerPosition,
        ::Rotation const&                 rotation,
        std::string_view                  startAnchorName
    ) const;

    MCAPI std::shared_ptr<bool> _setTerrainAdjustment(
        ::AdjustmentEffect           adjustmentEffect,
        class BoundingBox const&     bb,
        struct JigsawJunction const& junction
    ) const;

    MCAPI bool _tryPlacingPiece(
        class PoolElementStructurePiece const&         sourcePiece,
        class BoundingBox const&                       sourceBB,
        class JigsawBlockInfo const&                   sourceJigsaw,
        class BlockPos const&                          attachPos,
        class StructureTemplatePool const*             targetPool,
        class BlockPos const&                          refPos,
        uint64                                         contextDepth,
        class PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        std::vector<std::unique_ptr<class StructurePiece>>& pieceList,
        std::function<std::unique_ptr<
            class
            PoolElementStructurePiece>(class StructurePoolElement const&, class BlockPos const&, ::Rotation const&, int, struct JigsawJunction&, class BoundingBox const&, class BlockPos const&)>
                                             factory,
        class Random&                        random,
        class JigsawStructureRegistry const& pools,
        class Dimension&                     dimension
    );

    MCAPI void dtor$();

    // NOLINTEND
};
