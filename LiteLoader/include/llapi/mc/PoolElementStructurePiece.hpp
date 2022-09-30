/**
 * @file  PoolElementStructurePiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~PoolElementStructurePiece();
    /**
     * @hash   1937797245
     * @vftbl  1
     * @symbol ?moveBoundingBox@PoolElementStructurePiece@@UEAAXHHH@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @hash   242433864
     * @vftbl  4
     * @symbol ?postProcess@PoolElementStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1301983204
     * @vftbl  5
     * @symbol ?postProcessMobsAt@PoolElementStructurePiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   830669207
     * @vftbl  13
     * @symbol ?generateHeightAtPosition@VillagePiece@@UEBAHAEBVBlockPos@@AEAVDimension@@AEAVBlockVolume@@AEAV?$unordered_map@VChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@std@@@3@@std@@@Z
     */
    virtual int generateHeightAtPosition(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &) const = 0;
    /**
     * @hash   -347100614
     * @vftbl  14
     * @symbol ?getSupportBlock@VillagePiece@@UEBAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
     */
    virtual class Block const * getSupportBlock(class BlockSource &, class BlockPos const &, class Block const &) const = 0;
    /**
     * @hash   598200728
     * @vftbl  15
     * @symbol ?getBeardStabilizeBlock@VillagePiece@@UEBAAEBVBlock@@AEBV2@@Z
     */
    virtual class Block const & getBeardStabilizeBlock(class Block const &) const = 0;
    /**
     * @hash   1228253391
     * @vftbl  16
     * @symbol ?getTerrainAdjustmentEffect@VillagePiece@@UEBA?AW4AdjustmentEffect@@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const = 0;
    /**
     * @hash   -1032969124
     * @vftbl  17
     * @symbol ?_needsPostProcessing@PoolElementStructurePiece@@MEAA_NAEAVBlockSource@@@Z
     */
    virtual bool _needsPostProcessing(class BlockSource &);
    /**
     * @hash   -1468735500
     * @symbol ??0PoolElementStructurePiece@@QEAA@AEBVStructurePoolElement@@VBlockPos@@W4Rotation@@HAEAUJigsawJunction@@AEBVBoundingBox@@1@Z
     */
    MCAPI PoolElementStructurePiece(class StructurePoolElement const &, class BlockPos, enum class Rotation, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos);
    /**
     * @hash   -356340244
     * @symbol ?getElement@PoolElementStructurePiece@@QEBAAEBVStructurePoolElement@@XZ
     */
    MCAPI class StructurePoolElement const & getElement() const;
    /**
     * @hash   898782438
     * @symbol ?getPosition@PoolElementStructurePiece@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   39056576
     * @symbol ?setReferencePosition@PoolElementStructurePiece@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setReferencePosition(class BlockPos const &);

};