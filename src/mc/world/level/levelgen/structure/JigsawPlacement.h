#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawPlacement {

public:
    // prevent constructor by default
    JigsawPlacement& operator=(JigsawPlacement const&) = delete;
    JigsawPlacement(JigsawPlacement const&)            = delete;
    JigsawPlacement()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0JigsawPlacement\@\@QEAA\@_K0AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VPoolElementStructurePiece\@\@U?$default_delete\@VPoolElementStructurePiece\@\@\@std\@\@\@std\@\@AEBVStructurePoolElement\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@HAEAUJigsawJunction\@\@AEBVBoundingBox\@\@1\@Z\@2\@AEAVRandom\@\@AEBVJigsawStructureRegistry\@\@AEAVDimension\@\@\@Z
     */
    MCAPI
    JigsawPlacement(uint64_t, uint64_t, std::vector<std::unique_ptr<class StructurePiece>>&, std::function<std::unique_ptr<class PoolElementStructurePiece>(class StructurePoolElement const&, class BlockPos const&, enum class Rotation const&, int, struct JigsawJunction&, class BoundingBox const&, class BlockPos const&)>, class Random&, class JigsawStructureRegistry const&, class Dimension&);
    /**
     * @symbol
     * ?addPieces\@JigsawPlacement\@\@QEAAXAEBVStructurePoolElement\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    addPieces(class StructurePoolElement const&, class BlockPos const&, enum class Rotation const&, std::string_view);
    /**
     * @symbol ??1JigsawPlacement\@\@QEAA\@XZ
     */
    MCAPI ~JigsawPlacement();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addPiece\@JigsawPlacement\@\@AEAAXAEBVPoolElementStructurePiece\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@1_K\@Z
     */
    MCAPI void _addPiece(
        class PoolElementStructurePiece const&,
        class BlockPos const&,
        enum class Rotation const&,
        class BlockPos const&,
        uint64_t
    );
    /**
     * @symbol
     * ?_findLocalAnchorOffset\@JigsawPlacement\@\@AEBA?AVBlockPos\@\@AEBVStructurePoolElement\@\@AEBV2\@AEBW4Rotation\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class BlockPos _findLocalAnchorOffset(
        class StructurePoolElement const&,
        class BlockPos const&,
        enum class Rotation const&,
        std::string_view
    ) const;
    /**
     * @symbol
     * ?_setTerrainAdjustment\@JigsawPlacement\@\@AEBA?AV?$shared_ptr\@_N\@std\@\@W4AdjustmentEffect\@\@AEBVBoundingBox\@\@AEBUJigsawJunction\@\@\@Z
     */
    MCAPI std::shared_ptr<bool>
    _setTerrainAdjustment(enum class AdjustmentEffect, class BoundingBox const&, struct JigsawJunction const&) const;
    /**
     * @symbol
     * ?_tryPlacingPiece\@JigsawPlacement\@\@AEAA_NAEBVPoolElementStructurePiece\@\@AEBVBoundingBox\@\@AEBVJigsawBlockInfo\@\@AEBVBlockPos\@\@PEBVStructureTemplatePool\@\@3_K\@Z
     */
    MCAPI bool _tryPlacingPiece(
        class PoolElementStructurePiece const&,
        class BoundingBox const&,
        class JigsawBlockInfo const&,
        class BlockPos const&,
        class StructureTemplatePool const*,
        class BlockPos const&,
        uint64_t
    );
    // NOLINTEND
};
