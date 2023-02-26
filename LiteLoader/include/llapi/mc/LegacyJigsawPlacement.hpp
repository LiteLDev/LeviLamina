/**
 * @file  LegacyJigsawPlacement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyJigsawPlacement.
 *
 */
class LegacyJigsawPlacement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYJIGSAWPLACEMENT
public:
    class LegacyJigsawPlacement& operator=(class LegacyJigsawPlacement const &) = delete;
    LegacyJigsawPlacement(class LegacyJigsawPlacement const &) = delete;
    LegacyJigsawPlacement() = delete;
#endif

public:
    /**
     * @symbol  ??0LegacyJigsawPlacement\@\@QEAA\@HV?$function\@$$A6A?AV?$unique_ptr\@VPoolElementStructurePiece\@\@U?$default_delete\@VPoolElementStructurePiece\@\@\@std\@\@\@std\@\@AEBVStructurePoolElement\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@HAEAUJigsawJunction\@\@AEBVBoundingBox\@\@1\@Z\@std\@\@\@Z
     */
    MCAPI LegacyJigsawPlacement(int, class std::function<std::unique_ptr<class PoolElementStructurePiece> (class StructurePoolElement const &, class BlockPos const &, enum class Rotation const &, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos const &)>);
    /**
     * @symbol  ?addPieces\@LegacyJigsawPlacement\@\@QEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVStructurePoolElement\@\@AEAVRandom\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEBVJigsawStructureRegistry\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void addPieces(std::vector<std::unique_ptr<class StructurePiece>> &, class StructurePoolElement const &, class Random &, class BlockPos const &, enum class Rotation const &, class JigsawStructureRegistry const &, class Dimension &);
    /**
     * @symbol  ??1LegacyJigsawPlacement\@\@QEAA\@XZ
     */
    MCAPI ~LegacyJigsawPlacement();

//private:
    /**
     * @symbol  ?_addPiece\@LegacyJigsawPlacement\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVPoolElementStructurePiece\@\@AEAVRandom\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@AEBVJigsawStructureRegistry\@\@AEAVDimension\@\@AEAVBlockVolume\@\@3\@Z
     */
    MCAPI void _addPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class PoolElementStructurePiece const &, class Random &, class BlockPos const &, enum class Rotation const &, class JigsawStructureRegistry const &, class Dimension &, class BlockVolume &, class BlockPos const &);
    /**
     * @symbol  ?_tryPlacingPiece\@LegacyJigsawPlacement\@\@AEAA_NAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVPoolElementStructurePiece\@\@AEAVRandom\@\@AEBVJigsawBlockInfo\@\@AEBVBoundingBox\@\@AEAV?$vector\@VBoundingBox\@\@V?$allocator\@VBoundingBox\@\@\@std\@\@\@3\@AEBVBlockPos\@\@PEBVStructureTemplatePool\@\@AEBVJigsawStructureRegistry\@\@AEAVDimension\@\@AEAVBlockVolume\@\@6\@Z
     */
    MCAPI bool _tryPlacingPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class PoolElementStructurePiece const &, class Random &, class JigsawBlockInfo const &, class BoundingBox const &, std::vector<class BoundingBox> &, class BlockPos const &, class StructureTemplatePool const *, class JigsawStructureRegistry const &, class Dimension &, class BlockVolume &, class BlockPos const &);
    /**
     * @symbol  ?_setTerrainAdjustment\@LegacyJigsawPlacement\@\@CA?AV?$shared_ptr\@_N\@std\@\@W4AdjustmentEffect\@\@AEBVBoundingBox\@\@AEBUJigsawJunction\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static class std::shared_ptr<bool> _setTerrainAdjustment(enum class AdjustmentEffect, class BoundingBox const &, struct JigsawJunction const &, class Dimension &);

private:

};