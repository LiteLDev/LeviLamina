/**
 * @file  StructureSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureSettings.
 *
 */
class StructureSettings {

#define AFTER_EXTRA
// Add Member There
private:
char filler[104];

public:
inline StructureSettings(BlockPos const& size, bool ignoreEntities, bool ignoreBlocks)
    : StructureSettings()
{
    setIgnoreBlocks(ignoreBlocks);
    setIgnoreEntities(ignoreEntities);
    setStructureSize(size);
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESETTINGS
public:
    StructureSettings(class StructureSettings const &) = delete;
#endif

public:
    /**
     * @hash   -687377902
     * @symbol  ??0StructureSettings\@\@QEAA\@XZ
     */
    MCAPI StructureSettings();
    /**
     * @hash   -2008421851
     * @symbol  ??0StructureSettings\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureSettings(class StructureSettings &&);
    /**
     * @hash   -1681568676
     * @symbol  ?getAnimationMode\@StructureSettings\@\@QEBA?AW4AnimationMode\@\@XZ
     */
    MCAPI enum class AnimationMode getAnimationMode() const;
    /**
     * @hash   -1592158360
     * @symbol  ?getAnimationSeconds\@StructureSettings\@\@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @hash   1049483330
     * @symbol  ?getAnimationTicks\@StructureSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getAnimationTicks() const;
    /**
     * @hash   -1143704494
     * @symbol  ?getIgnoreBlocks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @hash   -847074110
     * @symbol  ?getIgnoreEntities\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @hash   -2094009294
     * @symbol  ?getIgnoreJigsawBlocks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreJigsawBlocks() const;
    /**
     * @hash   -1509234688
     * @symbol  ?getIntegritySeed\@StructureSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @hash   -855652662
     * @symbol  ?getIntegrityValue\@StructureSettings\@\@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @hash   -195210508
     * @symbol  ?getIsWaterLogged\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @hash   1878830054
     * @symbol  ?getLastTouchedByPlayerID\@StructureSettings\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getLastTouchedByPlayerID() const;
    /**
     * @hash   -1266043556
     * @symbol  ?getMirror\@StructureSettings\@\@QEBA?AW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror getMirror() const;
    /**
     * @hash   -56108996
     * @symbol  ?getPaletteName\@StructureSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getPaletteName() const;
    /**
     * @hash   -1033390782
     * @symbol  ?getPivot\@StructureSettings\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @hash   -1402373502
     * @symbol  ?getReloadActorEquipment\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getReloadActorEquipment() const;
    /**
     * @hash   892790126
     * @symbol  ?getRotation\@StructureSettings\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @hash   1660814514
     * @symbol  ?getStructureOffset\@StructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @hash   1048887826
     * @symbol  ?getStructureSize\@StructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @hash   -1884423532
     * @symbol  ?isAnimated\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool isAnimated() const;
    /**
     * @hash   -2005484304
     * @symbol  ??4StructureSettings\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StructureSettings & operator=(class StructureSettings &&);
    /**
     * @hash   -1394680820
     * @symbol  ??4StructureSettings\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class StructureSettings & operator=(class StructureSettings const &);
    /**
     * @hash   -67867016
     * @symbol  ?setAllowNonTickingPlayerAndTickingAreaChunks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @hash   76632752
     * @symbol  ?setAnimationMode\@StructureSettings\@\@QEAAXW4AnimationMode\@\@\@Z
     */
    MCAPI void setAnimationMode(enum class AnimationMode);
    /**
     * @hash   -1729742870
     * @symbol  ?setAnimationSeconds\@StructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @hash   1755757608
     * @symbol  ?setAnimationTicks\@StructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @hash   1490969930
     * @symbol  ?setIgnoreBlocks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @hash   -679321702
     * @symbol  ?setIgnoreEntities\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @hash   -933814918
     * @symbol  ?setIgnoreJigsawBlocks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreJigsawBlocks(bool);
    /**
     * @hash   1631092474
     * @symbol  ?setIntegritySeed\@StructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @hash   620964280
     * @symbol  ?setIntegrityValue\@StructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @hash   1596460568
     * @symbol  ?setIsWaterLogged\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @hash   87844300
     * @symbol  ?setLastTouchedByPlayerID\@StructureSettings\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @hash   1346855046
     * @symbol  ?setMirror\@StructureSettings\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @hash   1021724216
     * @symbol  ?setPaletteName\@StructureSettings\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPaletteName(std::string);
    /**
     * @hash   927431542
     * @symbol  ?setPivot\@StructureSettings\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPivot(class Vec3 const &);
    /**
     * @hash   668947146
     * @symbol  ?setReloadActorEquipment\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setReloadActorEquipment(bool);
    /**
     * @hash   -4175048
     * @symbol  ?setRotation\@StructureSettings\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @hash   376536326
     * @symbol  ?setStructureOffset\@StructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @hash   -777981786
     * @symbol  ?setStructureSize\@StructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @hash   1294879282
     * @symbol  ?shouldAllowNonTickingPlayerAndTickingAreaChunks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;
    /**
     * @hash   455548146
     * @symbol  ??1StructureSettings\@\@QEAA\@XZ
     */
    MCAPI ~StructureSettings();
    /**
     * @hash   -337608397
     * @symbol  ?DEFAULT_STRUCTURE_OFFSET\@StructureSettings\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;
    /**
     * @hash   1706281535
     * @symbol  ?DEFAULT_STRUCTURE_SIZE\@StructureSettings\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

};