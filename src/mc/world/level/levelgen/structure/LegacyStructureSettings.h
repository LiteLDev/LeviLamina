#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureSettings {

public:
    // prevent constructor by default
    LegacyStructureSettings& operator=(LegacyStructureSettings const&) = delete;

public:
    /**
     * @symbol ??0LegacyStructureSettings\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureSettings(); // NOLINT
    /**
     * @symbol ??0LegacyStructureSettings\@\@QEAA\@W4Mirror\@\@W4Rotation\@\@PEBVBlock\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI
    LegacyStructureSettings(enum class Mirror, enum class Rotation, class Block const*, class BoundingBox const&); // NOLINT
    /**
     * @symbol ??0LegacyStructureSettings\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LegacyStructureSettings(class LegacyStructureSettings const&); // NOLINT
    /**
     * @symbol ?addSwapAuxValue\@LegacyStructureSettings\@\@QEAAXHH\@Z
     */
    MCAPI void addSwapAuxValue(int, int); // NOLINT
    /**
     * @symbol ?getBoundingBox\@LegacyStructureSettings\@\@QEAAAEBVBoundingBox\@\@XZ
     */
    MCAPI class BoundingBox const& getBoundingBox(); // NOLINT
    /**
     * @symbol ?getMirror\@LegacyStructureSettings\@\@QEBAAEBW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror const& getMirror() const; // NOLINT
    /**
     * @symbol ?getRefPos\@LegacyStructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getRefPos() const; // NOLINT
    /**
     * @symbol ?getRotation\@LegacyStructureSettings\@\@QEBAAEBW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation const& getRotation() const; // NOLINT
    /**
     * @symbol ?getSwappedBlock\@LegacyStructureSettings\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@AEBV2\@\@Z
     */
    MCAPI class Block const& getSwappedBlock(class BlockPalette const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?placeWaterBelowSeaLevel\@LegacyStructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void placeWaterBelowSeaLevel(bool); // NOLINT
    /**
     * @symbol
     * ?setBlockRules\@LegacyStructureSettings\@\@QEAAXPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*); // NOLINT
    /**
     * @symbol
     * ?setBlockTagRules\@LegacyStructureSettings\@\@QEAAXPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const*); // NOLINT
    /**
     * @symbol ?setBoundingBox\@LegacyStructureSettings\@\@QEAAXAEBVBoundingBox\@\@\@Z
     */
    MCAPI void setBoundingBox(class BoundingBox const&); // NOLINT
    /**
     * @symbol ?setIgnoreBlock\@LegacyStructureSettings\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setIgnoreBlock(class Block const*); // NOLINT
    /**
     * @symbol ?setIntegrity\@LegacyStructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrity(float); // NOLINT
    /**
     * @symbol ?setMirror\@LegacyStructureSettings\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror); // NOLINT
    /**
     * @symbol ?setProjection\@LegacyStructureSettings\@\@QEAAXW4Projection\@\@\@Z
     */
    MCAPI void setProjection(enum class Projection); // NOLINT
    /**
     * @symbol ?setRefPos\@LegacyStructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setRefPos(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setRotation\@LegacyStructureSettings\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation); // NOLINT
    /**
     * @symbol ?setSeed\@LegacyStructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setSeed(unsigned int); // NOLINT
    /**
     * @symbol ?updateBoundingBoxFromChunkPos\@LegacyStructureSettings\@\@QEAAXXZ
     */
    MCAPI void updateBoundingBoxFromChunkPos(); // NOLINT
    /**
     * @symbol ??1LegacyStructureSettings\@\@QEAA\@XZ
     */
    MCAPI ~LegacyStructureSettings(); // NOLINT
    /**
     * @symbol ?INTEGRITY_MAX\@LegacyStructureSettings\@\@2MB
     */
    MCAPI static float const INTEGRITY_MAX; // NOLINT
    /**
     * @symbol ?INTEGRITY_MIN\@LegacyStructureSettings\@\@2MB
     */
    MCAPI static float const INTEGRITY_MIN; // NOLINT
    /**
     * @symbol ?MAX_STRUCTURE_SIZE\@LegacyStructureSettings\@\@2HB
     */
    MCAPI static int const MAX_STRUCTURE_SIZE; // NOLINT
};
