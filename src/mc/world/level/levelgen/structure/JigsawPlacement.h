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
    // symbol:
    // ??0JigsawPlacement@@QEAA@_K0AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VPoolElementStructurePiece@@U?$default_delete@VPoolElementStructurePiece@@@std@@@std@@AEBVStructurePoolElement@@AEBVBlockPos@@AEBW4Rotation@@HAEAUJigsawJunction@@AEBVBoundingBox@@1@Z@2@AEAVRandom@@AEBVJigsawStructureRegistry@@AEAVDimension@@@Z
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

    // symbol:
    // ?addPieces@JigsawPlacement@@QEAAXAEBVStructurePoolElement@@AEBVBlockPos@@AEBW4Rotation@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPoolAliasLookup@PoolAliasBinding@@@Z
    MCAPI void
    addPieces(class StructurePoolElement const&, class BlockPos const&, ::Rotation const&, std::string_view, class PoolAliasBinding::PoolAliasLookup const&);

    // symbol: ??1JigsawPlacement@@QEAA@XZ
    MCAPI ~JigsawPlacement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addPiece@JigsawPlacement@@AEAAXAEBVPoolElementStructurePiece@@AEBVBlockPos@@AEBW4Rotation@@1_KAEBVPoolAliasLookup@PoolAliasBinding@@@Z
    MCAPI void
    _addPiece(class PoolElementStructurePiece const&, class BlockPos const&, ::Rotation const&, class BlockPos const&, uint64, class PoolAliasBinding::PoolAliasLookup const&);

    // symbol:
    // ?_findLocalAnchorOffset@JigsawPlacement@@AEBA?AVBlockPos@@AEBVStructurePoolElement@@AEBV2@AEBW4Rotation@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class BlockPos _findLocalAnchorOffset(
        class StructurePoolElement const& initialElement,
        class BlockPos const&,
        ::Rotation const& rotation,
        std::string_view
    ) const;

    // symbol:
    // ?_setTerrainAdjustment@JigsawPlacement@@AEBA?AV?$shared_ptr@_N@std@@W4AdjustmentEffect@@AEBVBoundingBox@@AEBUJigsawJunction@@@Z
    MCAPI std::shared_ptr<bool>
    _setTerrainAdjustment(::AdjustmentEffect, class BoundingBox const& bb, struct JigsawJunction const& junction) const;

    // symbol:
    // ?_tryPlacingPiece@JigsawPlacement@@AEAA_NAEBVPoolElementStructurePiece@@AEBVBoundingBox@@AEBVJigsawBlockInfo@@AEBVBlockPos@@PEBVStructureTemplatePool@@3_KAEBVPoolAliasLookup@PoolAliasBinding@@@Z
    MCAPI bool
    _tryPlacingPiece(class PoolElementStructurePiece const&, class BoundingBox const&, class JigsawBlockInfo const&, class BlockPos const&, class StructureTemplatePool const*, class BlockPos const&, uint64, class PoolAliasBinding::PoolAliasLookup const&);

    // NOLINTEND
};
