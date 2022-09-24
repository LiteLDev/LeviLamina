/**
 * @file  StructureEditorData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -287020954
     * @symbol ??0StructureEditorData@@QEAA@XZ
     */
    MCAPI StructureEditorData();
    /**
     * @hash   1320597569
     * @symbol ??0StructureEditorData@@QEAA@AEBV0@@Z
     */
    MCAPI StructureEditorData(class StructureEditorData const &);
    /**
     * @hash   -177011670
     * @symbol ?getAnimationModeAsString@StructureEditorData@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getAnimationModeAsString() const;
    /**
     * @hash   -66577832
     * @symbol ?getAnimationSeconds@StructureEditorData@@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @hash   -1758831558
     * @symbol ?getIgnoreBlocks@StructureEditorData@@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @hash   8009642
     * @symbol ?getIgnoreEntities@StructureEditorData@@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @hash   -278885574
     * @symbol ?getIncludePlayers@StructureEditorData@@QEBA_NXZ
     */
    MCAPI bool getIncludePlayers() const;
    /**
     * @hash   -2124836752
     * @symbol ?getIntegritySeed@StructureEditorData@@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @hash   582194986
     * @symbol ?getIntegrityValue@StructureEditorData@@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @symbol ?getIsWaterLogged@StructureEditorData@@QEBA_NXZ
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @hash   -2016216028
     * @symbol ?getMirror@StructureEditorData@@QEBA?AW4Mirror@@XZ
     */
    MCAPI enum Mirror getMirror() const;
    /**
     * @hash   -1977066598
     * @symbol ?getPivot@StructureEditorData@@QEBAAEBVVec3@@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @hash   1006988912
     * @symbol ?getRedstoneSaveMode@StructureEditorData@@QEBA?AW4StructureRedstoneSaveMode@@XZ
     */
    MCAPI enum StructureRedstoneSaveMode getRedstoneSaveMode() const;
    /**
     * @hash   587227974
     * @symbol ?getRotation@StructureEditorData@@QEBA?AW4Rotation@@XZ
     */
    MCAPI enum Rotation getRotation() const;
    /**
     * @hash   -2105267988
     * @symbol ?getShowBoundingBox@StructureEditorData@@QEBA_NXZ
     */
    MCAPI bool getShowBoundingBox() const;
    /**
     * @hash   1998339322
     * @symbol ?getStructureBlockType@StructureEditorData@@QEBA?AW4StructureBlockType@@XZ
     */
    MCAPI enum StructureBlockType getStructureBlockType() const;
    /**
     * @hash   952355436
     * @symbol ?getStructureName@StructureEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @hash   249500506
     * @symbol ?getStructureOffset@StructureEditorData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @hash   -1029874988
     * @symbol ?getStructureSettings@StructureEditorData@@QEBAAEBVStructureSettings@@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @hash   -892421142
     * @symbol ?getStructureSize@StructureEditorData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @hash   1170392039
     * @symbol ?load@StructureEditorData@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1309683330
     * @symbol ?save@StructureEditorData@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   762946784
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks@StructureEditorData@@QEAAX_N@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @hash   -631982096
     * @symbol ?setAnimationMode@StructureEditorData@@QEAAXW4AnimationMode@@@Z
     */
    MCAPI void setAnimationMode(enum AnimationMode);
    /**
     * @hash   -180487254
     * @symbol ?setAnimationSeconds@StructureEditorData@@QEAAXM@Z
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @hash   -462931544
     * @symbol ?setAnimationTicks@StructureEditorData@@QEAAXI@Z
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @hash   190057698
     * @symbol ?setIgnoreBlocks@StructureEditorData@@QEAAX_N@Z
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @hash   -1218398830
     * @symbol ?setIgnoreEntities@StructureEditorData@@QEAAX_N@Z
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @hash   1397477866
     * @symbol ?setIntegritySeed@StructureEditorData@@QEAAXI@Z
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @hash   -2086402136
     * @symbol ?setIntegrityValue@StructureEditorData@@QEAAXM@Z
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @hash   -1024374432
     * @symbol ?setIsWaterLogged@StructureEditorData@@QEAAX_N@Z
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @hash   -467399916
     * @symbol ?setLastTouchedByPlayerID@StructureEditorData@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @hash   -136912306
     * @symbol ?setMirror@StructureEditorData@@QEAAXW4Mirror@@@Z
     */
    MCAPI void setMirror(enum Mirror);
    /**
     * @hash   -1369671936
     * @symbol ?setRotation@StructureEditorData@@QEAAXW4Rotation@@@Z
     */
    MCAPI void setRotation(enum Rotation);
    /**
     * @hash   -70366528
     * @symbol ?setShowBoundingBox@StructureEditorData@@QEAAX_N@Z
     */
    MCAPI void setShowBoundingBox(bool);
    /**
     * @hash   -1799272700
     * @symbol ?setStructureBlockType@StructureEditorData@@QEAAXW4StructureBlockType@@@Z
     */
    MCAPI void setStructureBlockType(enum StructureBlockType);
    /**
     * @hash   -711607288
     * @symbol ?setStructureName@StructureEditorData@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI void setStructureName(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   1277928670
     * @symbol ?setStructureOffset@StructureEditorData@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @hash   -2143116178
     * @symbol ?setStructureSize@StructureEditorData@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @hash   1023569302
     * @symbol ??1StructureEditorData@@QEAA@XZ
     */
    MCAPI ~StructureEditorData();
    /**
     * @hash   -1975257937
     * @symbol ?DEFAULT_EXPORT_NAME@StructureEditorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DEFAULT_EXPORT_NAME;
    /**
     * @hash   1292580079
     * @symbol ?DEFAULT_STRUCTURE_NAMESPACE@StructureEditorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;
    /**
     * @hash   -1484610203
     * @symbol ?MAX_STRUCTURE_OFFSET@StructureEditorData@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;
    /**
     * @hash   -43671303
     * @symbol ?MIN_STRUCTURE_OFFSET@StructureEditorData@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;
    /**
     * @hash   -577110195
     * @symbol ?MIN_STRUCTURE_SIZE@StructureEditorData@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;
    /**
     * @hash   1904026768
     * @symbol ?NAMESPACE_DELIMITER@StructureEditorData@@2DB
     */
    MCAPI static char const NAMESPACE_DELIMITER;
    /**
     * @hash   -647993085
     * @symbol ?getOrientedBounds@StructureEditorData@@SA?AVBlockPos@@AEBV2@W4Rotation@@@Z
     */
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const &, enum Rotation);

//private:
    /**
     * @hash   -1723727603
     * @symbol ?_setPivotFromStructureSize@StructureEditorData@@AEAAXXZ
     */
    MCAPI void _setPivotFromStructureSize();

private:
    /**
     * @hash   1499611743
     * @symbol ?DEFAULT_STRUCTURE_TYPE@StructureEditorData@@0W4StructureBlockType@@B
     */
    MCAPI static enum StructureBlockType const DEFAULT_STRUCTURE_TYPE;

};