/**
 * @file  LegacyStructureSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureSettings.
 *
 */
class LegacyStructureSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURESETTINGS
public:
    class LegacyStructureSettings& operator=(class LegacyStructureSettings const &) = delete;
    LegacyStructureSettings(class LegacyStructureSettings const &) = delete;
#endif

public:
    /**
     * @hash   738568505
     * @symbol  ??0LegacyStructureSettings\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureSettings();
    /**
     * @hash   689961706
     * @symbol  ??0LegacyStructureSettings\@\@QEAA\@W4Mirror\@\@W4Rotation\@\@PEBVBlock\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI LegacyStructureSettings(enum class Mirror, enum class Rotation, class Block const *, class BoundingBox const &);
    /**
     * @hash   982707695
     * @symbol  ?addSwapAuxValue\@LegacyStructureSettings\@\@QEAAXHH\@Z
     */
    MCAPI void addSwapAuxValue(int, int);
    /**
     * @hash   -2034599946
     * @symbol  ?getBoundingBox\@LegacyStructureSettings\@\@QEAAAEBVBoundingBox\@\@XZ
     */
    MCAPI class BoundingBox const & getBoundingBox();
    /**
     * @hash   -171285539
     * @symbol  ?getIgnoreBlock\@LegacyStructureSettings\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getIgnoreBlock() const;
    /**
     * @hash   -2038814236
     * @symbol  ?getMirror\@LegacyStructureSettings\@\@QEBAAEBW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror const & getMirror() const;
    /**
     * @hash   1973073826
     * @symbol  ?getRefPos\@LegacyStructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getRefPos() const;
    /**
     * @hash   746326516
     * @symbol  ?getRotation\@LegacyStructureSettings\@\@QEBAAEBW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation const & getRotation() const;
    /**
     * @hash   235874291
     * @symbol  ?getSwappedBlock\@LegacyStructureSettings\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@AEBV2\@\@Z
     */
    MCAPI class Block const & getSwappedBlock(class BlockPalette const &, class Block const &) const;
    /**
     * @hash   -806166442
     * @symbol  ?isIgnoreJigsawBlocks\@LegacyStructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool isIgnoreJigsawBlocks() const;
    /**
     * @hash   -1624942652
     * @symbol  ?isIgnoreStructureBlocks\@LegacyStructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool isIgnoreStructureBlocks() const;
    /**
     * @hash   258895524
     * @symbol  ?isPlacingWaterBelowSeaLevel\@LegacyStructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool isPlacingWaterBelowSeaLevel() const;
    /**
     * @hash   -31496488
     * @symbol  ?placeWaterBelowSeaLevel\@LegacyStructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void placeWaterBelowSeaLevel(bool);
    /**
     * @hash   -1995776610
     * @symbol  ?setBlockRules\@LegacyStructureSettings\@\@QEAAXPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const *);
    /**
     * @hash   -1528317724
     * @symbol  ?setBlockTagRules\@LegacyStructureSettings\@\@QEAAXPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const *);
    /**
     * @hash   465274042
     * @symbol  ?setBoundingBox\@LegacyStructureSettings\@\@QEAAXAEBVBoundingBox\@\@\@Z
     */
    MCAPI void setBoundingBox(class BoundingBox const &);
    /**
     * @hash   1879801651
     * @symbol  ?setIgnoreBlock\@LegacyStructureSettings\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setIgnoreBlock(class Block const *);
    /**
     * @hash   2019523344
     * @symbol  ?setIntegrity\@LegacyStructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrity(float);
    /**
     * @hash   -910700540
     * @symbol  ?setMirror\@LegacyStructureSettings\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @hash   1591981492
     * @symbol  ?setProjection\@LegacyStructureSettings\@\@QEAAXW4Projection\@\@\@Z
     */
    MCAPI void setProjection(enum class Projection);
    /**
     * @hash   -1537805034
     * @symbol  ?setRefPos\@LegacyStructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setRefPos(class BlockPos const &);
    /**
     * @hash   1902315606
     * @symbol  ?setRotation\@LegacyStructureSettings\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @hash   1423493450
     * @symbol  ?setSeed\@LegacyStructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setSeed(unsigned int);
    /**
     * @hash   206247139
     * @symbol  ?updateBoundingBoxFromChunkPos\@LegacyStructureSettings\@\@QEAAXXZ
     */
    MCAPI void updateBoundingBoxFromChunkPos();
    /**
     * @hash   -1430716359
     * @symbol  ??1LegacyStructureSettings\@\@QEAA\@XZ
     */
    MCAPI ~LegacyStructureSettings();
    /**
     * @hash   1713641821
     * @symbol  ?INTEGRITY_MAX\@LegacyStructureSettings\@\@2MB
     */
    MCAPI static float const INTEGRITY_MAX;
    /**
     * @hash   -475517251
     * @symbol  ?INTEGRITY_MIN\@LegacyStructureSettings\@\@2MB
     */
    MCAPI static float const INTEGRITY_MIN;
    /**
     * @hash   658283895
     * @symbol  ?MAX_STRUCTURE_SIZE\@LegacyStructureSettings\@\@2HB
     */
    MCAPI static int const MAX_STRUCTURE_SIZE;

};