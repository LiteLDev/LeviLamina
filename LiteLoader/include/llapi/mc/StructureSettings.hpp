/**
 * @file  StructureSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1549909998
     * @symbol ??0StructureSettings@@QEAA@XZ
     */
    MCAPI StructureSettings();
    /**
     * @hash   2033702501
     * @symbol ??0StructureSettings@@QEAA@$$QEAV0@@Z
     */
    MCAPI StructureSettings(class StructureSettings &&);
    /**
     * @hash   1750866524
     * @symbol ?getAnimationMode@StructureSettings@@QEBA?AW4AnimationMode@@XZ
     */
    MCAPI enum AnimationMode getAnimationMode() const;
    /**
     * @hash   1840276840
     * @symbol ?getAnimationSeconds@StructureSettings@@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @hash   186951234
     * @symbol ?getAnimationTicks@StructureSettings@@QEBAIXZ
     */
    MCAPI unsigned int getAnimationTicks() const;
    /**
     * @hash   -1997764414
     * @symbol ?getIgnoreBlocks@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @hash   -1119398446
     * @symbol ?getIgnoreEntities@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @hash   1338425906
     * @symbol ?getIgnoreJigsawBlocks@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool getIgnoreJigsawBlocks() const;
    /**
     * @hash   -873206448
     * @symbol ?getIntegritySeed@StructureSettings@@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @hash   -4790950
     * @symbol ?getIntegrityValue@StructureSettings@@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @hash   -1049270428
     * @symbol ?getIsWaterLogged@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @hash   1016297958
     * @symbol ?getLastTouchedByPlayerID@StructureSettings@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getLastTouchedByPlayerID() const;
    /**
     * @hash   -2128575652
     * @symbol ?getMirror@StructureSettings@@QEBA?AW4Mirror@@XZ
     */
    MCAPI enum Mirror getMirror() const;
    /**
     * @hash   -152731780
     * @symbol ?getPaletteName@StructureSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getPaletteName() const;
    /**
     * @hash   -1139654318
     * @symbol ?getPivot@StructureSettings@@QEBAAEBVVec3@@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @hash   2038533874
     * @symbol ?getReloadActorEquipment@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool getReloadActorEquipment() const;
    /**
     * @hash   136701486
     * @symbol ?getRotation@StructureSettings@@QEBA?AW4Rotation@@XZ
     */
    MCAPI enum Rotation getRotation() const;
    /**
     * @hash   798282418
     * @symbol ?getStructureOffset@StructureSettings@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @hash   795645106
     * @symbol ?getStructureSize@StructureSettings@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @hash   1548011668
     * @symbol ?isAnimated@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool isAnimated() const;
    /**
     * @hash   2049609276
     * @symbol ??4StructureSettings@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class StructureSettings & operator=(class StructureSettings const &);
    /**
     * @hash   -1089274592
     * @symbol ??4StructureSettings@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class StructureSettings & operator=(class StructureSettings &&);
    /**
     * @hash   -930399112
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks@StructureSettings@@QEAAX_N@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @hash   -785899344
     * @symbol ?setAnimationMode@StructureSettings@@QEAAXW4AnimationMode@@@Z
     */
    MCAPI void setAnimationMode(enum AnimationMode);
    /**
     * @hash   1702692330
     * @symbol ?setAnimationSeconds@StructureSettings@@QEAAXM@Z
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @hash   893225512
     * @symbol ?setAnimationTicks@StructureSettings@@QEAAXI@Z
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @hash   628437834
     * @symbol ?setIgnoreBlocks@StructureSettings@@QEAAX_N@Z
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @hash   -951646038
     * @symbol ?setIgnoreEntities@StructureSettings@@QEAAX_N@Z
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @hash   -1796347014
     * @symbol ?setIgnoreJigsawBlocks@StructureSettings@@QEAAX_N@Z
     */
    MCAPI void setIgnoreJigsawBlocks(bool);
    /**
     * @hash   768560378
     * @symbol ?setIntegritySeed@StructureSettings@@QEAAXI@Z
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @hash   -241567816
     * @symbol ?setIntegrityValue@StructureSettings@@QEAAXM@Z
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @hash   733928472
     * @symbol ?setIsWaterLogged@StructureSettings@@QEAAX_N@Z
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @hash   -774687796
     * @symbol ?setLastTouchedByPlayerID@StructureSettings@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @hash   484322950
     * @symbol ?setMirror@StructureSettings@@QEAAXW4Mirror@@@Z
     */
    MCAPI void setMirror(enum Mirror);
    /**
     * @hash   159192120
     * @symbol ?setPaletteName@StructureSettings@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setPaletteName(std::string);
    /**
     * @hash   64899446
     * @symbol ?setPivot@StructureSettings@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setPivot(class Vec3 const &);
    /**
     * @hash   -207746246
     * @symbol ?setReloadActorEquipment@StructureSettings@@QEAAX_N@Z
     */
    MCAPI void setReloadActorEquipment(bool);
    /**
     * @hash   7956616
     * @symbol ?setRotation@StructureSettings@@QEAAXW4Rotation@@@Z
     */
    MCAPI void setRotation(enum Rotation);
    /**
     * @hash   -485980394
     * @symbol ?setStructureOffset@StructureSettings@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @hash   -1637208042
     * @symbol ?setStructureSize@StructureSettings@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @hash   1044219730
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks@StructureSettings@@QEBA_NXZ
     */
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;
    /**
     * @hash   364045570
     * @symbol ??1StructureSettings@@QEAA@XZ
     */
    MCAPI ~StructureSettings();
    /**
     * @hash   -1381485037
     * @symbol ?DEFAULT_STRUCTURE_OFFSET@StructureSettings@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;
    /**
     * @hash   662404895
     * @symbol ?DEFAULT_STRUCTURE_SIZE@StructureSettings@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

};