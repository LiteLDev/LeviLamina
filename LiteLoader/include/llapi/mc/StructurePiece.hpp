/**
 * @file  StructurePiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePiece.
 *
 */
class StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPIECE
public:
    class StructurePiece& operator=(class StructurePiece const &) = delete;
    StructurePiece(class StructurePiece const &) = delete;
    StructurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructurePiece();
    /**
     * @hash   501362989
     * @vftbl  1
     * @symbol  ?moveBoundingBox\@StructurePiece\@\@UEAAXHHH\@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @hash   -895189920
     * @vftbl  2
     * @symbol  ?getType\@StructurePiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   -1157967712
     * @vftbl  3
     * @symbol  ?addChildren\@StructurePiece\@\@UEAAXAEAV1\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   178103619
     * @vftbl  4
     * @symbol  ?postProcess\@TemplateStructurePiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &) = 0;
    /**
     * @hash   -740337948
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@StructurePiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -2015397319
     * @vftbl  6
     * @symbol  ?isInInvalidLocation\@StructurePiece\@\@UEAA_NAEAVBlockSource\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool isInInvalidLocation(class BlockSource &, class BoundingBox const &);
    /**
     * @hash   1401936605
     * @vftbl  7
     * @symbol  ?getWorldX\@StructurePiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldX(int, int);
    /**
     * @hash   295823871
     * @vftbl  8
     * @symbol  ?getWorldZ\@StructurePiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldZ(int, int);
    /**
     * @hash   1123746429
     * @vftbl  9
     * @symbol  ?placeBlock\@StructurePiece\@\@UEAAXAEAVBlockSource\@\@AEBVBlock\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    virtual void placeBlock(class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    /**
     * @hash   -1866965274
     * @vftbl  10
     * @symbol  ?canBeReplaced\@StructurePiece\@\@UEAA_NAEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @hash   -92914132
     * @vftbl  11
     * @symbol  ?generateBox\@StructurePiece\@\@UEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHHAEBVBlock\@\@2_N\@Z
     */
    virtual void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, class Block const &, bool);
    /**
     * @hash   1704178024
     * @vftbl  12
     * @symbol  ?addHardcodedSpawnAreas\@StructurePiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @hash   -1761008169
     * @symbol  ?_getWorldPos\@StructurePiece\@\@QEAA?AVBlockPos\@\@HHH\@Z
     */
    MCAPI class BlockPos _getWorldPos(int, int, int);
    /**
     * @hash   -988909170
     * @symbol  ?addTerrainAdjustmentToken\@StructurePiece\@\@QEAAXV?$shared_ptr\@_N\@std\@\@\@Z
     */
    MCAPI void addTerrainAdjustmentToken(class std::shared_ptr<bool>);
    /**
     * @hash   -827851893
     * @symbol  ?generateAirBox\@StructurePiece\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHH\@Z
     */
    MCAPI void generateAirBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int);
    /**
     * @hash   1300389506
     * @symbol  ?generateBox\@StructurePiece\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHH_NAEAVRandom\@\@AEBVBlockSelector\@\@\@Z
     */
    MCAPI void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, bool, class Random &, class BlockSelector const &);
    /**
     * @hash   -1506650530
     * @symbol  ?generateMaybeBox\@StructurePiece\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@MHHHHHHAEBVBlock\@\@3_N4\@Z
     */
    MCAPI void generateMaybeBox(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, int, int, int, class Block const &, class Block const &, bool, bool);
    /**
     * @hash   1513015227
     * @symbol  ?generateUpperHalfSphere\@StructurePiece\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHHAEBVBlock\@\@_N\@Z
     */
    MCAPI void generateUpperHalfSphere(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, bool);
    /**
     * @hash   27431179
     * @symbol  ?getBlock\@StructurePiece\@\@QEAAAEBVBlock\@\@AEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI class Block const & getBlock(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @hash   422295139
     * @symbol  ?getOrientationData\@StructurePiece\@\@QEAAGPEBVBlock\@\@G\@Z
     */
    MCAPI unsigned short getOrientationData(class Block const *, unsigned short);
    /**
     * @hash   1351017635
     * @symbol  ?getWorldY\@StructurePiece\@\@QEAAHH\@Z
     */
    MCAPI int getWorldY(int);
    /**
     * @hash   624966356
     * @symbol  ?isAboveGround\@StructurePiece\@\@QEAA_NHHHAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isAboveGround(int, int, int, class BlockSource &);
    /**
     * @hash   -1077027125
     * @symbol  ?isAir\@StructurePiece\@\@QEAA_NAEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI bool isAir(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @hash   -82783743
     * @symbol  ?isReplaceableBlock\@StructurePiece\@\@QEAA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isReplaceableBlock(class Block const &);
    /**
     * @hash   1400796051
     * @symbol  ?maybeGenerateBlock\@StructurePiece\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@MHHHAEBVBlock\@\@\@Z
     */
    MCAPI void maybeGenerateBlock(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, class Block const &);
    /**
     * @hash   -1444202579
     * @symbol  ?maybeGenerateBlockIfNotFloating\@StructurePiece\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@MHHHAEBVBlock\@\@\@Z
     */
    MCAPI void maybeGenerateBlockIfNotFloating(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int, class Block const &);
    /**
     * @hash   1100863260
     * @symbol  ?findCollisionPiece\@StructurePiece\@\@SAPEAV1\@AEBV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI static class StructurePiece * findCollisionPiece(std::vector<std::unique_ptr<class StructurePiece>> const &, class BoundingBox const &);
    /**
     * @hash   1015908381
     * @symbol  ?getTotalWeight\@StructurePiece\@\@SAHAEBV?$vector\@VPieceWeight\@\@V?$allocator\@VPieceWeight\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const &);

};