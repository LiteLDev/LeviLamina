#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/PoolAliasBinding.h"

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

    MCAPI void
    addPieces(class StructurePoolElement const&, class BlockPos const&, ::Rotation const&, std::string_view, class PoolAliasBinding::PoolAliasLookup const&);

    MCAPI ~JigsawPlacement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _addPiece(class PoolElementStructurePiece const&, class BlockPos const&, ::Rotation const&, class BlockPos const&, uint64, class PoolAliasBinding::PoolAliasLookup const&);

    MCAPI class BlockPos _findLocalAnchorOffset(
        class StructurePoolElement const& initialElement,
        class BlockPos const&,
        ::Rotation const& rotation,
        std::string_view
    ) const;

    MCAPI std::shared_ptr<bool>
    _setTerrainAdjustment(::AdjustmentEffect, class BoundingBox const& bb, struct JigsawJunction const& junction) const;

    MCAPI bool
    _tryPlacingPiece(class PoolElementStructurePiece const&, class BoundingBox const&, class JigsawBlockInfo const&, class BlockPos const&, class StructureTemplatePool const*, class BlockPos const&, uint64, class PoolAliasBinding::PoolAliasLookup const&);

    // NOLINTEND
};
