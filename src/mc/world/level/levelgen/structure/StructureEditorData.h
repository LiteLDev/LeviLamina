#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureEditorData {

public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&) = delete;

public:
    /**
     * @symbol ??0StructureEditorData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureEditorData(class StructureEditorData&&); // NOLINT
    /**
     * @symbol ??0StructureEditorData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI StructureEditorData(class StructureEditorData const&); // NOLINT
    /**
     * @symbol ??0StructureEditorData\@\@QEAA\@XZ
     */
    MCAPI StructureEditorData(); // NOLINT
    /**
     * @symbol
     * ?getAnimationModeAsString\@StructureEditorData\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAnimationModeAsString() const; // NOLINT
    /**
     * @symbol ?getAnimationSeconds\@StructureEditorData\@\@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const; // NOLINT
    /**
     * @symbol ?getIgnoreBlocks\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const; // NOLINT
    /**
     * @symbol ?getIgnoreEntities\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const; // NOLINT
    /**
     * @symbol ?getIncludePlayers\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIncludePlayers() const; // NOLINT
    /**
     * @symbol ?getIntegritySeed\@StructureEditorData\@\@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const; // NOLINT
    /**
     * @symbol ?getIntegrityValue\@StructureEditorData\@\@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const; // NOLINT
    /**
     * @symbol ?getIsWaterLogged\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIsWaterLogged() const; // NOLINT
    /**
     * @symbol ?getMirror\@StructureEditorData\@\@QEBA?AW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror getMirror() const; // NOLINT
    /**
     * @symbol ?getPivot\@StructureEditorData\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPivot() const; // NOLINT
    /**
     * @symbol ?getRedstoneSaveMode\@StructureEditorData\@\@QEBA?AW4StructureRedstoneSaveMode\@\@XZ
     */
    MCAPI enum class StructureRedstoneSaveMode getRedstoneSaveMode() const; // NOLINT
    /**
     * @symbol ?getRotation\@StructureEditorData\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const; // NOLINT
    /**
     * @symbol ?getShowBoundingBox\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getShowBoundingBox() const; // NOLINT
    /**
     * @symbol ?getStructureBlockType\@StructureEditorData\@\@QEBA?AW4StructureBlockType\@\@XZ
     */
    MCAPI enum class StructureBlockType getStructureBlockType() const; // NOLINT
    /**
     * @symbol
     * ?getStructureName\@StructureEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getStructureName() const; // NOLINT
    /**
     * @symbol ?getStructureOffset\@StructureEditorData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getStructureOffset() const; // NOLINT
    /**
     * @symbol ?getStructureSettings\@StructureEditorData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const& getStructureSettings() const; // NOLINT
    /**
     * @symbol ?getStructureSize\@StructureEditorData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getStructureSize() const; // NOLINT
    /**
     * @symbol ?load\@StructureEditorData\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?save\@StructureEditorData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool); // NOLINT
    /**
     * @symbol ?setAnimationMode\@StructureEditorData\@\@QEAAXW4AnimationMode\@\@\@Z
     */
    MCAPI void setAnimationMode(enum class AnimationMode); // NOLINT
    /**
     * @symbol ?setAnimationSeconds\@StructureEditorData\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationSeconds(float); // NOLINT
    /**
     * @symbol ?setAnimationTicks\@StructureEditorData\@\@QEAAXI\@Z
     */
    MCAPI void setAnimationTicks(unsigned int); // NOLINT
    /**
     * @symbol ?setIgnoreBlocks\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlocks(bool); // NOLINT
    /**
     * @symbol ?setIgnoreEntities\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreEntities(bool); // NOLINT
    /**
     * @symbol ?setIntegritySeed\@StructureEditorData\@\@QEAAXI\@Z
     */
    MCAPI void setIntegritySeed(unsigned int); // NOLINT
    /**
     * @symbol ?setIntegrityValue\@StructureEditorData\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrityValue(float); // NOLINT
    /**
     * @symbol ?setIsWaterLogged\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWaterLogged(bool); // NOLINT
    /**
     * @symbol ?setLastTouchedByPlayerID\@StructureEditorData\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setMirror\@StructureEditorData\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror); // NOLINT
    /**
     * @symbol ?setRotation\@StructureEditorData\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation); // NOLINT
    /**
     * @symbol ?setShowBoundingBox\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setShowBoundingBox(bool); // NOLINT
    /**
     * @symbol ?setStructureBlockType\@StructureEditorData\@\@QEAAXW4StructureBlockType\@\@\@Z
     */
    MCAPI void setStructureBlockType(enum class StructureBlockType); // NOLINT
    /**
     * @symbol
     * ?setStructureName\@StructureEditorData\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setStructureName(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?setStructureOffset\@StructureEditorData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureOffset(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setStructureSize\@StructureEditorData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureSize(class BlockPos const&); // NOLINT
    /**
     * @symbol ??1StructureEditorData\@\@QEAA\@XZ
     */
    MCAPI ~StructureEditorData(); // NOLINT
    /**
     * @symbol ?getOrientedBounds\@StructureEditorData\@\@SA?AVBlockPos\@\@AEBV2\@W4Rotation\@\@\@Z
     */
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const&, enum class Rotation); // NOLINT
    /**
     * @symbol
     * ?DEFAULT_EXPORT_NAME\@StructureEditorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_EXPORT_NAME; // NOLINT
    /**
     * @symbol
     * ?DEFAULT_STRUCTURE_NAMESPACE\@StructureEditorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE; // NOLINT
    /**
     * @symbol ?MAX_STRUCTURE_OFFSET\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET; // NOLINT
    /**
     * @symbol ?MIN_STRUCTURE_OFFSET\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET; // NOLINT
    /**
     * @symbol ?MIN_STRUCTURE_SIZE\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE; // NOLINT
    /**
     * @symbol ?NAMESPACE_DELIMITER\@StructureEditorData\@\@2DB
     */
    MCAPI static char const NAMESPACE_DELIMITER; // NOLINT

    // private:

private:
    /**
     * @symbol ?DEFAULT_STRUCTURE_TYPE\@StructureEditorData\@\@0W4StructureBlockType\@\@B
     */
    MCAPI static enum class StructureBlockType const DEFAULT_STRUCTURE_TYPE; // NOLINT
};
