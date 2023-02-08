/**
 * @file  JigsawPlacement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawPlacement.
 *
 */
class JigsawPlacement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWPLACEMENT
public:
    class JigsawPlacement& operator=(class JigsawPlacement const &) = delete;
    JigsawPlacement(class JigsawPlacement const &) = delete;
    JigsawPlacement() = delete;
#endif

public:
    /**
     * @hash   -231528878
     * @symbol  ??0JigsawPlacement\@\@QEAA\@_K0AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VPoolElementStructurePiece\@\@U?$default_delete\@VPoolElementStructurePiece\@\@\@std\@\@\@std\@\@AEBVStructurePoolElement\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@HAEAUJigsawJunction\@\@AEBVBoundingBox\@\@1\@Z\@2\@AEAVRandom\@\@AEBVJigsawStructureRegistry\@\@AEAVDimension\@\@\@Z
     */
    MCAPI JigsawPlacement(unsigned __int64, unsigned __int64, std::vector<std::unique_ptr<class StructurePiece>> &, class std::function<std::unique_ptr<class PoolElementStructurePiece> (class StructurePoolElement const &, class BlockPos const &, enum class Rotation const &, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos const &)>, class Random &, class JigsawStructureRegistry const &, class Dimension &);
    /**
     * @hash   -1450275889
     * @symbol  ?addPieces\@JigsawPlacement\@\@QEAAXAEBVStructurePoolElement\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addPieces(class StructurePoolElement const &, class BlockPos const &, enum class Rotation const &, class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @hash   -662288512
     * @symbol  ??1JigsawPlacement\@\@QEAA\@XZ
     */
    MCAPI ~JigsawPlacement();

//private:
    /**
     * @hash   1469935190
     * @symbol  ?_addPiece\@JigsawPlacement\@\@AEAAXAEBVPoolElementStructurePiece\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@1_K\@Z
     */
    MCAPI void _addPiece(class PoolElementStructurePiece const &, class BlockPos const &, enum class Rotation const &, class BlockPos const &, unsigned __int64);
    /**
     * @hash   -534769434
     * @symbol  ?_findLocalAnchorOffset\@JigsawPlacement\@\@AEBA?AVBlockPos\@\@AEBVStructurePoolElement\@\@AEBV2\@AEBW4Rotation\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class BlockPos _findLocalAnchorOffset(class StructurePoolElement const &, class BlockPos const &, enum class Rotation const &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @hash   -1565537253
     * @symbol  ?_setTerrainAdjustment\@JigsawPlacement\@\@AEBA?AV?$shared_ptr\@_N\@std\@\@W4AdjustmentEffect\@\@AEBVBoundingBox\@\@AEBUJigsawJunction\@\@\@Z
     */
    MCAPI class std::shared_ptr<bool> _setTerrainAdjustment(enum class AdjustmentEffect, class BoundingBox const &, struct JigsawJunction const &) const;
    /**
     * @hash   1370773175
     * @symbol  ?_tryPlacingPiece\@JigsawPlacement\@\@AEAA_NAEBVPoolElementStructurePiece\@\@AEBVBoundingBox\@\@AEBVJigsawBlockInfo\@\@AEBVBlockPos\@\@PEBVStructureTemplatePool\@\@3_K\@Z
     */
    MCAPI bool _tryPlacingPiece(class PoolElementStructurePiece const &, class BoundingBox const &, class JigsawBlockInfo const &, class BlockPos const &, class StructureTemplatePool const *, class BlockPos const &, unsigned __int64);

private:

};