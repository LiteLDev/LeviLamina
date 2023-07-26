#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace RakNet { class BitStream; }
namespace Social { enum class GamePublishSetting; }
// clang-format on

class LevelData {

public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&) = delete;
    LevelData(LevelData const&)            = delete;
    LevelData()                            = delete;

public:
    /**
     * @symbol ??0LevelData\@\@QEAA\@_N\@Z
     */
    MCAPI LevelData(bool); // NOLINT
    /**
     * @symbol ??0LevelData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelData(class LevelData&&); // NOLINT
    /**
     * @symbol
     * ??0LevelData\@\@QEAA\@AEBVLevelSettings\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GeneratorType\@\@AEBVBlockPos\@\@_NW4EducationEditionOffer\@\@MM\@Z
     */
    MCAPI LevelData(
        class LevelSettings const&,
        std::string const&,
        enum class GeneratorType,
        class BlockPos const&,
        bool,
        enum class EducationEditionOffer,
        float,
        float
    ); // NOLINT
    /**
     * @symbol ?achievementsWillBeDisabledOnLoad\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const; // NOLINT
    /**
     * @symbol
     * ?createTag\@LevelData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const; // NOLINT
    /**
     * @symbol ?disableAchievements\@LevelData\@\@QEAAXXZ
     */
    MCAPI void disableAchievements(); // NOLINT
    /**
     * @symbol ?educationFeaturesEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const; // NOLINT
    /**
     * @symbol ?getAdventureModeOverridesEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getAdventureModeOverridesEnabled() const; // NOLINT
    /**
     * @symbol ?getAdventureSettings\@LevelData\@\@QEAAAEAUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings& getAdventureSettings(); // NOLINT
    /**
     * @symbol ?getAdventureSettings\@LevelData\@\@QEBAAEBUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings const& getAdventureSettings() const; // NOLINT
    /**
     * @symbol ?getBaseGameVersion\@LevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const& getBaseGameVersion() const; // NOLINT
    /**
     * @symbol
     * ?getBiomeOverride\@LevelData\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getBiomeOverride() const; // NOLINT
    /**
     * @symbol ?getBonusChestSpawned\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getBonusChestSpawned() const; // NOLINT
    /**
     * @symbol ?getChatRestrictionLevel\@LevelData\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const; // NOLINT
    /**
     * @symbol ?getCurrentTick\@LevelData\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const& getCurrentTick() const; // NOLINT
    /**
     * @symbol ?getCustomSkinsDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const; // NOLINT
    /**
     * @symbol ?getDaylightCycle\@LevelData\@\@QEBA?AW4DaylightCycle\@\@XZ
     */
    MCAPI enum class DaylightCycle getDaylightCycle() const; // NOLINT
    /**
     * @symbol ?getDefaultAbilities\@LevelData\@\@QEAAAEAVAbilities\@\@XZ
     */
    MCAPI class Abilities& getDefaultAbilities(); // NOLINT
    /**
     * @symbol ?getDefaultPermissions\@LevelData\@\@QEBAAEBVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler const& getDefaultPermissions() const; // NOLINT
    /**
     * @symbol ?getDefaultPermissions\@LevelData\@\@QEAAAEAVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler& getDefaultPermissions(); // NOLINT
    /**
     * @symbol ?getEduSharedUriResource\@LevelData\@\@QEBAAEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const& getEduSharedUriResource() const; // NOLINT
    /**
     * @symbol ?getEducationEditionOffer\@LevelData\@\@QEBA?AW4EducationEditionOffer\@\@XZ
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const; // NOLINT
    /**
     * @symbol
     * ?getEducationOid\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getEducationOid() const; // NOLINT
    /**
     * @symbol
     * ?getEducationProductId\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getEducationProductId() const; // NOLINT
    /**
     * @symbol ?getEmoteChatMuted\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getEmoteChatMuted() const; // NOLINT
    /**
     * @symbol ?getExperiments\@LevelData\@\@QEBAAEBVExperiments\@\@XZ
     */
    MCAPI class Experiments const& getExperiments() const; // NOLINT
    /**
     * @symbol ?getExperiments\@LevelData\@\@QEAAAEAVExperiments\@\@XZ
     */
    MCAPI class Experiments& getExperiments(); // NOLINT
    /**
     * @symbol ?getFlatWorldGeneratorOptions\@LevelData\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const& getFlatWorldGeneratorOptions() const; // NOLINT
    /**
     * @symbol ?getForceGameType\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getForceGameType() const; // NOLINT
    /**
     * @symbol ?getGameDifficulty\@LevelData\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const; // NOLINT
    /**
     * @symbol ?getGameRules\@LevelData\@\@QEBAAEBVGameRules\@\@XZ
     */
    MCAPI class GameRules const& getGameRules() const; // NOLINT
    /**
     * @symbol ?getGameRules\@LevelData\@\@QEAAAEAVGameRules\@\@XZ
     */
    MCAPI class GameRules& getGameRules(); // NOLINT
    /**
     * @symbol ?getGameType\@LevelData\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const; // NOLINT
    /**
     * @symbol ?getGenerator\@LevelData\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getGenerator() const; // NOLINT
    /**
     * @symbol ?getLANBroadcast\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getLANBroadcast() const; // NOLINT
    /**
     * @symbol ?getLANBroadcastIntent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getLANBroadcastIntent() const; // NOLINT
    /**
     * @symbol
     * ?getLevelName\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLevelName() const; // NOLINT
    /**
     * @symbol ?getLightningLevel\@LevelData\@\@QEBAMXZ
     */
    MCAPI float getLightningLevel() const; // NOLINT
    /**
     * @symbol ?getLightningTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLightningTime() const; // NOLINT
    /**
     * @symbol ?getLimitedWorldDepth\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const; // NOLINT
    /**
     * @symbol ?getLimitedWorldWidth\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const; // NOLINT
    /**
     * @symbol ?getMultiplayerGameIntent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const; // NOLINT
    /**
     * @symbol ?getNetherScale\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getNetherScale() const; // NOLINT
    /**
     * @symbol ?getNetherType\@LevelData\@\@QEBA?AW4NetherWorldType\@\@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const; // NOLINT
    /**
     * @symbol ?getOnlySpawnV1Villagers\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const; // NOLINT
    /**
     * @symbol ?getPersonaDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const; // NOLINT
    /**
     * @symbol ?getPlatformBroadcastIntent\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getPlatformBroadcastMode\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const; // NOLINT
    /**
     * @symbol ?getPremiumTemplateContentIdentity\@LevelData\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const& getPremiumTemplateContentIdentity() const; // NOLINT
    /**
     * @symbol ?getRainLevel\@LevelData\@\@QEBAMXZ
     */
    MCAPI float getRainLevel() const; // NOLINT
    /**
     * @symbol ?getRainTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getRainTime() const; // NOLINT
    /**
     * @symbol ?getSeed\@LevelData\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getSeed() const; // NOLINT
    /**
     * @symbol ?getServerChunkTickRange\@LevelData\@\@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const; // NOLINT
    /**
     * @symbol ?getSpawnPos\@LevelData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getSpawnPos() const; // NOLINT
    /**
     * @symbol ?getSpawnSettings\@LevelData\@\@QEBAAEBUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings const& getSpawnSettings() const; // NOLINT
    /**
     * @symbol ?getStorageVersion\@LevelData\@\@QEBA?AW4StorageVersion\@\@XZ
     */
    MCAPI enum class StorageVersion getStorageVersion() const; // NOLINT
    /**
     * @symbol ?getStoredGenerator\@LevelData\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getStoredGenerator() const; // NOLINT
    /**
     * @symbol ?getTagData\@LevelData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?getTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getTime() const; // NOLINT
    /**
     * @symbol ?getUseMsaGamertagsOnly\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getUseMsaGamertagsOnly() const; // NOLINT
    /**
     * @symbol ?getWorldCenter\@LevelData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getWorldCenter() const; // NOLINT
    /**
     * @symbol ?getWorldStartCount\@LevelData\@\@QEBAIXZ
     */
    MCAPI unsigned int getWorldStartCount() const; // NOLINT
    /**
     * @symbol ?getWorldTemplateIdentity\@LevelData\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const& getWorldTemplateIdentity() const; // NOLINT
    /**
     * @symbol ?getWorldVersion\@LevelData\@\@QEBA?AW4WorldVersion\@\@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const; // NOLINT
    /**
     * @symbol ?getXBLBroadcastIntent\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getXBLBroadcastMode\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const; // NOLINT
    /**
     * @symbol ?hasAchievementsDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const; // NOLINT
    /**
     * @symbol ?hasBonusChestEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const; // NOLINT
    /**
     * @symbol ?hasCheatsEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasCheatsEnabled() const; // NOLINT
    /**
     * @symbol ?hasCommandsEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const; // NOLINT
    /**
     * @symbol ?hasConfirmedPlatformLockedContent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const; // NOLINT
    /**
     * @symbol ?hasLockedBehaviorPack\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const; // NOLINT
    /**
     * @symbol ?hasLockedResourcePack\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const; // NOLINT
    /**
     * @symbol ?hasMapsCenteredToOrigin\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasMapsCenteredToOrigin() const; // NOLINT
    /**
     * @symbol ?hasStartWithMapEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const; // NOLINT
    /**
     * @symbol ?incrementTick\@LevelData\@\@QEAAXXZ
     */
    MCAPI void incrementTick(); // NOLINT
    /**
     * @symbol ?isCreatedInEditor\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isCreatedInEditor() const; // NOLINT
    /**
     * @symbol ?isEditorWorld\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const; // NOLINT
    /**
     * @symbol ?isEducationEditionLevel\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isEducationEditionLevel() const; // NOLINT
    /**
     * @symbol ?isExportedFromEditor\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isExportedFromEditor() const; // NOLINT
    /**
     * @symbol ?isFromLockedTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const; // NOLINT
    /**
     * @symbol ?isFromWorldTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const; // NOLINT
    /**
     * @symbol ?isLegacyLevel\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isLegacyLevel() const; // NOLINT
    /**
     * @symbol ?isLightning\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isLightning() const; // NOLINT
    /**
     * @symbol ?isMultiplayerGame\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isMultiplayerGame() const; // NOLINT
    /**
     * @symbol ?isPremiumWorldTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumWorldTemplate() const; // NOLINT
    /**
     * @symbol ?isRaining\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isRaining() const; // NOLINT
    /**
     * @symbol ?isTexturepacksRequired\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const; // NOLINT
    /**
     * @symbol ?isWorldTemplateOptionLocked\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const; // NOLINT
    /**
     * @symbol ??4LevelData\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelData& operator=(class LevelData&&); // NOLINT
    /**
     * @symbol ?recordStartUp\@LevelData\@\@QEAAXXZ
     */
    MCAPI void recordStartUp(); // NOLINT
    /**
     * @symbol ?setAdventureModeOverridesEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setAdventureModeOverridesEnabled(bool); // NOLINT
    /**
     * @symbol ?setBaseGameVersion\@LevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?setBonusChestSpawned\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setBonusChestSpawned(bool); // NOLINT
    /**
     * @symbol ?setChatRestrictionLevel\@LevelData\@\@QEAAXW4ChatRestrictionLevel\@\@\@Z
     */
    MCAPI void setChatRestrictionLevel(enum class ChatRestrictionLevel); // NOLINT
    /**
     * @symbol ?setCommandsEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setCommandsEnabled(bool); // NOLINT
    /**
     * @symbol ?setCustomSkinsDisabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomSkinsDisabled(bool); // NOLINT
    /**
     * @symbol ?setDataDrivenGenerator\@LevelData\@\@QEAAXW4GeneratorType\@\@\@Z
     */
    MCAPI void setDataDrivenGenerator(enum class GeneratorType); // NOLINT
    /**
     * @symbol ?setEduSharedUriResource\@LevelData\@\@QEAAXAEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI void setEduSharedUriResource(struct EduSharedUriResource const&); // NOLINT
    /**
     * @symbol ?setEducationEditionOffer\@LevelData\@\@QEAAXW4EducationEditionOffer\@\@\@Z
     */
    MCAPI void setEducationEditionOffer(enum class EducationEditionOffer); // NOLINT
    /**
     * @symbol ?setEducationFeaturesEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setEducationFeaturesEnabled(bool); // NOLINT
    /**
     * @symbol
     * ?setEducationOid\@LevelData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setEducationOid(std::string const&); // NOLINT
    /**
     * @symbol ?setEmoteChatMuted\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setEmoteChatMuted(bool); // NOLINT
    /**
     * @symbol ?setForceGameType\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setForceGameType(bool); // NOLINT
    /**
     * @symbol ?setGameDifficulty\@LevelData\@\@QEAAXW4Difficulty\@\@\@Z
     */
    MCAPI void setGameDifficulty(enum class Difficulty); // NOLINT
    /**
     * @symbol ?setGameType\@LevelData\@\@QEAAXW4GameType\@\@\@Z
     */
    MCAPI void setGameType(enum class GameType); // NOLINT
    /**
     * @symbol ?setGenerator\@LevelData\@\@QEAAXW4GeneratorType\@\@\@Z
     */
    MCAPI void setGenerator(enum class GeneratorType); // NOLINT
    /**
     * @symbol ?setHasLockedBehaviorPack\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setHasLockedBehaviorPack(bool); // NOLINT
    /**
     * @symbol ?setHasLockedResourcePack\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setHasLockedResourcePack(bool); // NOLINT
    /**
     * @symbol ?setLANBroadcast\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setLANBroadcast(bool); // NOLINT
    /**
     * @symbol ?setLANBroadcastIntent\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setLANBroadcastIntent(bool); // NOLINT
    /**
     * @symbol
     * ?setLevelName\@LevelData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLevelName(std::string const&); // NOLINT
    /**
     * @symbol ?setLightningLevel\@LevelData\@\@QEAAXM\@Z
     */
    MCAPI void setLightningLevel(float); // NOLINT
    /**
     * @symbol ?setLightningTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setLightningTime(int); // NOLINT
    /**
     * @symbol ?setMultiplayerGame\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setMultiplayerGame(bool); // NOLINT
    /**
     * @symbol ?setMultiplayerGameIntent\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setMultiplayerGameIntent(bool); // NOLINT
    /**
     * @symbol ?setOnlySpawnV1Villagers\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool); // NOLINT
    /**
     * @symbol ?setPersonaDisabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setPersonaDisabled(bool); // NOLINT
    /**
     * @symbol ?setPlatformBroadcastIntent\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setPlatformBroadcastMode\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setPremiumTemplateContentIdentity\@LevelData\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setPremiumTemplateContentIdentity(class ContentIdentity const&); // NOLINT
    /**
     * @symbol ?setRainLevel\@LevelData\@\@QEAAXM\@Z
     */
    MCAPI void setRainLevel(float); // NOLINT
    /**
     * @symbol ?setRainTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setRainTime(int); // NOLINT
    /**
     * @symbol ?setSeed\@LevelData\@\@QEAAXVLevelSeed64\@\@\@Z
     */
    MCAPI void setSeed(class LevelSeed64); // NOLINT
    /**
     * @symbol ?setServerChunkTickRange\@LevelData\@\@QEAAXI\@Z
     */
    MCAPI void setServerChunkTickRange(unsigned int); // NOLINT
    /**
     * @symbol ?setSpawnPos\@LevelData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setSpawnPos(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setStorageVersion\@LevelData\@\@QEAAXW4StorageVersion\@\@\@Z
     */
    MCAPI void setStorageVersion(enum class StorageVersion); // NOLINT
    /**
     * @symbol ?setTagData\@LevelData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?setTexturepacksRequired\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setTexturepacksRequired(bool); // NOLINT
    /**
     * @symbol ?setTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setTime(int); // NOLINT
    /**
     * @symbol ?setUseMsaGamertagsOnly\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setUseMsaGamertagsOnly(bool); // NOLINT
    /**
     * @symbol ?setWorldTemplateIdentity\@LevelData\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const&); // NOLINT
    /**
     * @symbol ?setWorldTemplateOptionLocked\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setWorldTemplateOptionLocked(bool); // NOLINT
    /**
     * @symbol ?setWorldVersion\@LevelData\@\@QEAAXW4WorldVersion\@\@\@Z
     */
    MCAPI void setWorldVersion(enum class WorldVersion); // NOLINT
    /**
     * @symbol ?setXBLBroadcastIntent\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setXBLBroadcastMode\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?touchLastLoadedWithVersion\@LevelData\@\@QEAAXXZ
     */
    MCAPI void touchLastLoadedWithVersion(); // NOLINT
    /**
     * @symbol ?updateLastTimePlayed\@LevelData\@\@QEBAXXZ
     */
    MCAPI void updateLastTimePlayed() const; // NOLINT
    /**
     * @symbol ?v1_read\@LevelData\@\@QEAAXAEAVBitStream\@RakNet\@\@W4StorageVersion\@\@\@Z
     */
    MCAPI void v1_read(class RakNet::BitStream&, enum class StorageVersion); // NOLINT
    /**
     * @symbol ??1LevelData\@\@QEAA\@XZ
     */
    MCAPI ~LevelData(); // NOLINT

    // private:
    /**
     * @symbol ?_determineMaxBaseGameVersion\@LevelData\@\@AEAAXXZ
     */
    MCAPI void _determineMaxBaseGameVersion(); // NOLINT
    /**
     * @symbol ?_setValue\@LevelData\@\@AEAAXAEBVHashedString\@\@$$QEAULevelDataValue\@\@\@Z
     */
    MCAPI void _setValue(class HashedString const&, struct LevelDataValue&&); // NOLINT

private:
};
