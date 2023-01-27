/**
 * @file  LevelSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Social.hpp"

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
     * @hash   -419992777
     * @symbol  ??0LevelSettings\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelSettings(class LevelSettings &&);
    /**
     * @hash   976388601
     * @symbol  ??0LevelSettings\@\@QEAA\@AEBVLevelData\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -850139821
     * @symbol  ??0LevelSettings\@\@QEAA\@XZ
     */
    MCAPI LevelSettings();
    /**
     * @hash   -1308174415
     * @symbol  ??0LevelSettings\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LevelSettings(class LevelSettings const &);
    /**
     * @hash   -1381908894
     * @symbol  ?achievementsWillBeDisabledOnLoad\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @hash   -578752510
     * @symbol  ?educationFeaturesEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @hash   -432302048
     * @symbol  ?educationProductID\@LevelSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & educationProductID() const;
    /**
     * @hash   1769294192
     * @symbol  ?forceGameType\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool forceGameType() const;
    /**
     * @hash   574303380
     * @symbol  ?getBaseGameVersion\@LevelSettings\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @hash   -405344088
     * @symbol  ?getBiomeOverride\@LevelSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getBiomeOverride() const;
    /**
     * @hash   1434176632
     * @symbol  ?getChatRestrictionLevel\@LevelSettings\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @hash   -841742190
     * @symbol  ?getCustomSkinsDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @hash   -404261744
     * @symbol  ?getDefaultPermissions\@LevelSettings\@\@QEBAAEBVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @hash   57918942
     * @symbol  ?getDefaultSpawn\@LevelSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @hash   -1733521518
     * @symbol  ?getDisablePlayerInteractions\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getDisablePlayerInteractions() const;
    /**
     * @hash   588513596
     * @symbol  ?getEduSharedUriResource\@LevelSettings\@\@QEBAAEBUEduSharedUriResource\@\@XZ
     */
    MCAPI struct EduSharedUriResource const & getEduSharedUriResource() const;
    /**
     * @hash   1556829804
     * @symbol  ?getEducationEditionOffer\@LevelSettings\@\@QEBA?AW4EducationEditionOffer\@\@XZ
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @hash   -1811982813
     * @symbol  ?getEducationLevelSettings\@LevelSettings\@\@QEBAAEBV?$optional\@UEducationLevelSettings\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @symbol  ?getEmoteChatMuted\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getEmoteChatMuted() const;
    /**
     * @hash   1446506548
     * @symbol  ?getExperiments\@LevelSettings\@\@QEBAAEBVExperiments\@\@XZ
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @hash   -1071391998
     * @symbol  ?getGameDifficulty\@LevelSettings\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @hash   -1113811756
     * @symbol  ?getGameRules\@LevelSettings\@\@QEBAAEBVGameRules\@\@XZ
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @hash   -1799454272
     * @symbol  ?getGameType\@LevelSettings\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @hash   -605101480
     * @symbol  ?getGenerator\@LevelSettings\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @hash   -1525614160
     * @symbol  ?getImmutableWorld\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getImmutableWorld() const;
    /**
     * @hash   1797055568
     * @symbol  ?getLanBroadcastIntent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getLanBroadcastIntent() const;
    /**
     * @hash   1676009766
     * @symbol  ?getLightningLevel\@LevelSettings\@\@QEBAMXZ
     */
    MCAPI float getLightningLevel() const;
    /**
     * @hash   -1801979008
     * @symbol  ?getLimitedWorldDepth\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @hash   -557154618
     * @symbol  ?getLimitedWorldWidth\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @hash   799925010
     * @symbol  ?getMultiplayerGameIntent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @hash   -1517114238
     * @symbol  ?getNetherType\@LevelSettings\@\@QEBA?AW4NetherWorldType\@\@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @hash   -1142739424
     * @symbol  ?getOnlySpawnV1Villagers\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @hash   -1545999374
     * @symbol  ?getPersonaDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @hash   -1131453016
     * @symbol  ?getPlatformBroadcastIntent\@LevelSettings\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @hash   630736072
     * @symbol  ?getRainLevel\@LevelSettings\@\@QEBAMXZ
     */
    MCAPI float getRainLevel() const;
    /**
     * @hash   826343420
     * @symbol  ?getSeed\@LevelSettings\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @hash   -1653970102
     * @symbol  ?getServerChunkTickRange\@LevelSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @hash   902671338
     * @symbol  ?getSpawnSettings\@LevelSettings\@\@QEBA?AUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings getSpawnSettings() const;
    /**
     * @hash   -1801929570
     * @symbol  ?getTime\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getTime() const;
    /**
     * @hash   475327516
     * @symbol  ?getWorldVersion\@LevelSettings\@\@QEBA?AW4WorldVersion\@\@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @hash   -919378956
     * @symbol  ?getXBLBroadcastIntent\@LevelSettings\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @hash   668986272
     * @symbol  ?hasAchievementsDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @hash   195727906
     * @symbol  ?hasBonusChestEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @hash   946839218
     * @symbol  ?hasCommandsEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @hash   1567680224
     * @symbol  ?hasConfirmedPlatformLockedContent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @hash   1433314416
     * @symbol  ?hasLockedBehaviorPack\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @hash   -1386017280
     * @symbol  ?hasLockedResourcePack\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @hash   -1254061326
     * @symbol  ?hasStartWithMapEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @hash   -324769824
     * @symbol  ?isEditorWorld\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @hash   1819852898
     * @symbol  ?isFromLockedTemplate\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @hash   1630940176
     * @symbol  ?isFromWorldTemplate\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @hash   -40726974
     * @symbol  ?isTexturepacksRequired\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @hash   525034704
     * @symbol  ?isWorldTemplateOptionLocked\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @hash   1214881202
     * @symbol  ??4LevelSettings\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    /**
     * @hash   614265356
     * @symbol  ?overrideSavedSettings\@LevelSettings\@\@QEBAXAEAVLevelData\@\@\@Z
     */
    MCAPI void overrideSavedSettings(class LevelData &) const;
    /**
     * @hash   1254553825
     * @symbol  ?setBaseGameVersion\@LevelSettings\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class LevelSettings & setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   -49873009
     * @symbol  ?setChatRestrictionLevel\@LevelSettings\@\@QEAAAEAV1\@W4ChatRestrictionLevel\@\@\@Z
     */
    MCAPI class LevelSettings & setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @hash   1422634541
     * @symbol  ?setCommandsEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setCommandsEnabled(bool);
    /**
     * @hash   -988588947
     * @symbol  ?setCustomSkinsDisabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setCustomSkinsDisabled(bool);
    /**
     * @hash   852273499
     * @symbol  ?setDefaultPlayerPermissions\@LevelSettings\@\@QEAAAEAV1\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI class LevelSettings & setDefaultPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @hash   1341874739
     * @symbol  ?setDifficulty\@LevelSettings\@\@QEAAAEAV1\@W4Difficulty\@\@\@Z
     */
    MCAPI class LevelSettings & setDifficulty(enum class Difficulty);
    /**
     * @hash   1856557467
     * @symbol  ?setDisablePlayerInteractions\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setDisablePlayerInteractions(bool);
    /**
     * @hash   -1336056973
     * @symbol  ?setEduSharedUriResource\@LevelSettings\@\@QEAAAEAV1\@AEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI class LevelSettings & setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @hash   142279181
     * @symbol  ?setEducationFeaturesEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setEducationFeaturesEnabled(bool);
    /**
     * @hash   1114479329
     * @symbol  ?setEducationProductID\@LevelSettings\@\@QEAAAEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LevelSettings & setEducationProductID(std::string);
    /**
     * @symbol  ?setEmoteChatMuted\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setEmoteChatMuted(bool);
    /**
     * @hash   1567880785
     * @symbol  ?setForceGameType\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setForceGameType(bool);
    /**
     * @hash   -316629345
     * @symbol  ?setGameRules\@LevelSettings\@\@QEAAAEAV1\@VGameRules\@\@\@Z
     */
    MCAPI class LevelSettings & setGameRules(class GameRules);
    /**
     * @hash   1350894719
     * @symbol  ?setGameType\@LevelSettings\@\@QEAAAEAV1\@W4GameType\@\@\@Z
     */
    MCAPI class LevelSettings & setGameType(enum class GameType);
    /**
     * @hash   -1193849177
     * @symbol  ?setGeneratorType\@LevelSettings\@\@QEAAAEAV1\@W4GeneratorType\@\@\@Z
     */
    MCAPI class LevelSettings & setGeneratorType(enum class GeneratorType);
    /**
     * @hash   -629070631
     * @symbol  ?setIsEditorWorld\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setIsEditorWorld(bool);
    /**
     * @hash   -1106482980
     * @symbol  ?setOnlySpawnV1Villagers\@LevelSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @hash   -271341581
     * @symbol  ?setOverrideSavedSettings\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setOverrideSavedSettings(bool);
    /**
     * @hash   -1256527159
     * @symbol  ?setPlatformBroadcastIntent\@LevelSettings\@\@QEAAAEAV1\@W4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI class LevelSettings & setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   -929273445
     * @symbol  ?setRandomSeed\@LevelSettings\@\@QEAAAEAV1\@VLevelSeed64\@\@\@Z
     */
    MCAPI class LevelSettings & setRandomSeed(class LevelSeed64);
    /**
     * @hash   382481693
     * @symbol  ?setServerChunkTickRange\@LevelSettings\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class LevelSettings & setServerChunkTickRange(unsigned int);
    /**
     * @hash   -197143859
     * @symbol  ?setSpawnSettings\@LevelSettings\@\@QEAAAEAV1\@USpawnSettings\@\@\@Z
     */
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    /**
     * @hash   1579405305
     * @symbol  ?setTexturePackRequired\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setTexturePackRequired(bool);
    /**
     * @hash   2082966029
     * @symbol  ?setUseMsaGamertagsOnly\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setUseMsaGamertagsOnly(bool);
    /**
     * @hash   -1096410229
     * @symbol  ?setXblBroadcastIntent\@LevelSettings\@\@QEAAAEAV1\@W4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI class LevelSettings & setXblBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   425255968
     * @symbol  ?shouldOverrideSavedSettings\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool shouldOverrideSavedSettings() const;
    /**
     * @hash   -302861584
     * @symbol  ?useMsaGamertagsOnly\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @hash   1985937459
     * @symbol  ??1LevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~LevelSettings();
    /**
     * @hash   1061257418
     * @symbol  ?parseSeedString\@LevelSettings\@\@SA?AV?$optional\@VLevelSeed64\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const &);

};