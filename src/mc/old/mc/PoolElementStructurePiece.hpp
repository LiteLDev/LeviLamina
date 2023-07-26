/**
 * @file  PoolElementStructurePiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PoolElementStructurePiece.
 *
 */
class PoolElementStructurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POOLELEMENTSTRUCTUREPIECE
public:
    class PoolElementStructurePiece& operator=(class PoolElementStructurePiece const &) = delete;
    PoolElementStructurePiece(class PoolElementStructurePiece const &) = delete;
    PoolElementStructurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PoolElementStructurePiece();
    /**
     * @vftbl  1
     * @symbol  ?moveBoundingBox\@PoolElementStructurePiece\@\@UEAAXHHH\@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@PoolElementStructurePiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@PoolElementStructurePiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  13
     * @symbol  ?generateHeightAtPosition\@VillagePiece\@\@UEBAHAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual int generateHeightAtPosition(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &) const = 0;
    /**
     * @vftbl  14
     * @symbol  ?getSupportBlock\@VillagePiece\@\@UEBAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const * getSupportBlock(class BlockSource &, class BlockPos const &, class Block const &) const = 0;
    /**
     * @vftbl  15
     * @symbol  ?getBeardStabilizeBlock\@VillagePiece\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const & getBeardStabilizeBlock(class Block const &) const = 0;
    /**
     * @vftbl  16
     * @symbol  ?getTerrainAdjustmentEffect\@VillagePiece\@\@UEBA?AW4AdjustmentEffect\@\@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const = 0;
    /**
     * @vftbl  17
     * @symbol  ?_needsPostProcessing\@PoolElementStructurePiece\@\@MEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool _needsPostProcessing(class BlockSource &);
    /**
     * @symbol  ??0PoolElementStructurePiece\@\@QEAA\@AEBVStructurePoolElement\@\@VBlockPos\@\@W4Rotation\@\@HAEAUJigsawJunction\@\@AEBVBoundingBox\@\@1\@Z
     */
    MCAPI PoolElementStructurePiece(class StructurePoolElement const &, class BlockPos, enum class Rotation, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos);
    /**
     * @symbol  ?getElement\@PoolElementStructurePiece\@\@QEBAAEBVStructurePoolElement\@\@XZ
     */
    MCAPI class StructurePoolElement const & getElement() const;
    /**
     * @symbol  ?getPosition\@PoolElementStructurePiece\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol  ?setReferencePosition\@PoolElementStructurePiece\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setReferencePosition(class BlockPos const &);

};