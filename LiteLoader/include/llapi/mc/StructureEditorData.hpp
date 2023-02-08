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
     * @hash   593132038
     * @symbol  ??0StructureEditorData\@\@QEAA\@XZ
     */
    MCAPI StructureEditorData();
    /**
     * @hash   1573440513
     * @symbol  ??0StructureEditorData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI StructureEditorData(class StructureEditorData const &);
    /**
     * @hash   703141322
     * @symbol  ?getAnimationModeAsString\@StructureEditorData\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAnimationModeAsString() const;
    /**
     * @hash   813559784
     * @symbol  ?getAnimationSeconds\@StructureEditorData\@\@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @hash   -878693942
     * @symbol  ?getIgnoreBlocks\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @hash   888147258
     * @symbol  ?getIgnoreEntities\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @hash   -33207846
     * @symbol  ?getIncludePlayers\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIncludePlayers() const;
    /**
     * @hash   -1244699136
     * @symbol  ?getIntegritySeed\@StructureEditorData\@\@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @hash   1462332602
     * @symbol  ?getIntegrityValue\@StructureEditorData\@\@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @hash   -1047349492
     * @symbol  ?getIsWaterLogged\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @hash   -1136063036
     * @symbol  ?getMirror\@StructureEditorData\@\@QEBA?AW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror getMirror() const;
    /**
     * @hash   -1096913606
     * @symbol  ?getPivot\@StructureEditorData\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @hash   1887141904
     * @symbol  ?getRedstoneSaveMode\@StructureEditorData\@\@QEBA?AW4StructureRedstoneSaveMode\@\@XZ
     */
    MCAPI enum class StructureRedstoneSaveMode getRedstoneSaveMode() const;
    /**
     * @hash   1467380966
     * @symbol  ?getRotation\@StructureEditorData\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @hash   -1225114996
     * @symbol  ?getShowBoundingBox\@StructureEditorData\@\@QEBA_NXZ
     */
    MCAPI bool getShowBoundingBox() const;
    /**
     * @hash   -1416474982
     * @symbol  ?getStructureBlockType\@StructureEditorData\@\@QEBA?AW4StructureBlockType\@\@XZ
     */
    MCAPI enum class StructureBlockType getStructureBlockType() const;
    /**
     * @hash   1048978220
     * @symbol  ?getStructureName\@StructureEditorData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @hash   1129653498
     * @symbol  ?getStructureOffset\@StructureEditorData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @hash   -1881997532
     * @symbol  ?getStructureSettings\@StructureEditorData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @hash   -12268150
     * @symbol  ?getStructureSize\@StructureEditorData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @hash   2050545031
     * @symbol  ?load\@StructureEditorData\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -429499586
     * @symbol  ?save\@StructureEditorData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   1643053648
     * @symbol  ?setAllowNonTickingPlayerAndTickingAreaChunks\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @hash   248124768
     * @symbol  ?setAnimationMode\@StructureEditorData\@\@QEAAXW4AnimationMode\@\@\@Z
     */
    MCAPI void setAnimationMode(enum class AnimationMode);
    /**
     * @hash   699619610
     * @symbol  ?setAnimationSeconds\@StructureEditorData\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @hash   417175320
     * @symbol  ?setAnimationTicks\@StructureEditorData\@\@QEAAXI\@Z
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @hash   1070164562
     * @symbol  ?setIgnoreBlocks\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @hash   -338291966
     * @symbol  ?setIgnoreEntities\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @hash   -2017382566
     * @symbol  ?setIntegritySeed\@StructureEditorData\@\@QEAAXI\@Z
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @hash   -1206295272
     * @symbol  ?setIntegrityValue\@StructureEditorData\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @hash   -144267568
     * @symbol  ?setIsWaterLogged\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @hash   412706948
     * @symbol  ?setLastTouchedByPlayerID\@StructureEditorData\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @hash   743194558
     * @symbol  ?setMirror\@StructureEditorData\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @hash   -489565072
     * @symbol  ?setRotation\@StructureEditorData\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @hash   809740336
     * @symbol  ?setShowBoundingBox\@StructureEditorData\@\@QEAAX_N\@Z
     */
    MCAPI void setShowBoundingBox(bool);
    /**
     * @hash   -919165836
     * @symbol  ?setStructureBlockType\@StructureEditorData\@\@QEAAXW4StructureBlockType\@\@\@Z
     */
    MCAPI void setStructureBlockType(enum class StructureBlockType);
    /**
     * @hash   168499576
     * @symbol  ?setStructureName\@StructureEditorData\@\@QEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI void setStructureName(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -2136947138
     * @symbol  ?setStructureOffset\@StructureEditorData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @hash   -1263024690
     * @symbol  ?setStructureSize\@StructureEditorData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @hash   1276381494
     * @symbol  ??1StructureEditorData\@\@QEAA\@XZ
     */
    MCAPI ~StructureEditorData();
    /**
     * @hash   13858303
     * @symbol  ?DEFAULT_EXPORT_NAME\@StructureEditorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_EXPORT_NAME;
    /**
     * @hash   -1013270977
     * @symbol  ?DEFAULT_STRUCTURE_NAMESPACE\@StructureEditorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;
    /**
     * @hash   -398357307
     * @symbol  ?MAX_STRUCTURE_OFFSET\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;
    /**
     * @hash   1042581593
     * @symbol  ?MIN_STRUCTURE_OFFSET\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;
    /**
     * @hash   466389733
     * @symbol  ?MIN_STRUCTURE_SIZE\@StructureEditorData\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;
    /**
     * @hash   -1347425224
     * @symbol  ?NAMESPACE_DELIMITER\@StructureEditorData\@\@2DB
     */
    MCAPI static char const NAMESPACE_DELIMITER;
    /**
     * @hash   232159907
     * @symbol  ?getOrientedBounds\@StructureEditorData\@\@SA?AVBlockPos\@\@AEBV2\@W4Rotation\@\@\@Z
     */
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const &, enum class Rotation);

//private:
    /**
     * @hash   -843574611
     * @symbol  ?_setPivotFromStructureSize\@StructureEditorData\@\@AEAAXXZ
     */
    MCAPI void _setPivotFromStructureSize();

private:
    /**
     * @hash   -1751832561
     * @symbol  ?DEFAULT_STRUCTURE_TYPE\@StructureEditorData\@\@0W4StructureBlockType\@\@B
     */
    MCAPI static enum class StructureBlockType const DEFAULT_STRUCTURE_TYPE;

};