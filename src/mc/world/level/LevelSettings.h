#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ForceBlockNetworkIdsAreHashes.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/EducationLevelSettings.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/PermissionsHandler.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/enums/ChatRestrictionLevel.h"
#include "mc/enums/DaylightCycle.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/EducationEditionOffer.h"
#include "mc/enums/GameType.h"
#include "mc/enums/WorldVersion.h"
#include "mc/network/NetherWorldType.h"
#include "mc/server/editor/WorldType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"
#include "mc/world/level/levelgen/GeneratorType.h"

struct PackInstanceId;

class LevelSettings {
public:
    uchar filler[0x4E0]; // serialize<LevelSettings>::read line=1256

    // prevent constructor by default
    LevelSettings& operator=(LevelSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LevelSettings@@QEAA@XZ
    MCAPI LevelSettings();

    // symbol: ??0LevelSettings@@QEAA@$$QEAV0@@Z
    MCAPI LevelSettings(class LevelSettings&&);

    // symbol: ??0LevelSettings@@QEAA@AEBV0@@Z
    MCAPI LevelSettings(class LevelSettings const&);

    // symbol: ??0LevelSettings@@QEAA@AEBVLevelData@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI LevelSettings(class LevelData const& data, DimensionType dimension);

    // symbol: ?achievementsWillBeDisabledOnLoad@LevelSettings@@QEBA_NXZ
    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    // symbol: ?cloudSaveForWorldIsEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool cloudSaveForWorldIsEnabled() const;

    // symbol: ?educationFeaturesEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool educationFeaturesEnabled() const;

    // symbol:
    // ?educationProductID@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& educationProductID() const;

    // symbol: ?forceGameType@LevelSettings@@QEBA_NXZ
    MCAPI bool forceGameType() const;

    // symbol: ?getAdventureModeOverridesEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool getAdventureModeOverridesEnabled() const;

    // symbol: ?getBaseGameVersion@LevelSettings@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    // symbol: ?getBiomeOverride@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getBiomeOverride() const;

    // symbol: ?getChatRestrictionLevel@LevelSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // symbol: ?getCloudSaveInfo@LevelSettings@@QEBAAEBVCloudSaveLevelInfo@@XZ
    MCAPI class CloudSaveLevelInfo const& getCloudSaveInfo() const;

    // symbol: ?getCustomSkinsDisabled@LevelSettings@@QEBA_NXZ
    MCAPI bool getCustomSkinsDisabled() const;

    // symbol: ?getDaylightCycle@LevelSettings@@QEBA?AW4DaylightCycle@@XZ
    MCAPI ::DaylightCycle getDaylightCycle() const;

    // symbol: ?getDefaultPermissions@LevelSettings@@QEBAAEBVPermissionsHandler@@XZ
    MCAPI class PermissionsHandler const& getDefaultPermissions() const;

    // symbol: ?getDefaultSpawn@LevelSettings@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getDefaultSpawn() const;

    // symbol: ?getDisablePlayerInteractions@LevelSettings@@QEBA_NXZ
    MCAPI bool getDisablePlayerInteractions() const;

    // symbol: ?getEditorWorldType@LevelSettings@@QEBA?AW4WorldType@Editor@@XZ
    MCAPI ::Editor::WorldType getEditorWorldType() const;

    // symbol: ?getEduSharedUriResource@LevelSettings@@QEBAAEBUEduSharedUriResource@@XZ
    MCAPI struct EduSharedUriResource const& getEduSharedUriResource() const;

    // symbol: ?getEducationEditionOffer@LevelSettings@@QEBA?AW4EducationEditionOffer@@XZ
    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

    // symbol: ?getEducationLevelSettings@LevelSettings@@QEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
    MCAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    // symbol: ?getEmoteChatMuted@LevelSettings@@QEBA_NXZ
    MCAPI bool getEmoteChatMuted() const;

    // symbol:
    // ?getExcludedScriptModules@LevelSettings@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getExcludedScriptModules() const;

    // symbol: ?getExperiments@LevelSettings@@QEBAAEBVExperiments@@XZ
    MCAPI class Experiments const& getExperiments() const;

    // symbol: ?getGameDifficulty@LevelSettings@@QEBA?AW4Difficulty@@XZ
    MCAPI ::Difficulty getGameDifficulty() const;

    // symbol: ?getGameRules@LevelSettings@@QEBAAEBVGameRules@@XZ
    MCAPI class GameRules const& getGameRules() const;

    // symbol: ?getGameType@LevelSettings@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getGameType() const;

    // symbol: ?getGenerator@LevelSettings@@QEBA?AW4GeneratorType@@XZ
    MCAPI ::GeneratorType getGenerator() const;

    // symbol: ?getImmutableWorld@LevelSettings@@QEBA_NXZ
    MCAPI bool getImmutableWorld() const;

    // symbol: ?getLanBroadcastIntent@LevelSettings@@QEBA_NXZ
    MCAPI bool getLanBroadcastIntent() const;

    // symbol: ?getLightningLevel@LevelSettings@@QEBAMXZ
    MCAPI float getLightningLevel() const;

    // symbol: ?getLimitedWorldDepth@LevelSettings@@QEBAHXZ
    MCAPI int getLimitedWorldDepth() const;

    // symbol: ?getLimitedWorldWidth@LevelSettings@@QEBAHXZ
    MCAPI int getLimitedWorldWidth() const;

    // symbol: ?getMultiplayerGameIntent@LevelSettings@@QEBA_NXZ
    MCAPI bool getMultiplayerGameIntent() const;

    // symbol: ?getNetherType@LevelSettings@@QEBA?AW4NetherWorldType@@XZ
    MCAPI ::NetherWorldType getNetherType() const;

    // symbol: ?getOnlySpawnV1Villagers@LevelSettings@@QEBA_NXZ
    MCAPI bool getOnlySpawnV1Villagers() const;

    // symbol: ?getPersonaDisabled@LevelSettings@@QEBA_NXZ
    MCAPI bool getPersonaDisabled() const;

    // symbol: ?getPlatformBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    // symbol: ?getRainLevel@LevelSettings@@QEBAMXZ
    MCAPI float getRainLevel() const;

    // symbol: ?getSeed@LevelSettings@@QEBA?AVLevelSeed64@@XZ
    MCAPI class LevelSeed64 getSeed() const;

    // symbol: ?getServerChunkTickRange@LevelSettings@@QEBAIXZ
    MCAPI uint getServerChunkTickRange() const;

    // symbol: ?getSpawnSettings@LevelSettings@@QEBA?AUSpawnSettings@@XZ
    MCAPI struct SpawnSettings getSpawnSettings() const;

    // symbol: ?getTime@LevelSettings@@QEBAHXZ
    MCAPI int getTime() const;

    // symbol: ?getWorldVersion@LevelSettings@@QEBA?AW4WorldVersion@@XZ
    MCAPI ::WorldVersion getWorldVersion() const;

    // symbol: ?getXBLBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    // symbol: ?hasAchievementsDisabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasAchievementsDisabled() const;

    // symbol: ?hasBonusChestEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasBonusChestEnabled() const;

    // symbol: ?hasCheatsEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasCheatsEnabled() const;

    // symbol: ?hasCommandsEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasCommandsEnabled() const;

    // symbol: ?hasConfirmedPlatformLockedContent@LevelSettings@@QEBA_NXZ
    MCAPI bool hasConfirmedPlatformLockedContent() const;

    // symbol: ?hasLockedBehaviorPack@LevelSettings@@QEBA_NXZ
    MCAPI bool hasLockedBehaviorPack() const;

    // symbol: ?hasLockedResourcePack@LevelSettings@@QEBA_NXZ
    MCAPI bool hasLockedResourcePack() const;

    // symbol: ?hasStartWithMapEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasStartWithMapEnabled() const;

    // symbol: ?isCreatedInEditor@LevelSettings@@QEBA_NXZ
    MCAPI bool isCreatedInEditor() const;

    // symbol: ?isEditorWorld@LevelSettings@@QEBA_NXZ
    MCAPI bool isEditorWorld() const;

    // symbol: ?isExportedFromEditor@LevelSettings@@QEBA_NXZ
    MCAPI bool isExportedFromEditor() const;

    // symbol: ?isFromLockedTemplate@LevelSettings@@QEBA_NXZ
    MCAPI bool isFromLockedTemplate() const;

    // symbol: ?isFromWorldTemplate@LevelSettings@@QEBA_NXZ
    MCAPI bool isFromWorldTemplate() const;

    // symbol: ?isHardcore@LevelSettings@@QEBA_NXZ
    MCAPI bool isHardcore() const;

    // symbol: ?isRandomSeedAllowed@LevelSettings@@QEBA_NXZ
    MCAPI bool isRandomSeedAllowed() const;

    // symbol: ?isTexturepacksRequired@LevelSettings@@QEBA_NXZ
    MCAPI bool isTexturepacksRequired() const;

    // symbol: ?isWorldTemplateOptionLocked@LevelSettings@@QEBA_NXZ
    MCAPI bool isWorldTemplateOptionLocked() const;

    // symbol: ??4LevelSettings@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LevelSettings& operator=(class LevelSettings&&);

    // symbol: ?overrideSavedSettings@LevelSettings@@QEBAXAEAVLevelData@@@Z
    MCAPI void overrideSavedSettings(class LevelData& data) const;

    // symbol: ?setAdventureModeOverridesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setAdventureModeOverridesEnabled(bool);

    // symbol: ?setBaseGameVersion@LevelSettings@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class LevelSettings& setBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    // symbol: ?setChatRestrictionLevel@LevelSettings@@QEAAAEAV1@W4ChatRestrictionLevel@@@Z
    MCAPI class LevelSettings& setChatRestrictionLevel(::ChatRestrictionLevel);

    // symbol: ?setCommandsEnabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setCommandsEnabled(bool commandsEnabled);

    // symbol: ?setCustomSkinsDisabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setCustomSkinsDisabled(bool val);

    // symbol: ?setDefaultPlayerPermissions@LevelSettings@@QEAAAEAV1@W4PlayerPermissionLevel@@@Z
    MCAPI class LevelSettings& setDefaultPlayerPermissions(::PlayerPermissionLevel);

    // symbol: ?setDifficulty@LevelSettings@@QEAAAEAV1@W4Difficulty@@@Z
    MCAPI class LevelSettings& setDifficulty(::Difficulty difficulty);

    // symbol: ?setDisablePlayerInteractions@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setDisablePlayerInteractions(bool);

    // symbol: ?setEduSharedUriResource@LevelSettings@@QEAAAEAV1@AEBUEduSharedUriResource@@@Z
    MCAPI class LevelSettings& setEduSharedUriResource(struct EduSharedUriResource const&);

    // symbol: ?setEducationEditionOffer@LevelSettings@@QEAAAEAV1@W4EducationEditionOffer@@@Z
    MCAPI class LevelSettings& setEducationEditionOffer(::EducationEditionOffer offer);

    // symbol: ?setEducationFeaturesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setEducationFeaturesEnabled(bool enabled);

    // symbol:
    // ?setEducationProductID@LevelSettings@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class LevelSettings& setEducationProductID(std::string id);

    // symbol: ?setEmoteChatMuted@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setEmoteChatMuted(bool val);

    // symbol: ?setExperiments@LevelSettings@@QEAAAEAV1@AEBVExperimentStorage@@@Z
    MCAPI class LevelSettings& setExperiments(class ExperimentStorage const& experiments);

    // symbol: ?setForceGameType@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setForceGameType(bool value);

    // symbol: ?setGameRules@LevelSettings@@QEAAAEAV1@VGameRules@@@Z
    MCAPI class LevelSettings& setGameRules(class GameRules gameRules);

    // symbol: ?setGameType@LevelSettings@@QEAAAEAV1@W4GameType@@@Z
    MCAPI class LevelSettings& setGameType(::GameType gameType);

    // symbol: ?setGeneratorType@LevelSettings@@QEAAAEAV1@W4GeneratorType@@@Z
    MCAPI class LevelSettings& setGeneratorType(::GeneratorType generatorType);

    // symbol: ?setOnlySpawnV1Villagers@LevelSettings@@QEAAX_N@Z
    MCAPI void setOnlySpawnV1Villagers(bool spawnV1Villagers);

    // symbol: ?setOverrideSavedSettings@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setOverrideSavedSettings(bool overrideSaved);

    // symbol: ?setPlatformBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
    MCAPI class LevelSettings& setPlatformBroadcastIntent(::Social::GamePublishSetting platformBroadcastIntent);

    // symbol: ?setRandomSeed@LevelSettings@@QEAAAEAV1@VLevelSeed64@@@Z
    MCAPI class LevelSettings& setRandomSeed(class LevelSeed64 seed);

    // symbol: ?setServerChunkTickRange@LevelSettings@@QEAAAEAV1@I@Z
    MCAPI class LevelSettings& setServerChunkTickRange(uint serverChunkTickRange);

    // symbol: ?setSpawnSettings@LevelSettings@@QEAAAEAV1@USpawnSettings@@@Z
    MCAPI class LevelSettings& setSpawnSettings(struct SpawnSettings spawnSettings);

    // symbol: ?setTexturePackRequired@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setTexturePackRequired(bool texturePackRequired);

    // symbol: ?setUseMsaGamertagsOnly@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    // symbol: ?setXblBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
    MCAPI class LevelSettings& setXblBroadcastIntent(::Social::GamePublishSetting xblBroadcastIntent);

    // symbol: ?shouldOverrideSavedSettings@LevelSettings@@QEBA_NXZ
    MCAPI bool shouldOverrideSavedSettings() const;

    // symbol: ?useMsaGamertagsOnly@LevelSettings@@QEBA_NXZ
    MCAPI bool useMsaGamertagsOnly() const;

    // symbol: ??1LevelSettings@@QEAA@XZ
    MCAPI ~LevelSettings();

    // symbol:
    // ?parseSeedString@LevelSettings@@SA?AV?$optional@VLevelSeed64@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<class LevelSeed64> parseSeedString(std::string const&);

    // NOLINTEND
};
