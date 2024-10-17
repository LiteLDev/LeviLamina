#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/world/Difficulty.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

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
    MCAPI explicit LevelData(bool isEduMode);

    MCAPI LevelData(class LevelData&& rhs);

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

    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCAPI std::unique_ptr<class CompoundTag> createTag() const;

    MCAPI void disableAchievements();

    MCAPI bool educationFeaturesEnabled() const;

    MCAPI bool getAdventureModeOverridesEnabled() const;

    MCAPI struct AdventureSettings& getAdventureSettings();

    MCAPI struct AdventureSettings const& getAdventureSettings() const;

    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    MCAPI std::string const getBiomeOverride() const;

    MCAPI bool getBonusChestSpawned() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI class CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCAPI struct Tick const& getCurrentTick() const;

    MCAPI bool getCustomSkinsDisabled() const;

    MCAPI ::DaylightCycle getDaylightCycle() const;

    MCAPI class Abilities& getDefaultAbilities();

    MCAPI class PermissionsHandler& getDefaultPermissions();

    MCAPI class PermissionsHandler const& getDefaultPermissions() const;

    MCAPI ::Editor::WorldType getEditorWorldType() const;

    MCAPI class CompoundTag const& getEduSharedUriResource() const;

    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

    MCAPI std::string const& getEducationOid() const;

    MCAPI std::string const& getEducationProductId() const;

    MCAPI bool getEmoteChatMuted() const;

    MCAPI class Experiments& getExperiments();

    MCAPI class Experiments const& getExperiments() const;

    MCAPI class Json::Value const& getFlatWorldGeneratorOptions() const;

    MCAPI bool getForceGameType() const;

    MCAPI ::Difficulty getGameDifficulty() const;

    MCAPI class GameRules& getGameRules();

    MCAPI class GameRules const& getGameRules() const;

    MCAPI ::GameType getGameType() const;

    MCAPI ::GeneratorType getGenerator() const;

    MCAPI bool const getIsSingleUseWorld() const;

    MCAPI bool getLANBroadcast() const;

    MCAPI bool getLANBroadcastIntent() const;

    MCAPI int64 getLastSaved() const;

    MCAPI std::string const& getLevelName() const;

    MCAPI float getLightningLevel() const;

    MCAPI int getLightningTime() const;

    MCAPI int getLimitedWorldDepth() const;

    MCAPI int getLimitedWorldWidth() const;

    MCAPI class CompoundTag& getLoadedPlayerTag();

    MCAPI class GameVersion const& getMinCompatibleClientVersion() const;

    MCAPI bool getMultiplayerGameIntent() const;

    MCAPI int getNetherScale() const;

    MCAPI ::NetherWorldType getNetherType() const;

    MCAPI int getNetworkVersion() const;

    MCAPI bool getOnlySpawnV1Villagers() const;

    MCAPI bool getPersonaDisabled() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    MCAPI class ContentIdentity const& getPremiumTemplateContentIdentity() const;

    MCAPI float getRainLevel() const;

    MCAPI int getRainTime() const;

    MCAPI class LevelSeed64 getSeed() const;

    MCAPI uint getServerChunkTickRange() const;

    MCAPI class BlockPos const& getSpawnPos() const;

    MCAPI struct SpawnSettings const& getSpawnSettings() const;

    MCAPI ::StorageVersion getStorageVersion() const;

    MCAPI ::GeneratorType getStoredGenerator() const;

    MCAPI void getTagData(class CompoundTag const& tag);

    MCAPI int getTime() const;

    MCAPI bool getUseMsaGamertagsOnly() const;

    MCAPI class BlockPos const& getWorldCenter() const;

    MCAPI uint getWorldStartCount() const;

    MCAPI struct PackIdVersion const& getWorldTemplateIdentity() const;

    MCAPI ::WorldVersion getWorldVersion() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    MCAPI bool hasAchievementsDisabled() const;

    MCAPI bool hasBonusChestEnabled() const;

    MCAPI bool hasCheatsEnabled() const;

    MCAPI bool hasCloudSaveInfo() const;

    MCAPI bool hasCommandsEnabled() const;

    MCAPI bool hasConfirmedPlatformLockedContent() const;

    MCAPI bool hasLockedBehaviorPack() const;

    MCAPI bool hasLockedResourcePack() const;

    MCAPI bool hasMapsCenteredToOrigin() const;

    MCAPI bool hasStartWithMapEnabled() const;

    MCAPI void incrementTick();

    MCAPI bool isAlwaysDay() const;

    MCAPI bool isCreatedInEditor() const;

    MCAPI bool isEditorWorld() const;

    MCAPI bool isEducationEditionLevel() const;

    MCAPI bool isExportedFromEditor() const;

    MCAPI bool isFromLockedTemplate() const;

    MCAPI bool isFromWorldTemplate() const;

    MCAPI bool isHardcore() const;

    MCAPI bool isLegacyLevel() const;

    MCAPI bool isLightning() const;

    MCAPI bool isMultiplayerGame() const;

    MCAPI bool isPremiumWorldTemplate() const;

    MCAPI bool isRaining() const;

    MCAPI bool isTexturepacksRequired() const;

    MCAPI bool isWorldTemplateOptionLocked() const;

    MCAPI class LevelData& operator=(class LevelData&& rhs);

    MCAPI void recordStartUp();

    MCAPI void setAdventureModeOverridesEnabled(bool overridesEnabled);

    MCAPI void setBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    MCAPI void setBonusChestSpawned(bool bonusChestSpawned);

    MCAPI void setChatRestrictionLevel(::ChatRestrictionLevel chatRestrictionLevel);

    MCAPI void setCommandsEnabled(bool commandsEnabled);

    MCAPI void setCustomSkinsDisabled(bool val);

    MCAPI void setDataDrivenGenerator(::GeneratorType type);

    MCAPI void setEduSharedUriResource(struct EduSharedUriResource const& eduSharedUriResource);

    MCAPI void setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI void setEducationFeaturesEnabled(bool educationEnabled);

    MCAPI void setEducationOid(std::string const& educationOid);

    MCAPI void setEmoteChatMuted(bool val);

    MCAPI void setForceGameType(bool value);

    MCAPI void setGameDifficulty(::Difficulty difficulty);

    MCAPI void setGameType(::GameType type);

    MCAPI void setGenerator(::GeneratorType version);

    MCAPI void setHasLockedBehaviorPack(bool hasLockedPack);

    MCAPI void setHasLockedResourcePack(bool hasLockedPack);

    MCAPI void setIsHardcore(bool value);

    MCAPI void setLANBroadcast(bool broadcast);

    MCAPI void setLANBroadcastIntent(bool broadcast);

    MCAPI void setLevelName(std::string const& levelName);

    MCAPI void setLightningLevel(float level);

    MCAPI void setLightningTime(int lightningTime);

    MCAPI void setMultiplayerGame(bool multiplayer);

    MCAPI void setMultiplayerGameIntent(bool multiplayer);

    MCAPI void setOnlySpawnV1Villagers(bool val);

    MCAPI void setPersonaDisabled(bool val);

    MCAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI void setRainLevel(float level);

    MCAPI void setRainTime(int rainTime);

    MCAPI void setSeed(class LevelSeed64 seed);

    MCAPI void setServerChunkTickRange(uint newRange);

    MCAPI void setSpawnPos(class BlockPos const& spawn);

    MCAPI void setStorageVersion(::StorageVersion version);

    MCAPI void setTagData(class CompoundTag& tag) const;

    MCAPI void setTexturepacksRequired(bool texturepacksRequired);

    MCAPI void setTime(int time);

    MCAPI void setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const& packIdVersion);

    MCAPI void setWorldTemplateOptionLocked(bool isLocked);

    MCAPI void setWorldVersion(::WorldVersion version);

    MCAPI void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI void touchLastLoadedWithVersion();

    MCAPI void v1_read(class RakNet::BitStream& bitStream, ::StorageVersion storageVersion);

    MCAPI ~LevelData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setValue(class HashedString const& key, struct LevelDataValue&& value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class LevelSettings const& settings,
        std::string const&         levelName,
        ::GeneratorType            generatorVersion,
        class BlockPos const&      defaultSpawn,
        bool                       achievementsDisabled,
        ::EducationEditionOffer    eduOffer,
        float                      rainLevel,
        float                      lightningLevel
    );

    MCAPI void* ctor$(class LevelData&& rhs);

    MCAPI void* ctor$(bool isEduMode);

    MCAPI void dtor$();

    // NOLINTEND
};
