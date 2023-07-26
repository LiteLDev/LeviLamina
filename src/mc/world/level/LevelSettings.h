#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Social { enum class GamePublishSetting; }
// clang-format on

class LevelSettings {

public:
    // prevent constructor by default
    LevelSettings& operator=(LevelSettings const&) = delete;

public:
    /**
     * @symbol ??0LevelSettings\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LevelSettings(class LevelSettings const&); // NOLINT
    /**
     * @symbol ??0LevelSettings\@\@QEAA\@XZ
     */
    MCAPI LevelSettings(); // NOLINT
    /**
     * @symbol ??0LevelSettings\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelSettings(class LevelSettings&&); // NOLINT
    /**
     * @symbol ??0LevelSettings\@\@QEAA\@AEBVLevelData\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI LevelSettings(class LevelData const&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?achievementsWillBeDisabledOnLoad\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const; // NOLINT
    /**
     * @symbol ?educationFeaturesEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const; // NOLINT
    /**
     * @symbol
     * ?educationProductID\@LevelSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& educationProductID() const; // NOLINT
    /**
     * @symbol ?forceGameType\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool forceGameType() const; // NOLINT
    /**
     * @symbol ?getAdventureModeOverridesEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getAdventureModeOverridesEnabled() const; // NOLINT
    /**
     * @symbol ?getBaseGameVersion\@LevelSettings\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const& getBaseGameVersion() const; // NOLINT
    /**
     * @symbol
     * ?getBiomeOverride\@LevelSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getBiomeOverride() const; // NOLINT
    /**
     * @symbol ?getChatRestrictionLevel\@LevelSettings\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const; // NOLINT
    /**
     * @symbol ?getCustomSkinsDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const; // NOLINT
    /**
     * @symbol ?getDaylightCycle\@LevelSettings\@\@QEBA?AW4DaylightCycle\@\@XZ
     */
    MCAPI enum class DaylightCycle getDaylightCycle() const; // NOLINT
    /**
     * @symbol ?getDefaultPermissions\@LevelSettings\@\@QEBAAEBVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler const& getDefaultPermissions() const; // NOLINT
    /**
     * @symbol ?getDisablePlayerInteractions\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getDisablePlayerInteractions() const; // NOLINT
    /**
     * @symbol ?getEduSharedUriResource\@LevelSettings\@\@QEBAAEBUEduSharedUriResource\@\@XZ
     */
    MCAPI struct EduSharedUriResource const& getEduSharedUriResource() const; // NOLINT
    /**
     * @symbol ?getEducationLevelSettings\@LevelSettings\@\@QEBAAEBV?$optional\@UEducationLevelSettings\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const; // NOLINT
    /**
     * @symbol ?getEmoteChatMuted\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getEmoteChatMuted() const; // NOLINT
    /**
     * @symbol ?getExperiments\@LevelSettings\@\@QEBAAEBVExperiments\@\@XZ
     */
    MCAPI class Experiments const& getExperiments() const; // NOLINT
    /**
     * @symbol ?getGameDifficulty\@LevelSettings\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const; // NOLINT
    /**
     * @symbol ?getGameRules\@LevelSettings\@\@QEBAAEBVGameRules\@\@XZ
     */
    MCAPI class GameRules const& getGameRules() const; // NOLINT
    /**
     * @symbol ?getGameType\@LevelSettings\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const; // NOLINT
    /**
     * @symbol ?getImmutableWorld\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getImmutableWorld() const; // NOLINT
    /**
     * @symbol ?getLanBroadcastIntent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getLanBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getLimitedWorldDepth\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const; // NOLINT
    /**
     * @symbol ?getLimitedWorldWidth\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const; // NOLINT
    /**
     * @symbol ?getMultiplayerGameIntent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const; // NOLINT
    /**
     * @symbol ?getNetherType\@LevelSettings\@\@QEBA?AW4NetherWorldType\@\@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const; // NOLINT
    /**
     * @symbol ?getOnlySpawnV1Villagers\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const; // NOLINT
    /**
     * @symbol ?getPersonaDisabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const; // NOLINT
    /**
     * @symbol ?getPlatformBroadcastIntent\@LevelSettings\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getSeed\@LevelSettings\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getSeed() const; // NOLINT
    /**
     * @symbol ?getServerChunkTickRange\@LevelSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const; // NOLINT
    /**
     * @symbol ?getSpawnSettings\@LevelSettings\@\@QEBA?AUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings getSpawnSettings() const; // NOLINT
    /**
     * @symbol ?getTime\@LevelSettings\@\@QEBAHXZ
     */
    MCAPI int getTime() const; // NOLINT
    /**
     * @symbol ?getWorldVersion\@LevelSettings\@\@QEBA?AW4WorldVersion\@\@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const; // NOLINT
    /**
     * @symbol ?getXBLBroadcastIntent\@LevelSettings\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?hasBonusChestEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const; // NOLINT
    /**
     * @symbol ?hasCheatsEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasCheatsEnabled() const; // NOLINT
    /**
     * @symbol ?hasCommandsEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const; // NOLINT
    /**
     * @symbol ?hasConfirmedPlatformLockedContent\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const; // NOLINT
    /**
     * @symbol ?hasLockedBehaviorPack\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const; // NOLINT
    /**
     * @symbol ?hasLockedResourcePack\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const; // NOLINT
    /**
     * @symbol ?hasStartWithMapEnabled\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const; // NOLINT
    /**
     * @symbol ?isCreatedInEditor\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isCreatedInEditor() const; // NOLINT
    /**
     * @symbol ?isEditorWorld\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const; // NOLINT
    /**
     * @symbol ?isExportedFromEditor\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isExportedFromEditor() const; // NOLINT
    /**
     * @symbol ?isFromLockedTemplate\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const; // NOLINT
    /**
     * @symbol ?isFromWorldTemplate\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const; // NOLINT
    /**
     * @symbol ?isRandomSeedAllowed\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isRandomSeedAllowed() const; // NOLINT
    /**
     * @symbol ?isTexturepacksRequired\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const; // NOLINT
    /**
     * @symbol ?isWorldTemplateOptionLocked\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const; // NOLINT
    /**
     * @symbol ??4LevelSettings\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelSettings& operator=(class LevelSettings&&); // NOLINT
    /**
     * @symbol ?setAdventureModeOverridesEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setAdventureModeOverridesEnabled(bool); // NOLINT
    /**
     * @symbol ?setBaseGameVersion\@LevelSettings\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class LevelSettings& setBaseGameVersion(class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?setChatRestrictionLevel\@LevelSettings\@\@QEAAAEAV1\@W4ChatRestrictionLevel\@\@\@Z
     */
    MCAPI class LevelSettings& setChatRestrictionLevel(enum class ChatRestrictionLevel); // NOLINT
    /**
     * @symbol ?setCommandsEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setCommandsEnabled(bool); // NOLINT
    /**
     * @symbol ?setCustomSkinsDisabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setCustomSkinsDisabled(bool); // NOLINT
    /**
     * @symbol ?setDefaultPlayerPermissions\@LevelSettings\@\@QEAAAEAV1\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI class LevelSettings& setDefaultPlayerPermissions(enum class PlayerPermissionLevel); // NOLINT
    /**
     * @symbol ?setDifficulty\@LevelSettings\@\@QEAAAEAV1\@W4Difficulty\@\@\@Z
     */
    MCAPI class LevelSettings& setDifficulty(enum class Difficulty); // NOLINT
    /**
     * @symbol ?setDisablePlayerInteractions\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setDisablePlayerInteractions(bool); // NOLINT
    /**
     * @symbol ?setEduSharedUriResource\@LevelSettings\@\@QEAAAEAV1\@AEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI class LevelSettings& setEduSharedUriResource(struct EduSharedUriResource const&); // NOLINT
    /**
     * @symbol ?setEducationEditionOffer\@LevelSettings\@\@QEAAAEAV1\@W4EducationEditionOffer\@\@\@Z
     */
    MCAPI class LevelSettings& setEducationEditionOffer(enum class EducationEditionOffer); // NOLINT
    /**
     * @symbol ?setEducationFeaturesEnabled\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setEducationFeaturesEnabled(bool); // NOLINT
    /**
     * @symbol
     * ?setEducationProductID\@LevelSettings\@\@QEAAAEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LevelSettings& setEducationProductID(std::string); // NOLINT
    /**
     * @symbol ?setEmoteChatMuted\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setEmoteChatMuted(bool); // NOLINT
    /**
     * @symbol ?setExperiments\@LevelSettings\@\@QEAAAEAV1\@AEBVExperimentStorage\@\@\@Z
     */
    MCAPI class LevelSettings& setExperiments(class ExperimentStorage const&); // NOLINT
    /**
     * @symbol ?setForceGameType\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setForceGameType(bool); // NOLINT
    /**
     * @symbol ?setGameRules\@LevelSettings\@\@QEAAAEAV1\@VGameRules\@\@\@Z
     */
    MCAPI class LevelSettings& setGameRules(class GameRules); // NOLINT
    /**
     * @symbol ?setGameType\@LevelSettings\@\@QEAAAEAV1\@W4GameType\@\@\@Z
     */
    MCAPI class LevelSettings& setGameType(enum class GameType); // NOLINT
    /**
     * @symbol ?setGeneratorType\@LevelSettings\@\@QEAAAEAV1\@W4GeneratorType\@\@\@Z
     */
    MCAPI class LevelSettings& setGeneratorType(enum class GeneratorType); // NOLINT
    /**
     * @symbol ?setOnlySpawnV1Villagers\@LevelSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool); // NOLINT
    /**
     * @symbol ?setOverrideSavedSettings\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setOverrideSavedSettings(bool); // NOLINT
    /**
     * @symbol ?setPlatformBroadcastIntent\@LevelSettings\@\@QEAAAEAV1\@W4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI class LevelSettings& setPlatformBroadcastIntent(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setRandomSeed\@LevelSettings\@\@QEAAAEAV1\@VLevelSeed64\@\@\@Z
     */
    MCAPI class LevelSettings& setRandomSeed(class LevelSeed64); // NOLINT
    /**
     * @symbol ?setServerChunkTickRange\@LevelSettings\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class LevelSettings& setServerChunkTickRange(unsigned int); // NOLINT
    /**
     * @symbol ?setSpawnSettings\@LevelSettings\@\@QEAAAEAV1\@USpawnSettings\@\@\@Z
     */
    MCAPI class LevelSettings& setSpawnSettings(struct SpawnSettings); // NOLINT
    /**
     * @symbol ?setTexturePackRequired\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setTexturePackRequired(bool); // NOLINT
    /**
     * @symbol ?setUseMsaGamertagsOnly\@LevelSettings\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class LevelSettings& setUseMsaGamertagsOnly(bool); // NOLINT
    /**
     * @symbol ?setXblBroadcastIntent\@LevelSettings\@\@QEAAAEAV1\@W4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI class LevelSettings& setXblBroadcastIntent(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?shouldOverrideSavedSettings\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool shouldOverrideSavedSettings() const; // NOLINT
    /**
     * @symbol ?useMsaGamertagsOnly\@LevelSettings\@\@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const; // NOLINT
    /**
     * @symbol ??1LevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~LevelSettings(); // NOLINT
    /**
     * @symbol
     * ?parseSeedString\@LevelSettings\@\@SA?AV?$optional\@VLevelSeed64\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const&); // NOLINT
};
