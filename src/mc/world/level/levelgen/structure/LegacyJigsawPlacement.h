#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/enums/Rotation.h"

class LegacyJigsawPlacement {
public:
    // prevent constructor by default
    LegacyJigsawPlacement& operator=(LegacyJigsawPlacement const&);
    LegacyJigsawPlacement(LegacyJigsawPlacement const&);
    LegacyJigsawPlacement();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0LegacyJigsawPlacement@@QEAA@HV?$function@$$A6A?AV?$unique_ptr@VPoolElementStructurePiece@@U?$default_delete@VPoolElementStructurePiece@@@std@@@std@@AEBVStructurePoolElement@@AEBVBlockPos@@AEBW4Rotation@@HAEAUJigsawJunction@@AEBVBoundingBox@@1@Z@std@@@Z
    MCAPI LegacyJigsawPlacement(
        int maxDepth,
        std::function<std::unique_ptr<
            class
            PoolElementStructurePiece>(class StructurePoolElement const&, class BlockPos const&, ::Rotation const&, int, struct JigsawJunction&, class BoundingBox const&, class BlockPos const&)>
            factory
    );

    // symbol:
    // ?addPieces@LegacyJigsawPlacement@@QEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVStructurePoolElement@@AEAVRandom@@AEBVBlockPos@@AEBW4Rotation@@AEBVJigsawStructureRegistry@@AEAVDimension@@@Z
    MCAPI void addPieces(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class StructurePoolElement const&                   initialElement,
        class Random&                                       random,
        class BlockPos const&                               position,
        ::Rotation const&                                   rotation,
        class JigsawStructureRegistry const&                pools,
        class Dimension&                                    dimension
    );

    // symbol: ??1LegacyJigsawPlacement@@QEAA@XZ
    MCAPI ~LegacyJigsawPlacement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addPiece@LegacyJigsawPlacement@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVPoolElementStructurePiece@@AEAVRandom@@AEBVBlockPos@@AEBW4Rotation@@AEBVJigsawStructureRegistry@@AEAVDimension@@AEAVBlockVolume@@3@Z
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

    // symbol:
    // ?_tryPlacingPiece@LegacyJigsawPlacement@@AEAA_NAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVPoolElementStructurePiece@@AEAVRandom@@AEBVJigsawBlockInfo@@AEBVBoundingBox@@AEAV?$vector@VBoundingBox@@V?$allocator@VBoundingBox@@@std@@@3@AEBVBlockPos@@PEBVStructureTemplatePool@@AEBVJigsawStructureRegistry@@AEAVDimension@@AEAVBlockVolume@@6@Z
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

    // symbol:
    // ?_setTerrainAdjustment@LegacyJigsawPlacement@@CA?AV?$shared_ptr@_N@std@@W4AdjustmentEffect@@AEBVBoundingBox@@AEBUJigsawJunction@@AEAVDimension@@@Z
    MCAPI static std::shared_ptr<bool> _setTerrainAdjustment(
        ::AdjustmentEffect,
        class BoundingBox const&     bb,
        struct JigsawJunction const& junction,
        class Dimension&             dimension
    );

    // NOLINTEND
};
