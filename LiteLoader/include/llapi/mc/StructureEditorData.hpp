/**
 * @file  StructureEditorData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureEditorData.
 *
 */
class StructureEditorData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREEDITORDATA
public:
    class StructureEditorData& operator=(class StructureEditorData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0StructureEditorData\@\@QEAA\@XZ
     */
    MCAPI StructureEditorData();
    /**
     * @symbol  ??0StructureEditorData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI StructureEditorData(class StructureEditorData const &);
    /**
     * @symbol  ?getAnimationModeAsString\@StructureEditorData\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAnimationModeAsString() const;
    /**
     * @symbol  ?getAnimationSeconds\@StructureEditorData\@\@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @symbol  ?getIgnoreBlocks\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @symbol  ?getIgnoreEntities\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @symbol  ?getIncludePlayers\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIncludePlayers() const;
    /**
     * @symbol  ?getIntegritySeed\@StructureEditorData\@\@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @symbol  ?getIntegrityValue\@StructureEditorData\@\@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @symbol  ?getIsWaterLogged\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @symbol  ?getMirror\@StructureEditorData\@\@QEBA?AW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror getMirror() const;
    /**
     * @symbol  ?getPivot\@StructureEditorData\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @symbol  ?getRedstoneSaveMode\@StructureEditorData\@\@QEBA?AW4StructureRedstoneSaveMode\@\@XZ
     */
    MCAPI enum class StructureRedstoneSaveMode getRedstoneSaveMode() const;
    /**
     * @symbol  ?getRotation\@StructureEditorData\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @symbol  ?getShowBoundingBox\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getShowBoundingBox() const;
    /**
     * @symbol  ?getStructureBlockType\@StructureEditorData\@\@QEBA?AW4StructureBlockType\@\@XZ
     */
    MCAPI enum class StructureBlockType getStructureBlockType() const;
    /**
     * @symbol  ?getStructureName\@StructureEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @symbol  ?getStructureOffset\@StructureEditorData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @symbol  ?getStructureSettings\@StructureEditorData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @symbol  ?getStructureSize\@StructureEditorData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @symbol  ?load\@StructureEditorData\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?save\@StructureEditorData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol  ?setAllowNonTickingPlayerAndTickingAreaChunks\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @symbol  ?setAnimationMode\@StructureEditorData\@\@QEAAXW4AnimationMode\@\@\@Z
     */
    MCAPI void setAnimationMode(enum class AnimationMode);
    /**
     * @symbol  ?setAnimationSeconds\@StructureEditorData\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @symbol  ?setAnimationTicks\@StructureEditorData\@\@QEAAXI\@Z
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @symbol  ?setIgnoreBlocks\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @symbol  ?setIgnoreEntities\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @symbol  ?setIntegritySeed\@StructureEditorData\@\@QEAAXI\@Z
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @symbol  ?setIntegrityValue\@StructureEditorData\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @symbol  ?setIsWaterLogged\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @symbol  ?setLastTouchedByPlayerID\@StructureEditorData\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @symbol  ?setMirror\@StructureEditorData\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @symbol  ?setRotation\@StructureEditorData\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol  ?setShowBoundingBox\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setShowBoundingBox(bool);
    /**
     * @symbol  ?setStructureBlockType\@StructureEditorData\@\@QEAAXW4StructureBlockType\@\@\@Z
     */
    MCAPI void setStructureBlockType(enum class StructureBlockType);
    /**
     * @symbol  ?setStructureName\@StructureEditorData\@\@QEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI void setStructureName(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?setStructureOffset\@StructureEditorData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @symbol  ?setStructureSize\@StructureEditorData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @symbol  ??1StructureEditorData\@\@QEAA\@XZ
     */
    MCAPI ~StructureEditorData();
    /**
     * @symbol  ?DEFAULT_EXPORT_NAME\@StructureEditorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_EXPORT_NAME;
    /**
     * @symbol  ?DEFAULT_STRUCTURE_NAMESPACE\@StructureEditorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;
    /**
     * @symbol  ?MAX_STRUCTURE_OFFSET\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;
    /**
     * @symbol  ?MIN_STRUCTURE_OFFSET\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;
    /**
     * @symbol  ?MIN_STRUCTURE_SIZE\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;
    /**
     * @symbol  ?NAMESPACE_DELIMITER\@StructureEditorData\@\@2DB
     */
    MCAPI static char const NAMESPACE_DELIMITER;
    /**
     * @symbol  ?getOrientedBounds\@StructureEditorData\@\@SA?AVBlockPos\@\@AEBV2\@W4Rotation\@\@\@Z
     */
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const &, enum class Rotation);

//private:
    /**
     * @symbol  ?_setPivotFromStructureSize\@StructureEditorData\@\@AEAAXXZ
     */
    MCAPI void _setPivotFromStructureSize();

private:
    /**
     * @symbol  ?DEFAULT_STRUCTURE_TYPE\@StructureEditorData\@\@0W4StructureBlockType\@\@B
     */
    MCAPI static enum class StructureBlockType const DEFAULT_STRUCTURE_TYPE;

};