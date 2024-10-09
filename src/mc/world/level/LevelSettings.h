#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/EducationLevelSettings.h"
#include "mc/world/level/ForceBlockNetworkIdsAreHashes.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/Difficulty.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/WorldVersion.h"

struct PackInstanceId;

class LevelSettings {
public:
    uchar filler[0x540]; // serialize<LevelSettings>::read line=1256

    // prevent constructor by default
    LevelSettings& operator=(LevelSettings const&);

public:
    // NOLINTBEGIN
    MCAPI std::string const& GetScenarioId() const;

    MCAPI std::string const& GetServerId() const;

    MCAPI std::string const& GetWorldId() const;

    MCAPI LevelSettings();

    MCAPI LevelSettings(class LevelSettings&&);

    MCAPI LevelSettings(class LevelSettings const&);

    MCAPI LevelSettings(class LevelData const& data, DimensionType dimension);

    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCAPI bool educationFeaturesEnabled() const;

    MCAPI std::string const& educationProductID() const;

    MCAPI bool forceGameType() const;

    MCAPI bool getAdventureModeOverridesEnabled() const;

    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    MCAPI std::string const& getBiomeOverride() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI class CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCAPI bool getCustomSkinsDisabled() const;

    MCAPI ::DaylightCycle getDaylightCycle() const;

    MCAPI class PermissionsHandler const& getDefaultPermissions() const;

    MCAPI class BlockPos const& getDefaultSpawn() const;

    MCAPI bool getDisablePlayerInteractions() const;

    MCAPI ::Editor::WorldType getEditorWorldType() const;

    MCAPI struct EduSharedUriResource const& getEduSharedUriResource() const;

    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

    MCAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    MCAPI bool getEmoteChatMuted() const;

    MCAPI std::vector<std::string> const& getExcludedScriptModules() const;

    MCAPI class Experiments const& getExperiments() const;

    MCAPI ::Difficulty getGameDifficulty() const;

    MCAPI class GameRules const& getGameRules() const;

    MCAPI ::GameType getGameType() const;

    MCAPI ::GeneratorType getGenerator() const;

    MCAPI bool getImmutableWorld() const;

    MCAPI bool getLanBroadcastIntent() const;

    MCAPI float getLightningLevel() const;

    MCAPI int getLimitedWorldDepth() const;

    MCAPI int getLimitedWorldWidth() const;

    MCAPI bool getMultiplayerGameIntent() const;

    MCAPI ::NetherWorldType getNetherType() const;

    MCAPI bool getOnlySpawnV1Villagers() const;

    MCAPI bool getPersonaDisabled() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCAPI float getRainLevel() const;

    MCAPI class LevelSeed64 getSeed() const;

    MCAPI uint getServerChunkTickRange() const;

    MCAPI struct SpawnSettings getSpawnSettings() const;

    MCAPI int getTime() const;

    MCAPI ::WorldVersion getWorldVersion() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCAPI bool hasAchievementsDisabled() const;

    MCAPI bool hasBonusChestEnabled() const;

    MCAPI bool hasCheatsEnabled() const;

    MCAPI bool hasCommandsEnabled() const;

    MCAPI bool hasConfirmedPlatformLockedContent() const;

    MCAPI bool hasLockedBehaviorPack() const;

    MCAPI bool hasLockedResourcePack() const;

    MCAPI bool hasStartWithMapEnabled() const;

    MCAPI bool isCreatedInEditor() const;

    MCAPI bool isEditorWorld() const;

    MCAPI bool isExportedFromEditor() const;

    MCAPI bool isFromLockedTemplate() const;

    MCAPI bool isFromWorldTemplate() const;

    MCAPI bool isHardcore() const;

    MCAPI bool isRandomSeedAllowed() const;

    MCAPI bool isTexturepacksRequired() const;

    MCAPI bool isWorldTemplateOptionLocked() const;

    MCAPI class LevelSettings& operator=(class LevelSettings&&);

    MCAPI void overrideSavedSettings(class LevelData& data) const;

    MCAPI class LevelSettings& setAdventureModeOverridesEnabled(bool adventureModeOverridesEnabled);

    MCAPI class LevelSettings& setBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    MCAPI class LevelSettings& setChatRestrictionLevel(::ChatRestrictionLevel chatRestrictionLevel);

    MCAPI class LevelSettings& setCommandsEnabled(bool commandsEnabled);

    MCAPI class LevelSettings& setCustomSkinsDisabled(bool val);

    MCAPI class LevelSettings& setDefaultPlayerPermissions(::PlayerPermissionLevel playerPermissionLevel);

    MCAPI class LevelSettings& setDifficulty(::Difficulty difficulty);

    MCAPI class LevelSettings& setDisablePlayerInteractions(bool disableInteractions);

    MCAPI class LevelSettings& setEduSharedUriResource(struct EduSharedUriResource const& eduSharedUriResource);

    MCAPI class LevelSettings& setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI class LevelSettings& setEducationFeaturesEnabled(bool enabled);

    MCAPI class LevelSettings& setEducationProductID(std::string id);

    MCAPI class LevelSettings& setEmoteChatMuted(bool val);

    MCAPI class LevelSettings& setExperiments(class ExperimentStorage const& experiments);

    MCAPI class LevelSettings& setForceGameType(bool value);

    MCAPI class LevelSettings& setGameRules(class GameRules gameRules);

    MCAPI class LevelSettings& setGameType(::GameType gameType);

    MCAPI class LevelSettings& setGeneratorType(::GeneratorType generatorType);

    MCAPI void setOnlySpawnV1Villagers(bool spawnV1Villagers);

    MCAPI class LevelSettings& setOverrideSavedSettings(bool overrideSaved);

    MCAPI class LevelSettings& setPlatformBroadcastIntent(::Social::GamePublishSetting platformBroadcastIntent);

    MCAPI class LevelSettings& setRandomSeed(class LevelSeed64 seed);

    MCAPI class LevelSettings& setScenarioId(std::string scenarioId);

    MCAPI class LevelSettings& setServerChunkTickRange(uint serverChunkTickRange);

    MCAPI class LevelSettings& setServerId(std::string serverId);

    MCAPI class LevelSettings& setSpawnSettings(struct SpawnSettings spawnSettings);

    MCAPI class LevelSettings& setTexturePackRequired(bool texturePackRequired);

    MCAPI class LevelSettings& setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    MCAPI class LevelSettings& setWorldId(std::string worldId);

    MCAPI class LevelSettings& setXblBroadcastIntent(::Social::GamePublishSetting xblBroadcastIntent);

    MCAPI bool shouldOverrideSavedSettings() const;

    MCAPI bool useMsaGamertagsOnly() const;

    MCAPI ~LevelSettings();

    MCAPI static std::optional<class LevelSeed64> parseSeedString(std::string const& seedInput);

    // NOLINTEND
};
