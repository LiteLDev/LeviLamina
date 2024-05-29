#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/enums/ChatRestrictionLevel.h"
#include "mc/enums/DaylightCycle.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/EducationEditionOffer.h"
#include "mc/enums/GameType.h"
#include "mc/enums/StorageVersion.h"
#include "mc/enums/WorldVersion.h"
#include "mc/network/NetherWorldType.h"
#include "mc/server/editor/WorldType.h"
#include "mc/world/level/levelgen/GeneratorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
    LevelData();

public:
    // NOLINTBEGIN
    // symbol: ??0LevelData@@QEAA@_N@Z
    MCAPI explicit LevelData(bool isEduMode);

    // symbol: ??0LevelData@@QEAA@$$QEAV0@@Z
    MCAPI LevelData(class LevelData&& rhs);

    // symbol:
    // ??0LevelData@@QEAA@AEBVLevelSettings@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GeneratorType@@AEBVBlockPos@@_NW4EducationEditionOffer@@MM@Z
    MCAPI LevelData(
        class LevelSettings const& settings,
        std::string const&         levelName,
        ::GeneratorType            generatorVersion,
        class BlockPos const&      defaultSpawn,
        bool                       achievementsDisabled,
        ::EducationEditionOffer    eduOffer,
        float                      rainLevel,
        float                      lightningLevel
    );

    // symbol: ?achievementsWillBeDisabledOnLoad@LevelData@@QEBA_NXZ
    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    // symbol: ?cloudSaveForWorldIsEnabled@LevelData@@QEBA_NXZ
    MCAPI bool cloudSaveForWorldIsEnabled() const;

    // symbol: ?createTag@LevelData@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;

    // symbol: ?disableAchievements@LevelData@@QEAAXXZ
    MCAPI void disableAchievements();

    // symbol: ?educationFeaturesEnabled@LevelData@@QEBA_NXZ
    MCAPI bool educationFeaturesEnabled() const;

    // symbol: ?getAdventureModeOverridesEnabled@LevelData@@QEBA_NXZ
    MCAPI bool getAdventureModeOverridesEnabled() const;

    // symbol: ?getAdventureSettings@LevelData@@QEAAAEAUAdventureSettings@@XZ
    MCAPI struct AdventureSettings& getAdventureSettings();

    // symbol: ?getAdventureSettings@LevelData@@QEBAAEBUAdventureSettings@@XZ
    MCAPI struct AdventureSettings const& getAdventureSettings() const;

    // symbol: ?getBaseGameVersion@LevelData@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    // symbol: ?getBiomeOverride@LevelData@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const getBiomeOverride() const;

    // symbol: ?getBonusChestSpawned@LevelData@@QEBA_NXZ
    MCAPI bool getBonusChestSpawned() const;

    // symbol: ?getChatRestrictionLevel@LevelData@@QEBA?AW4ChatRestrictionLevel@@XZ
    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // symbol: ?getCloudSaveInfo@LevelData@@QEBAAEBVCloudSaveLevelInfo@@XZ
    MCAPI class CloudSaveLevelInfo const& getCloudSaveInfo() const;

    // symbol: ?getCurrentTick@LevelData@@QEBAAEBUTick@@XZ
    MCAPI struct Tick const& getCurrentTick() const;

    // symbol: ?getCustomSkinsDisabled@LevelData@@QEBA_NXZ
    MCAPI bool getCustomSkinsDisabled() const;

    // symbol: ?getDaylightCycle@LevelData@@QEBA?AW4DaylightCycle@@XZ
    MCAPI ::DaylightCycle getDaylightCycle() const;

    // symbol: ?getDefaultAbilities@LevelData@@QEAAAEAVAbilities@@XZ
    MCAPI class Abilities& getDefaultAbilities();

    // symbol: ?getDefaultPermissions@LevelData@@QEAAAEAVPermissionsHandler@@XZ
    MCAPI class PermissionsHandler& getDefaultPermissions();

    // symbol: ?getDefaultPermissions@LevelData@@QEBAAEBVPermissionsHandler@@XZ
    MCAPI class PermissionsHandler const& getDefaultPermissions() const;

    // symbol: ?getEditorWorldType@LevelData@@QEBA?AW4WorldType@Editor@@XZ
    MCAPI ::Editor::WorldType getEditorWorldType() const;

    // symbol: ?getEduSharedUriResource@LevelData@@QEBAAEBVCompoundTag@@XZ
    MCAPI class CompoundTag const& getEduSharedUriResource() const;

    // symbol: ?getEducationEditionOffer@LevelData@@QEBA?AW4EducationEditionOffer@@XZ
    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

    // symbol: ?getEducationOid@LevelData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getEducationOid() const;

    // symbol: ?getEducationProductId@LevelData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getEducationProductId() const;

    // symbol: ?getEmoteChatMuted@LevelData@@QEBA_NXZ
    MCAPI bool getEmoteChatMuted() const;

    // symbol: ?getExperiments@LevelData@@QEAAAEAVExperiments@@XZ
    MCAPI class Experiments& getExperiments();

    // symbol: ?getExperiments@LevelData@@QEBAAEBVExperiments@@XZ
    MCAPI class Experiments const& getExperiments() const;

    // symbol: ?getFlatWorldGeneratorOptions@LevelData@@QEBAAEBVValue@Json@@XZ
    MCAPI class Json::Value const& getFlatWorldGeneratorOptions() const;

    // symbol: ?getForceGameType@LevelData@@QEBA_NXZ
    MCAPI bool getForceGameType() const;

    // symbol: ?getGameDifficulty@LevelData@@QEBA?AW4Difficulty@@XZ
    MCAPI ::Difficulty getGameDifficulty() const;

    // symbol: ?getGameRules@LevelData@@QEAAAEAVGameRules@@XZ
    MCAPI class GameRules& getGameRules();

    // symbol: ?getGameRules@LevelData@@QEBAAEBVGameRules@@XZ
    MCAPI class GameRules const& getGameRules() const;

    // symbol: ?getGameType@LevelData@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getGameType() const;

    // symbol: ?getGenerator@LevelData@@QEBA?AW4GeneratorType@@XZ
    MCAPI ::GeneratorType getGenerator() const;

    // symbol: ?getLANBroadcast@LevelData@@QEBA_NXZ
    MCAPI bool getLANBroadcast() const;

    // symbol: ?getLANBroadcastIntent@LevelData@@QEBA_NXZ
    MCAPI bool getLANBroadcastIntent() const;

    // symbol: ?getLevelName@LevelData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getLevelName() const;

    // symbol: ?getLightningLevel@LevelData@@QEBAMXZ
    MCAPI float getLightningLevel() const;

    // symbol: ?getLightningTime@LevelData@@QEBAHXZ
    MCAPI int getLightningTime() const;

    // symbol: ?getLimitedWorldDepth@LevelData@@QEBAHXZ
    MCAPI int getLimitedWorldDepth() const;

    // symbol: ?getLimitedWorldWidth@LevelData@@QEBAHXZ
    MCAPI int getLimitedWorldWidth() const;

    // symbol: ?getLoadedPlayerTag@LevelData@@QEAAAEAVCompoundTag@@XZ
    MCAPI class CompoundTag& getLoadedPlayerTag();

    // symbol: ?getMultiplayerGameIntent@LevelData@@QEBA_NXZ
    MCAPI bool getMultiplayerGameIntent() const;

    // symbol: ?getNetherScale@LevelData@@QEBAHXZ
    MCAPI int getNetherScale() const;

    // symbol: ?getNetherType@LevelData@@QEBA?AW4NetherWorldType@@XZ
    MCAPI ::NetherWorldType getNetherType() const;

    // symbol: ?getOnlySpawnV1Villagers@LevelData@@QEBA_NXZ
    MCAPI bool getOnlySpawnV1Villagers() const;

    // symbol: ?getPersonaDisabled@LevelData@@QEBA_NXZ
    MCAPI bool getPersonaDisabled() const;

    // symbol: ?getPlatformBroadcastIntent@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    // symbol: ?getPlatformBroadcastMode@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    // symbol: ?getPremiumTemplateContentIdentity@LevelData@@QEBAAEBVContentIdentity@@XZ
    MCAPI class ContentIdentity const& getPremiumTemplateContentIdentity() const;

    // symbol: ?getRainLevel@LevelData@@QEBAMXZ
    MCAPI float getRainLevel() const;

    // symbol: ?getRainTime@LevelData@@QEBAHXZ
    MCAPI int getRainTime() const;

    // symbol: ?getSeed@LevelData@@QEBA?AVLevelSeed64@@XZ
    MCAPI class LevelSeed64 getSeed() const;

    // symbol: ?getServerChunkTickRange@LevelData@@QEBAIXZ
    MCAPI uint getServerChunkTickRange() const;

    // symbol: ?getSpawnPos@LevelData@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getSpawnPos() const;

    // symbol: ?getSpawnSettings@LevelData@@QEBAAEBUSpawnSettings@@XZ
    MCAPI struct SpawnSettings const& getSpawnSettings() const;

    // symbol: ?getStorageVersion@LevelData@@QEBA?AW4StorageVersion@@XZ
    MCAPI ::StorageVersion getStorageVersion() const;

    // symbol: ?getStoredGenerator@LevelData@@QEBA?AW4GeneratorType@@XZ
    MCAPI ::GeneratorType getStoredGenerator() const;

    // symbol: ?getTagData@LevelData@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void getTagData(class CompoundTag const& tag);

    // symbol: ?getTime@LevelData@@QEBAHXZ
    MCAPI int getTime() const;

    // symbol: ?getUseMsaGamertagsOnly@LevelData@@QEBA_NXZ
    MCAPI bool getUseMsaGamertagsOnly() const;

    // symbol: ?getWorldCenter@LevelData@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getWorldCenter() const;

    // symbol: ?getWorldStartCount@LevelData@@QEBAIXZ
    MCAPI uint getWorldStartCount() const;

    // symbol: ?getWorldTemplateIdentity@LevelData@@QEBAAEBUPackIdVersion@@XZ
    MCAPI struct PackIdVersion const& getWorldTemplateIdentity() const;

    // symbol: ?getWorldVersion@LevelData@@QEBA?AW4WorldVersion@@XZ
    MCAPI ::WorldVersion getWorldVersion() const;

    // symbol: ?getXBLBroadcastIntent@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    // symbol: ?getXBLBroadcastMode@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    // symbol: ?hasAchievementsDisabled@LevelData@@QEBA_NXZ
    MCAPI bool hasAchievementsDisabled() const;

    // symbol: ?hasBonusChestEnabled@LevelData@@QEBA_NXZ
    MCAPI bool hasBonusChestEnabled() const;

    // symbol: ?hasCheatsEnabled@LevelData@@QEBA_NXZ
    MCAPI bool hasCheatsEnabled() const;

    // symbol: ?hasCommandsEnabled@LevelData@@QEBA_NXZ
    MCAPI bool hasCommandsEnabled() const;

    // symbol: ?hasConfirmedPlatformLockedContent@LevelData@@QEBA_NXZ
    MCAPI bool hasConfirmedPlatformLockedContent() const;

    // symbol: ?hasLockedBehaviorPack@LevelData@@QEBA_NXZ
    MCAPI bool hasLockedBehaviorPack() const;

    // symbol: ?hasLockedResourcePack@LevelData@@QEBA_NXZ
    MCAPI bool hasLockedResourcePack() const;

    // symbol: ?hasMapsCenteredToOrigin@LevelData@@QEBA_NXZ
    MCAPI bool hasMapsCenteredToOrigin() const;

    // symbol: ?hasStartWithMapEnabled@LevelData@@QEBA_NXZ
    MCAPI bool hasStartWithMapEnabled() const;

    // symbol: ?incrementTick@LevelData@@QEAAXXZ
    MCAPI void incrementTick();

    // symbol: ?isAlwaysDay@LevelData@@QEBA_NXZ
    MCAPI bool isAlwaysDay() const;

    // symbol: ?isCreatedInEditor@LevelData@@QEBA_NXZ
    MCAPI bool isCreatedInEditor() const;

    // symbol: ?isEditorWorld@LevelData@@QEBA_NXZ
    MCAPI bool isEditorWorld() const;

    // symbol: ?isEducationEditionLevel@LevelData@@QEBA_NXZ
    MCAPI bool isEducationEditionLevel() const;

    // symbol: ?isExportedFromEditor@LevelData@@QEBA_NXZ
    MCAPI bool isExportedFromEditor() const;

    // symbol: ?isFromLockedTemplate@LevelData@@QEBA_NXZ
    MCAPI bool isFromLockedTemplate() const;

    // symbol: ?isFromWorldTemplate@LevelData@@QEBA_NXZ
    MCAPI bool isFromWorldTemplate() const;

    // symbol: ?isHardcore@LevelData@@QEBA_NXZ
    MCAPI bool isHardcore() const;

    // symbol: ?isLegacyLevel@LevelData@@QEBA_NXZ
    MCAPI bool isLegacyLevel() const;

    // symbol: ?isLightning@LevelData@@QEBA_NXZ
    MCAPI bool isLightning() const;

    // symbol: ?isMultiplayerGame@LevelData@@QEBA_NXZ
    MCAPI bool isMultiplayerGame() const;

    // symbol: ?isPremiumWorldTemplate@LevelData@@QEBA_NXZ
    MCAPI bool isPremiumWorldTemplate() const;

    // symbol: ?isRaining@LevelData@@QEBA_NXZ
    MCAPI bool isRaining() const;

    // symbol: ?isTexturepacksRequired@LevelData@@QEBA_NXZ
    MCAPI bool isTexturepacksRequired() const;

    // symbol: ?isWorldTemplateOptionLocked@LevelData@@QEBA_NXZ
    MCAPI bool isWorldTemplateOptionLocked() const;

    // symbol: ??4LevelData@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LevelData& operator=(class LevelData&& rhs);

    // symbol: ?recordStartUp@LevelData@@QEAAXXZ
    MCAPI void recordStartUp();

    // symbol: ?setAdventureModeOverridesEnabled@LevelData@@QEAAX_N@Z
    MCAPI void setAdventureModeOverridesEnabled(bool);

    // symbol: ?setBaseGameVersion@LevelData@@QEAAXAEBVBaseGameVersion@@@Z
    MCAPI void setBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    // symbol: ?setBonusChestSpawned@LevelData@@QEAAX_N@Z
    MCAPI void setBonusChestSpawned(bool bonusChestSpawned);

    // symbol: ?setChatRestrictionLevel@LevelData@@QEAAXW4ChatRestrictionLevel@@@Z
    MCAPI void setChatRestrictionLevel(::ChatRestrictionLevel);

    // symbol: ?setCommandsEnabled@LevelData@@QEAAX_N@Z
    MCAPI void setCommandsEnabled(bool commandsEnabled);

    // symbol: ?setCustomSkinsDisabled@LevelData@@QEAAX_N@Z
    MCAPI void setCustomSkinsDisabled(bool val);

    // symbol: ?setDataDrivenGenerator@LevelData@@QEAAXW4GeneratorType@@@Z
    MCAPI void setDataDrivenGenerator(::GeneratorType type);

    // symbol: ?setEduSharedUriResource@LevelData@@QEAAXAEBUEduSharedUriResource@@@Z
    MCAPI void setEduSharedUriResource(struct EduSharedUriResource const&);

    // symbol: ?setEducationEditionOffer@LevelData@@QEAAXW4EducationEditionOffer@@@Z
    MCAPI void setEducationEditionOffer(::EducationEditionOffer offer);

    // symbol: ?setEducationFeaturesEnabled@LevelData@@QEAAX_N@Z
    MCAPI void setEducationFeaturesEnabled(bool educationEnabled);

    // symbol: ?setEducationOid@LevelData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setEducationOid(std::string const& educationOid);

    // symbol: ?setEmoteChatMuted@LevelData@@QEAAX_N@Z
    MCAPI void setEmoteChatMuted(bool val);

    // symbol: ?setForceGameType@LevelData@@QEAAX_N@Z
    MCAPI void setForceGameType(bool value);

    // symbol: ?setGameDifficulty@LevelData@@QEAAXW4Difficulty@@@Z
    MCAPI void setGameDifficulty(::Difficulty difficulty);

    // symbol: ?setGameType@LevelData@@QEAAXW4GameType@@@Z
    MCAPI void setGameType(::GameType type);

    // symbol: ?setGenerator@LevelData@@QEAAXW4GeneratorType@@@Z
    MCAPI void setGenerator(::GeneratorType version);

    // symbol: ?setHasLockedBehaviorPack@LevelData@@QEAAX_N@Z
    MCAPI void setHasLockedBehaviorPack(bool hasLockedPack);

    // symbol: ?setHasLockedResourcePack@LevelData@@QEAAX_N@Z
    MCAPI void setHasLockedResourcePack(bool hasLockedPack);

    // symbol: ?setLANBroadcast@LevelData@@QEAAX_N@Z
    MCAPI void setLANBroadcast(bool broadcast);

    // symbol: ?setLANBroadcastIntent@LevelData@@QEAAX_N@Z
    MCAPI void setLANBroadcastIntent(bool broadcast);

    // symbol: ?setLevelName@LevelData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setLevelName(std::string const& levelName);

    // symbol: ?setLightningLevel@LevelData@@QEAAXM@Z
    MCAPI void setLightningLevel(float level);

    // symbol: ?setLightningTime@LevelData@@QEAAXH@Z
    MCAPI void setLightningTime(int lightningTime);

    // symbol: ?setMultiplayerGame@LevelData@@QEAAX_N@Z
    MCAPI void setMultiplayerGame(bool multiplayer);

    // symbol: ?setMultiplayerGameIntent@LevelData@@QEAAX_N@Z
    MCAPI void setMultiplayerGameIntent(bool multiplayer);

    // symbol: ?setOnlySpawnV1Villagers@LevelData@@QEAAX_N@Z
    MCAPI void setOnlySpawnV1Villagers(bool val);

    // symbol: ?setPersonaDisabled@LevelData@@QEAAX_N@Z
    MCAPI void setPersonaDisabled(bool val);

    // symbol: ?setPlatformBroadcastIntent@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
    MCAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    // symbol: ?setPlatformBroadcastMode@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
    MCAPI void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    // symbol: ?setRainLevel@LevelData@@QEAAXM@Z
    MCAPI void setRainLevel(float level);

    // symbol: ?setRainTime@LevelData@@QEAAXH@Z
    MCAPI void setRainTime(int rainTime);

    // symbol: ?setSeed@LevelData@@QEAAXVLevelSeed64@@@Z
    MCAPI void setSeed(class LevelSeed64 seed);

    // symbol: ?setServerChunkTickRange@LevelData@@QEAAXI@Z
    MCAPI void setServerChunkTickRange(uint newRange);

    // symbol: ?setSpawnPos@LevelData@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setSpawnPos(class BlockPos const& spawn);

    // symbol: ?setStorageVersion@LevelData@@QEAAXW4StorageVersion@@@Z
    MCAPI void setStorageVersion(::StorageVersion version);

    // symbol: ?setTagData@LevelData@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void setTagData(class CompoundTag& tag) const;

    // symbol: ?setTexturepacksRequired@LevelData@@QEAAX_N@Z
    MCAPI void setTexturepacksRequired(bool texturepacksRequired);

    // symbol: ?setTime@LevelData@@QEAAXH@Z
    MCAPI void setTime(int time);

    // symbol: ?setUseMsaGamertagsOnly@LevelData@@QEAAX_N@Z
    MCAPI void setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    // symbol: ?setWorldTemplateIdentity@LevelData@@QEAAXAEBUPackIdVersion@@@Z
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const& packIdVersion);

    // symbol: ?setWorldTemplateOptionLocked@LevelData@@QEAAX_N@Z
    MCAPI void setWorldTemplateOptionLocked(bool isLocked);

    // symbol: ?setWorldVersion@LevelData@@QEAAXW4WorldVersion@@@Z
    MCAPI void setWorldVersion(::WorldVersion version);

    // symbol: ?setXBLBroadcastIntent@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
    MCAPI void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    // symbol: ?setXBLBroadcastMode@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
    MCAPI void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    // symbol: ?touchLastLoadedWithVersion@LevelData@@QEAAXXZ
    MCAPI void touchLastLoadedWithVersion();

    // symbol: ?v1_read@LevelData@@QEAAXAEAVBitStream@RakNet@@W4StorageVersion@@@Z
    MCAPI void v1_read(class RakNet::BitStream& bitStream, ::StorageVersion storageVersion);

    // symbol: ??1LevelData@@QEAA@XZ
    MCAPI ~LevelData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setValue@LevelData@@AEAAXAEBVHashedString@@$$QEAULevelDataValue@@@Z
    MCAPI void _setValue(class HashedString const& key, struct LevelDataValue&& value);

    // NOLINTEND
};
