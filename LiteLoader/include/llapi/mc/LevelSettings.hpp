/**
 * @file  MC/LevelSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSettings.
 *
 */
class LevelSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSETTINGS
public:
    class LevelSettings& operator=(class LevelSettings const &) = delete;
#endif

public:
    /**
     * @hash   496093927
     * @symbol ??0LevelSettings@@QEAA@$$QEAV0@@Z
     */
    MCAPI LevelSettings(class LevelSettings &&);
    /**
     * @hash   -1400030639
     * @symbol ??0LevelSettings@@QEAA@AEBV0@@Z
     */
    MCAPI LevelSettings(class LevelSettings const &);
    /**
     * @hash   -1648600125
     * @symbol ??0LevelSettings@@QEAA@XZ
     */
    MCAPI LevelSettings();
    /**
     * @hash   177928297
     * @symbol ??0LevelSettings@@QEAA@AEBVLevelData@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   2114598098
     * @symbol ?achievementsWillBeDisabledOnLoad@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @hash   271909314
     * @symbol ?educationFeaturesEnabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @hash   -1230762352
     * @symbol ?educationProductID@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & educationProductID() const;
    /**
     * @hash   1664214608
     * @symbol ?forceGameType@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool forceGameType() const;
    /**
     * @hash   -224156924
     * @symbol ?getBaseGameVersion@LevelSettings@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @hash   -1203804392
     * @symbol ?getBiomeOverride@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getBiomeOverride() const;
    /**
     * @hash   1729584936
     * @symbol ?getChatRestrictionLevel@LevelSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
     */
    MCAPI enum ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @hash   -1640202494
     * @symbol ?getCustomSkinsDisabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @hash   -1202722048
     * @symbol ?getDefaultPermissions@LevelSettings@@QEBAAEBVPermissionsHandler@@XZ
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @hash   766721790
     * @symbol ?getDefaultSpawn@LevelSettings@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @hash   1762985474
     * @symbol ?getDisablePlayerInteractions@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getDisablePlayerInteractions() const;
    /**
     * @hash   -209946708
     * @symbol ?getEduSharedUriResource@LevelSettings@@QEBAAEBUEduSharedUriResource@@XZ
     */
    MCAPI struct EduSharedUriResource const & getEduSharedUriResource() const;
    /**
     * @hash   -1886368596
     * @symbol ?getEducationEditionOffer@LevelSettings@@QEBA?AW4EducationEditionOffer@@XZ
     */
    MCAPI enum EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @hash   -763988397
     * @symbol ?getEducationLevelSettings@LevelSettings@@QEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
     */
    MCAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @hash   1114810884
     * @symbol ?getExperiments@LevelSettings@@QEBAAEBVExperiments@@XZ
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @hash   -1322405198
     * @symbol ?getGameDifficulty@LevelSettings@@QEBA?AW4Difficulty@@XZ
     */
    MCAPI enum Difficulty getGameDifficulty() const;
    /**
     * @hash   1193412356
     * @symbol ?getGameRules@LevelSettings@@QEBAAEBVGameRules@@XZ
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @hash   -1926890560
     * @symbol ?getGameType@LevelSettings@@QEBA?AW4GameType@@XZ
     */
    MCAPI enum GameType getGameType() const;
    /**
     * @hash   33064024
     * @symbol ?getGenerator@LevelSettings@@QEBA?AW4GeneratorType@@XZ
     */
    MCAPI enum GeneratorType getGenerator() const;
    /**
     * @hash   -674952336
     * @symbol ?getImmutableWorld@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getImmutableWorld() const;
    /**
     * @hash   998610640
     * @symbol ?getLanBroadcastIntent@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getLanBroadcastIntent() const;
    /**
     * @hash   877564838
     * @symbol ?getLightningLevel@LevelSettings@@QEBAMXZ
     */
    MCAPI float getLightningLevel() const;
    /**
     * @hash   -850527504
     * @symbol ?getLimitedWorldDepth@LevelSettings@@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @hash   394296886
     * @symbol ?getLimitedWorldWidth@LevelSettings@@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @hash   1480082
     * @symbol ?getMultiplayerGameIntent@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @hash   -878948734
     * @symbol ?getNetherType@LevelSettings@@QEBA?AW4NetherWorldType@@XZ
     */
    MCAPI enum NetherWorldType getNetherType() const;
    /**
     * @hash   -1941184352
     * @symbol ?getOnlySpawnV1Villagers@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @hash   1950522994
     * @symbol ?getPersonaDisabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @hash   -1929897944
     * @symbol ?getPlatformBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCAPI enum Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @hash   1481597784
     * @symbol ?getRainLevel@LevelSettings@@QEBAMXZ
     */
    MCAPI float getRainLevel() const;
    /**
     * @hash   606569660
     * @symbol ?getSeed@LevelSettings@@QEBA?AVLevelSeed64@@XZ
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @hash   1842552266
     * @symbol ?getServerChunkTickRange@LevelSettings@@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @hash   104226410
     * @symbol ?getSpawnSettings@LevelSettings@@QEBA?AUSpawnSettings@@XZ
     */
    MCAPI struct SpawnSettings getSpawnSettings() const;
    /**
     * @hash   1694592798
     * @symbol ?getTime@LevelSettings@@QEBAHXZ
     */
    MCAPI int getTime() const;
    /**
     * @hash   -137436836
     * @symbol ?getWorldVersion@LevelSettings@@QEBA?AW4WorldVersion@@XZ
     */
    MCAPI enum WorldVersion getWorldVersion() const;
    /**
     * @hash   -1717823884
     * @symbol ?getXBLBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCAPI enum Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @hash   1585103728
     * @symbol ?hasAchievementsDisabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @hash   -602717022
     * @symbol ?hasBonusChestEnabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @hash   148394290
     * @symbol ?hasCommandsEnabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @hash   769235296
     * @symbol ?hasConfirmedPlatformLockedContent@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @hash   634869488
     * @symbol ?hasLockedBehaviorPack@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @hash   2110505088
     * @symbol ?hasLockedResourcePack@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @hash   -2052506254
     * @symbol ?hasStartWithMapEnabled@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @hash   311258416
     * @symbol ?isEditorWorld@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @hash   1021407970
     * @symbol ?isFromLockedTemplate@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @hash   832495248
     * @symbol ?isFromWorldTemplate@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @hash   -839171902
     * @symbol ?isTexturepacksRequired@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @hash   -273410224
     * @symbol ?isWorldTemplateOptionLocked@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @hash   2131060162
     * @symbol ??4LevelSettings@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    /**
     * @hash   -184179572
     * @symbol ?overrideSavedSettings@LevelSettings@@QEBAXAEAVLevelData@@@Z
     */
    MCAPI void overrideSavedSettings(class LevelData &) const;
    /**
     * @hash   456124273
     * @symbol ?setBaseGameVersion@LevelSettings@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     */
    MCAPI class LevelSettings & setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   -848302561
     * @symbol ?setChatRestrictionLevel@LevelSettings@@QEAAAEAV1@W4ChatRestrictionLevel@@@Z
     */
    MCAPI class LevelSettings & setChatRestrictionLevel(enum ChatRestrictionLevel);
    /**
     * @hash   624204989
     * @symbol ?setCommandsEnabled@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setCommandsEnabled(bool);
    /**
     * @hash   -1787018499
     * @symbol ?setCustomSkinsDisabled@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setCustomSkinsDisabled(bool);
    /**
     * @hash   53843947
     * @symbol ?setDefaultPlayerPermissions@LevelSettings@@QEAAAEAV1@W4PlayerPermissionLevel@@@Z
     */
    MCAPI class LevelSettings & setDefaultPlayerPermissions(enum PlayerPermissionLevel);
    /**
     * @hash   543445187
     * @symbol ?setDifficulty@LevelSettings@@QEAAAEAV1@W4Difficulty@@@Z
     */
    MCAPI class LevelSettings & setDifficulty(enum Difficulty);
    /**
     * @hash   1058127915
     * @symbol ?setDisablePlayerInteractions@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setDisablePlayerInteractions(bool);
    /**
     * @hash   -2134486525
     * @symbol ?setEduSharedUriResource@LevelSettings@@QEAAAEAV1@AEBUEduSharedUriResource@@@Z
     */
    MCAPI class LevelSettings & setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @hash   -656150371
     * @symbol ?setEducationFeaturesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setEducationFeaturesEnabled(bool);
    /**
     * @hash   316049777
     * @symbol ?setEducationProductID@LevelSettings@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class LevelSettings & setEducationProductID(std::string);
    /**
     * @hash   769451233
     * @symbol ?setForceGameType@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setForceGameType(bool);
    /**
     * @hash   -1115058897
     * @symbol ?setGameRules@LevelSettings@@QEAAAEAV1@VGameRules@@@Z
     */
    MCAPI class LevelSettings & setGameRules(class GameRules);
    /**
     * @hash   552465167
     * @symbol ?setGameType@LevelSettings@@QEAAAEAV1@W4GameType@@@Z
     */
    MCAPI class LevelSettings & setGameType(enum GameType);
    /**
     * @hash   -1992278729
     * @symbol ?setGeneratorType@LevelSettings@@QEAAAEAV1@W4GeneratorType@@@Z
     */
    MCAPI class LevelSettings & setGeneratorType(enum GeneratorType);
    /**
     * @hash   -1427500183
     * @symbol ?setIsEditorWorld@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setIsEditorWorld(bool);
    /**
     * @hash   -1904912532
     * @symbol ?setOnlySpawnV1Villagers@LevelSettings@@QEAAX_N@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @hash   -1069771133
     * @symbol ?setOverrideSavedSettings@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setOverrideSavedSettings(bool);
    /**
     * @hash   -2054956711
     * @symbol ?setPlatformBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
     */
    MCAPI class LevelSettings & setPlatformBroadcastIntent(enum Social::GamePublishSetting);
    /**
     * @hash   391155931
     * @symbol ?setRandomSeed@LevelSettings@@QEAAAEAV1@VLevelSeed64@@@Z
     */
    MCAPI class LevelSettings & setRandomSeed(class LevelSeed64);
    /**
     * @hash   -415947859
     * @symbol ?setServerChunkTickRange@LevelSettings@@QEAAAEAV1@I@Z
     */
    MCAPI class LevelSettings & setServerChunkTickRange(unsigned int);
    /**
     * @hash   -995573411
     * @symbol ?setSpawnSettings@LevelSettings@@QEAAAEAV1@USpawnSettings@@@Z
     */
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    /**
     * @hash   780975753
     * @symbol ?setTexturePackRequired@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setTexturePackRequired(bool);
    /**
     * @hash   1284536477
     * @symbol ?setUseMsaGamertagsOnly@LevelSettings@@QEAAAEAV1@_N@Z
     */
    MCAPI class LevelSettings & setUseMsaGamertagsOnly(bool);
    /**
     * @hash   -1894839781
     * @symbol ?setXblBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
     */
    MCAPI class LevelSettings & setXblBroadcastIntent(enum Social::GamePublishSetting);
    /**
     * @hash   -373173584
     * @symbol ?shouldOverrideSavedSettings@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool shouldOverrideSavedSettings() const;
    /**
     * @hash   -1101291136
     * @symbol ?useMsaGamertagsOnly@LevelSettings@@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @hash   1892328371
     * @symbol ??1LevelSettings@@QEAA@XZ
     */
    MCAPI ~LevelSettings();
    /**
     * @hash   262812490
     * @symbol ?parseSeedString@LevelSettings@@SA?AV?$optional@VLevelSeed64@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const &);

};