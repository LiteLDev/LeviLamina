/**
 * @file  LevelSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ??0LevelSettings\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelSettings(class LevelSettings &&);
    /**
     * @symbol  ??0LevelSettings\@\@QEAA\@AEBVLevelData\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ??0LevelSettings\@\@QEAA\@XZ
     */
    MCAPI LevelSettings();
    /**
     * @symbol  ??0LevelSettings\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LevelSettings(class LevelSettings const &);
    /**
     * @symbol  ?achievementsWillBeDisabledOnLoad\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @symbol  ?educationFeaturesEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @symbol  ?educationProductID\@LevelSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & educationProductID() const;
    /**
     * @symbol  ?forceGameType\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool forceGameType() const;
    /**
     * @symbol  ?getBaseGameVersion\@LevelSettings\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol  ?getBiomeOverride\@LevelSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getBiomeOverride() const;
    /**
     * @symbol  ?getChatRestrictionLevel\@LevelSettings\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol  ?getCustomSkinsDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @symbol  ?getDefaultPermissions\@LevelSettings\@\@QEBAAEBVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @symbol  ?getDefaultSpawn\@LevelSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @symbol  ?getDisablePlayerInteractions\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getDisablePlayerInteractions() const;
    /**
     * @symbol  ?getEduSharedUriResource\@LevelSettings\@\@QEBAAEBUEduSharedUriResource\@\@XZ
     */
    MCAPI struct EduSharedUriResource const & getEduSharedUriResource() const;
    /**
     * @symbol  ?getEducationEditionOffer\@LevelSettings\@\@QEBA?AW4EducationEditionOffer\@\@XZ
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @symbol  ?getEducationLevelSettings\@LevelSettings\@\@QEBAAEBV?$optional\@UEducationLevelSettings\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @symbol  ?getEmoteChatMuted\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getEmoteChatMuted() const;
    /**
     * @symbol  ?getExperiments\@LevelSettings\@\@QEBAAEBVExperiments\@\@XZ
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @symbol  ?getGameDifficulty\@LevelSettings\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @symbol  ?getGameRules\@LevelSettings\@\@QEBAAEBVGameRules\@\@XZ
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @symbol  ?getGameType\@LevelSettings\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @symbol  ?getGenerator\@LevelSettings\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @symbol  ?getImmutableWorld\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getImmutableWorld() const;
    /**
     * @symbol  ?getLanBroadcastIntent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getLanBroadcastIntent() const;
    /**
     * @symbol  ?getLightningLevel\@LevelSettings\@\@QEBAMXZ
     */
    MCAPI float getLightningLevel() const;
    /**
     * @symbol  ?getLimitedWorldDepth\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @symbol  ?getLimitedWorldWidth\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @symbol  ?getMultiplayerGameIntent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @symbol  ?getNetherType\@LevelSettings\@\@QEBA?AW4NetherWorldType\@\@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @symbol  ?getOnlySpawnV1Villagers\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @symbol  ?getPersonaDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @symbol  ?getPlatformBroadcastIntent\@LevelSettings\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @symbol  ?getRainLevel\@LevelSettings\@\@QEBAMXZ
     */
    MCAPI float getRainLevel() const;
    /**
     * @symbol  ?getSeed\@LevelSettings\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @symbol  ?getServerChunkTickRange\@LevelSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @symbol  ?getSpawnSettings\@LevelSettings\@\@QEBA?AUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings getSpawnSettings() const;
    /**
     * @symbol  ?getTime\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getTime() const;
    /**
     * @symbol  ?getWorldVersion\@LevelSettings\@\@QEBA?AW4WorldVersion\@\@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @symbol  ?getXBLBroadcastIntent\@LevelSettings\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @symbol  ?hasAchievementsDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @symbol  ?hasBonusChestEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @symbol  ?hasCommandsEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @symbol  ?hasConfirmedPlatformLockedContent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @symbol  ?hasLockedBehaviorPack\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @symbol  ?hasLockedResourcePack\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @symbol  ?hasStartWithMapEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @symbol  ?isEditorWorld\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @symbol  ?isFromLockedTemplate\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @symbol  ?isFromWorldTemplate\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @symbol  ?isTexturepacksRequired\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @symbol  ?isWorldTemplateOptionLocked\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @symbol  ??4LevelSettings\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    /**
     * @symbol  ?overrideSavedSettings\@LevelSettings\@\@QEBAXAEAVLevelData\@\@\@Z
     */
    MCAPI void overrideSavedSettings(class LevelData &) const;
    /**
     * @symbol  ?setBaseGameVersion\@LevelSettings\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class LevelSettings & setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?setChatRestrictionLevel\@LevelSettings\@\@QEAAAEAV1\@W4ChatRestrictionLevel\@\@\@Z
     */
    MCAPI class LevelSettings & setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @symbol  ?setCommandsEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setCommandsEnabled(bool);
    /**
     * @symbol  ?setCustomSkinsDisabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setCustomSkinsDisabled(bool);
    /**
     * @symbol  ?setDefaultPlayerPermissions\@LevelSettings\@\@QEAAAEAV1\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI class LevelSettings & setDefaultPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol  ?setDifficulty\@LevelSettings\@\@QEAAAEAV1\@W4Difficulty\@\@\@Z
     */
    MCAPI class LevelSettings & setDifficulty(enum class Difficulty);
    /**
     * @symbol  ?setDisablePlayerInteractions\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setDisablePlayerInteractions(bool);
    /**
     * @symbol  ?setEduSharedUriResource\@LevelSettings\@\@QEAAAEAV1\@AEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI class LevelSettings & setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @symbol  ?setEducationFeaturesEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setEducationFeaturesEnabled(bool);
    /**
     * @symbol  ?setEducationProductID\@LevelSettings\@\@QEAAAEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LevelSettings & setEducationProductID(std::string);
    /**
     * @symbol  ?setEmoteChatMuted\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setEmoteChatMuted(bool);
    /**
     * @symbol  ?setForceGameType\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setForceGameType(bool);
    /**
     * @symbol  ?setGameRules\@LevelSettings\@\@QEAAAEAV1\@VGameRules\@\@\@Z
     */
    MCAPI class LevelSettings & setGameRules(class GameRules);
    /**
     * @symbol  ?setGameType\@LevelSettings\@\@QEAAAEAV1\@W4GameType\@\@\@Z
     */
    MCAPI class LevelSettings & setGameType(enum class GameType);
    /**
     * @symbol  ?setGeneratorType\@LevelSettings\@\@QEAAAEAV1\@W4GeneratorType\@\@\@Z
     */
    MCAPI class LevelSettings & setGeneratorType(enum class GeneratorType);
    /**
     * @symbol  ?setIsEditorWorld\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setIsEditorWorld(bool);
    /**
     * @symbol  ?setOnlySpawnV1Villagers\@LevelSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @symbol  ?setOverrideSavedSettings\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setOverrideSavedSettings(bool);
    /**
     * @symbol  ?setPlatformBroadcastIntent\@LevelSettings\@\@QEAAAEAV1\@W4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI class LevelSettings & setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setRandomSeed\@LevelSettings\@\@QEAAAEAV1\@VLevelSeed64\@\@\@Z
     */
    MCAPI class LevelSettings & setRandomSeed(class LevelSeed64);
    /**
     * @symbol  ?setServerChunkTickRange\@LevelSettings\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class LevelSettings & setServerChunkTickRange(unsigned int);
    /**
     * @symbol  ?setSpawnSettings\@LevelSettings\@\@QEAAAEAV1\@USpawnSettings\@\@\@Z
     */
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    /**
     * @symbol  ?setTexturePackRequired\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setTexturePackRequired(bool);
    /**
     * @symbol  ?setUseMsaGamertagsOnly\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings & setUseMsaGamertagsOnly(bool);
    /**
     * @symbol  ?setXblBroadcastIntent\@LevelSettings\@\@QEAAAEAV1\@W4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI class LevelSettings & setXblBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?shouldOverrideSavedSettings\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool shouldOverrideSavedSettings() const;
    /**
     * @symbol  ?useMsaGamertagsOnly\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @symbol  ??1LevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~LevelSettings();
    /**
     * @symbol  ?parseSeedString\@LevelSettings\@\@SA?AV?$optional\@VLevelSeed64\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const &);

};