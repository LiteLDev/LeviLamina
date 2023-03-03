/**
 * @file  LevelData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Social.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelData.
 *
 */
class LevelData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDATA
public:
    class LevelData& operator=(class LevelData const &) = delete;
    LevelData(class LevelData const &) = delete;
    LevelData() = delete;
#endif

public:
    /**
     * @symbol  ??0LevelData\@\@QEAA\@_N\@Z
     */
    MCAPI LevelData(bool);
    /**
     * @symbol  ??0LevelData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelData(class LevelData &&);
    /**
     * @symbol  ??0LevelData\@\@QEAA\@AEBVLevelSettings\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GeneratorType\@\@AEBVBlockPos\@\@_NW4EducationEditionOffer\@\@MM\@Z
     */
    MCAPI LevelData(class LevelSettings const &, std::string const &, enum class GeneratorType, class BlockPos const &, bool, enum class EducationEditionOffer, float, float);
    /**
     * @symbol  ?_getValue\@LevelData\@\@QEBAPEBULevelDataValue\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct LevelDataValue const * _getValue(class HashedString const &) const;
    /**
     * @symbol  ?achievementsWillBeDisabledOnLoad\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @symbol  ?createTag\@LevelData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;
    /**
     * @symbol  ?disableAchievements\@LevelData\@\@QEAAXXZ
     */
    MCAPI void disableAchievements();
    /**
     * @symbol  ?educationFeaturesEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @symbol  ?getAdventureSettings\@LevelData\@\@QEAAAEAUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings & getAdventureSettings();
    /**
     * @symbol  ?getAdventureSettings\@LevelData\@\@QEBAAEBUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings const & getAdventureSettings() const;
    /**
     * @symbol  ?getBaseGameVersion\@LevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol  ?getBiomeOverride\@LevelData\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getBiomeOverride() const;
    /**
     * @symbol  ?getBonusChestSpawned\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getBonusChestSpawned() const;
    /**
     * @symbol  ?getChatRestrictionLevel\@LevelData\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol  ?getCurrentTick\@LevelData\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const & getCurrentTick() const;
    /**
     * @symbol  ?getCustomSkinsDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @symbol  ?getDefaultAbilities\@LevelData\@\@QEAAAEAVAbilities\@\@XZ
     */
    MCAPI class Abilities & getDefaultAbilities();
    /**
     * @symbol  ?getDefaultPermissions\@LevelData\@\@QEAAAEAVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler & getDefaultPermissions();
    /**
     * @symbol  ?getDefaultPermissions\@LevelData\@\@QEBAAEBVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @symbol  ?getEduSharedUriResource\@LevelData\@\@QEBAAEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const & getEduSharedUriResource() const;
    /**
     * @symbol  ?getEducationEditionOffer\@LevelData\@\@QEBA?AW4EducationEditionOffer\@\@XZ
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @symbol  ?getEducationOid\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getEducationOid() const;
    /**
     * @symbol  ?getEducationProductId\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getEducationProductId() const;
    /**
     * @symbol  ?getEmoteChatMuted\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getEmoteChatMuted() const;
    /**
     * @symbol  ?getExperiments\@LevelData\@\@QEAAAEAVExperiments\@\@XZ
     */
    MCAPI class Experiments & getExperiments();
    /**
     * @symbol  ?getExperiments\@LevelData\@\@QEBAAEBVExperiments\@\@XZ
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @symbol  ?getFlatWorldGeneratorOptions\@LevelData\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const & getFlatWorldGeneratorOptions() const;
    /**
     * @symbol  ?getForceGameType\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getForceGameType() const;
    /**
     * @symbol  ?getGameDifficulty\@LevelData\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @symbol  ?getGameRules\@LevelData\@\@QEAAAEAVGameRules\@\@XZ
     */
    MCAPI class GameRules & getGameRules();
    /**
     * @symbol  ?getGameRules\@LevelData\@\@QEBAAEBVGameRules\@\@XZ
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @symbol  ?getGameType\@LevelData\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @symbol  ?getGenerator\@LevelData\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @symbol  ?getIsSingleUseWorld\@LevelData\@\@QEBA?B_NXZ
     */
    MCAPI bool const getIsSingleUseWorld() const;
    /**
     * @symbol  ?getLANBroadcast\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getLANBroadcast() const;
    /**
     * @symbol  ?getLANBroadcastIntent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getLANBroadcastIntent() const;
    /**
     * @symbol  ?getLastPlayed\@LevelData\@\@QEBA_JXZ
     */
    MCAPI __int64 getLastPlayed() const;
    /**
     * @symbol  ?getLevelName\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @symbol  ?getLightningLevel\@LevelData\@\@QEBAMXZ
     */
    MCAPI float getLightningLevel() const;
    /**
     * @symbol  ?getLightningTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLightningTime() const;
    /**
     * @symbol  ?getLimitedWorldDepth\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @symbol  ?getLimitedWorldWidth\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @symbol  ?getLoadedPlayerTag\@LevelData\@\@QEAAAEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag & getLoadedPlayerTag();
    /**
     * @symbol  ?getMinCompatibleClientVersion\@LevelData\@\@QEBAAEBVGameVersion\@\@XZ
     */
    MCAPI class GameVersion const & getMinCompatibleClientVersion() const;
    /**
     * @symbol  ?getMultiplayerGameIntent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @symbol  ?getNetherScale\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getNetherScale() const;
    /**
     * @symbol  ?getNetherType\@LevelData\@\@QEBA?AW4NetherWorldType\@\@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @symbol  ?getNetworkVersion\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getNetworkVersion() const;
    /**
     * @symbol  ?getOnlySpawnV1Villagers\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @symbol  ?getPersonaDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @symbol  ?getPlatformBroadcastIntent\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @symbol  ?getPlatformBroadcastMode\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const;
    /**
     * @symbol  ?getPremiumTemplateContentIdentity\@LevelData\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const & getPremiumTemplateContentIdentity() const;
    /**
     * @symbol  ?getRainLevel\@LevelData\@\@QEBAMXZ
     */
    MCAPI float getRainLevel() const;
    /**
     * @symbol  ?getRainTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getRainTime() const;
    /**
     * @symbol  ?getSeed\@LevelData\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @symbol  ?getServerChunkTickRange\@LevelData\@\@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @symbol  ?getSpawnPos\@LevelData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSpawnPos() const;
    /**
     * @symbol  ?getSpawnSettings\@LevelData\@\@QEBAAEBUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings const & getSpawnSettings() const;
    /**
     * @symbol  ?getStorageVersion\@LevelData\@\@QEBA?AW4StorageVersion\@\@XZ
     */
    MCAPI enum class StorageVersion getStorageVersion() const;
    /**
     * @symbol  ?getStoredGenerator\@LevelData\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getStoredGenerator() const;
    /**
     * @symbol  ?getTagData\@LevelData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol  ?getTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getTime() const;
    /**
     * @symbol  ?getUseMsaGamertagsOnly\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getUseMsaGamertagsOnly() const;
    /**
     * @symbol  ?getWorldCenter\@LevelData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getWorldCenter() const;
    /**
     * @symbol  ?getWorldStartCount\@LevelData\@\@QEBAIXZ
     */
    MCAPI unsigned int getWorldStartCount() const;
    /**
     * @symbol  ?getWorldTemplateIdentity\@LevelData\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @symbol  ?getWorldVersion\@LevelData\@\@QEBA?AW4WorldVersion\@\@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @symbol  ?getXBLBroadcastIntent\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @symbol  ?getXBLBroadcastMode\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const;
    /**
     * @symbol  ?hasAchievementsDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @symbol  ?hasBonusChestEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @symbol  ?hasCommandsEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @symbol  ?hasConfirmedPlatformLockedContent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @symbol  ?hasLockedBehaviorPack\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @symbol  ?hasLockedResourcePack\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @symbol  ?hasMapsCenteredToOrigin\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasMapsCenteredToOrigin() const;
    /**
     * @symbol  ?hasStartWithMapEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @symbol  ?incrementTick\@LevelData\@\@QEAAXXZ
     */
    MCAPI void incrementTick();
    /**
     * @symbol  ?isEditorWorld\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @symbol  ?isEducationEditionLevel\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isEducationEditionLevel() const;
    /**
     * @symbol  ?isFromLockedTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @symbol  ?isFromWorldTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @symbol  ?isLegacyLevel\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isLegacyLevel() const;
    /**
     * @symbol  ?isLightning\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isLightning() const;
    /**
     * @symbol  ?isMultiplayerGame\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isMultiplayerGame() const;
    /**
     * @symbol  ?isPremiumWorldTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumWorldTemplate() const;
    /**
     * @symbol  ?isRaining\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isRaining() const;
    /**
     * @symbol  ?isTexturepacksRequired\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @symbol  ?isWorldTemplateOptionLocked\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @symbol  ??4LevelData\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelData & operator=(class LevelData &&);
    /**
     * @symbol  ?recordStartUp\@LevelData\@\@QEAAXXZ
     */
    MCAPI void recordStartUp();
    /**
     * @symbol  ?setBaseGameVersion\@LevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?setBonusChestSpawned\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setBonusChestSpawned(bool);
    /**
     * @symbol  ?setChatRestrictionLevel\@LevelData\@\@QEAAXW4ChatRestrictionLevel\@\@\@Z
     */
    MCAPI void setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @symbol  ?setCommandsEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setCommandsEnabled(bool);
    /**
     * @symbol  ?setCustomSkinsDisabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomSkinsDisabled(bool);
    /**
     * @symbol  ?setDataDrivenGenerator\@LevelData\@\@QEAAXW4GeneratorType\@\@\@Z
     */
    MCAPI void setDataDrivenGenerator(enum class GeneratorType);
    /**
     * @symbol  ?setEduSharedUriResource\@LevelData\@\@QEAAXAEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI void setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @symbol  ?setEducationEditionOffer\@LevelData\@\@QEAAXW4EducationEditionOffer\@\@\@Z
     */
    MCAPI void setEducationEditionOffer(enum class EducationEditionOffer);
    /**
     * @symbol  ?setEducationFeaturesEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setEducationFeaturesEnabled(bool);
    /**
     * @symbol  ?setEducationOid\@LevelData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setEducationOid(std::string const &);
    /**
     * @symbol  ?setEmoteChatMuted\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setEmoteChatMuted(bool);
    /**
     * @symbol  ?setForceGameType\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setForceGameType(bool);
    /**
     * @symbol  ?setGameDifficulty\@LevelData\@\@QEAAXW4Difficulty\@\@\@Z
     */
    MCAPI void setGameDifficulty(enum class Difficulty);
    /**
     * @symbol  ?setGameType\@LevelData\@\@QEAAXW4GameType\@\@\@Z
     */
    MCAPI void setGameType(enum class GameType);
    /**
     * @symbol  ?setGenerator\@LevelData\@\@QEAAXW4GeneratorType\@\@\@Z
     */
    MCAPI void setGenerator(enum class GeneratorType);
    /**
     * @symbol  ?setHasLockedBehaviorPack\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setHasLockedBehaviorPack(bool);
    /**
     * @symbol  ?setHasLockedResourcePack\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setHasLockedResourcePack(bool);
    /**
     * @symbol  ?setIsEditorWorld\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsEditorWorld(bool);
    /**
     * @symbol  ?setLANBroadcast\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setLANBroadcast(bool);
    /**
     * @symbol  ?setLANBroadcastIntent\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setLANBroadcastIntent(bool);
    /**
     * @symbol  ?setLevelName\@LevelData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLevelName(std::string const &);
    /**
     * @symbol  ?setLightningLevel\@LevelData\@\@QEAAXM\@Z
     */
    MCAPI void setLightningLevel(float);
    /**
     * @symbol  ?setLightningTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setLightningTime(int);
    /**
     * @symbol  ?setMultiplayerGame\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setMultiplayerGame(bool);
    /**
     * @symbol  ?setMultiplayerGameIntent\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setMultiplayerGameIntent(bool);
    /**
     * @symbol  ?setOnlySpawnV1Villagers\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @symbol  ?setPersonaDisabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setPersonaDisabled(bool);
    /**
     * @symbol  ?setPlatformBroadcastIntent\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setPlatformBroadcastMode\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setPremiumTemplateContentIdentity\@LevelData\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setPremiumTemplateContentIdentity(class ContentIdentity const &);
    /**
     * @symbol  ?setRainLevel\@LevelData\@\@QEAAXM\@Z
     */
    MCAPI void setRainLevel(float);
    /**
     * @symbol  ?setRainTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setRainTime(int);
    /**
     * @symbol  ?setSeed\@LevelData\@\@QEAAXVLevelSeed64\@\@\@Z
     */
    MCAPI void setSeed(class LevelSeed64);
    /**
     * @symbol  ?setServerChunkTickRange\@LevelData\@\@QEAAXI\@Z
     */
    MCAPI void setServerChunkTickRange(unsigned int);
    /**
     * @symbol  ?setSpawnPos\@LevelData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setSpawnPos(class BlockPos const &);
    /**
     * @symbol  ?setStorageVersion\@LevelData\@\@QEAAXW4StorageVersion\@\@\@Z
     */
    MCAPI void setStorageVersion(enum class StorageVersion);
    /**
     * @symbol  ?setTagData\@LevelData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol  ?setTexturepacksRequired\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setTexturepacksRequired(bool);
    /**
     * @symbol  ?setTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setTime(int);
    /**
     * @symbol  ?setUseMsaGamertagsOnly\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setUseMsaGamertagsOnly(bool);
    /**
     * @symbol  ?setWorldTemplateIdentity\@LevelData\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @symbol  ?setWorldTemplateOptionLocked\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setWorldTemplateOptionLocked(bool);
    /**
     * @symbol  ?setWorldVersion\@LevelData\@\@QEAAXW4WorldVersion\@\@\@Z
     */
    MCAPI void setWorldVersion(enum class WorldVersion);
    /**
     * @symbol  ?setXBLBroadcastIntent\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setXBLBroadcastMode\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?touchLastLoadedWithVersion\@LevelData\@\@QEAAXXZ
     */
    MCAPI void touchLastLoadedWithVersion();
    /**
     * @symbol  ?updateLastTimePlayed\@LevelData\@\@QEBAXXZ
     */
    MCAPI void updateLastTimePlayed() const;
    /**
     * @symbol  ?v1_read\@LevelData\@\@QEAAXAEAVBitStream\@RakNet\@\@W4StorageVersion\@\@\@Z
     */
    MCAPI void v1_read(class RakNet::BitStream &, enum class StorageVersion);
    /**
     * @symbol  ??1LevelData\@\@QEAA\@XZ
     */
    MCAPI ~LevelData();

//private:
    /**
     * @symbol  ?_determineMaxBaseGameVersion\@LevelData\@\@AEAAXXZ
     */
    MCAPI void _determineMaxBaseGameVersion();
    /**
     * @symbol  ?_setGameRulesBasedOnPremiumContentIdentity\@LevelData\@\@AEAAXXZ
     */
    MCAPI void _setGameRulesBasedOnPremiumContentIdentity();
    /**
     * @symbol  ?_setValue\@LevelData\@\@AEAAXAEBVHashedString\@\@$$QEAULevelDataValue\@\@\@Z
     */
    MCAPI void _setValue(class HashedString const &, struct LevelDataValue &&);

private:

};