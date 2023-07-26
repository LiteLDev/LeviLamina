#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureSettings {

public:
    // prevent constructor by default
    StructureSettings(StructureSettings const&) = delete;

public:
    /**
     * @symbol ??0StructureSettings\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureSettings(class StructureSettings&&); // NOLINT
    /**
     * @symbol ??0StructureSettings\@\@QEAA\@XZ
     */
    MCAPI StructureSettings(); // NOLINT
    /**
     * @symbol ?getAnimationMode\@StructureSettings\@\@QEBA?AW4AnimationMode\@\@XZ
     */
    MCAPI enum class AnimationMode getAnimationMode() const; // NOLINT
    /**
     * @symbol ?getAnimationSeconds\@StructureSettings\@\@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const; // NOLINT
    /**
     * @symbol ?getAnimationTicks\@StructureSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getAnimationTicks() const; // NOLINT
    /**
     * @symbol ?getIgnoreBlocks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const; // NOLINT
    /**
     * @symbol ?getIgnoreEntities\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const; // NOLINT
    /**
     * @symbol ?getIntegritySeed\@StructureSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const; // NOLINT
    /**
     * @symbol ?getIntegrityValue\@StructureSettings\@\@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const; // NOLINT
    /**
     * @symbol ?getLastTouchedByPlayerID\@StructureSettings\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getLastTouchedByPlayerID() const; // NOLINT
    /**
     * @symbol ?getMirror\@StructureSettings\@\@QEBA?AW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror getMirror() const; // NOLINT
    /**
     * @symbol
     * ?getPaletteName\@StructureSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getPaletteName() const; // NOLINT
    /**
     * @symbol ?getPivot\@StructureSettings\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPivot() const; // NOLINT
    /**
     * @symbol ?getRotation\@StructureSettings\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const; // NOLINT
    /**
     * @symbol ?getStructureOffset\@StructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getStructureOffset() const; // NOLINT
    /**
     * @symbol ?getStructureSize\@StructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getStructureSize() const; // NOLINT
    /**
     * @symbol ?isAnimated\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool isAnimated() const; // NOLINT
    /**
     * @symbol ??4StructureSettings\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StructureSettings& operator=(class StructureSettings&&); // NOLINT
    /**
     * @symbol ??4StructureSettings\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class StructureSettings& operator=(class StructureSettings const&); // NOLINT
    /**
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool); // NOLINT
    /**
     * @symbol ?setAnimationMode\@StructureSettings\@\@QEAAXW4AnimationMode\@\@\@Z
     */
    MCAPI void setAnimationMode(enum class AnimationMode); // NOLINT
    /**
     * @symbol ?setAnimationSeconds\@StructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationSeconds(float); // NOLINT
    /**
     * @symbol ?setIgnoreBlocks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlocks(bool); // NOLINT
    /**
     * @symbol ?setIgnoreEntities\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreEntities(bool); // NOLINT
    /**
     * @symbol ?setIgnoreJigsawBlocks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreJigsawBlocks(bool); // NOLINT
    /**
     * @symbol ?setIntegritySeed\@StructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setIntegritySeed(unsigned int); // NOLINT
    /**
     * @symbol ?setIntegrityValue\@StructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrityValue(float); // NOLINT
    /**
     * @symbol ?setLastTouchedByPlayerID\@StructureSettings\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?setMirror\@StructureSettings\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror); // NOLINT
    /**
     * @symbol
     * ?setPaletteName\@StructureSettings\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPaletteName(std::string); // NOLINT
    /**
     * @symbol ?setPivot\@StructureSettings\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPivot(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setReloadActorEquipment\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setReloadActorEquipment(bool); // NOLINT
    /**
     * @symbol ?setRotation\@StructureSettings\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation); // NOLINT
    /**
     * @symbol ?setStructureOffset\@StructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureOffset(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setStructureSize\@StructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureSize(class BlockPos const&); // NOLINT
    /**
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const; // NOLINT
    /**
     * @symbol ??1StructureSettings\@\@QEAA\@XZ
     */
    MCAPI ~StructureSettings(); // NOLINT
    /**
     * @symbol ?DEFAULT_STRUCTURE_OFFSET\@StructureSettings\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET; // NOLINT
    /**
     * @symbol ?DEFAULT_STRUCTURE_SIZE\@StructureSettings\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE; // NOLINT
};
