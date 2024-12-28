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
class Abilities;
class BaseGameVersion;
class BlockPos;
class CloudSaveLevelInfo;
class CompoundTag;
class ContentIdentity;
class Experiments;
class GameRules;
class HashedString;
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
class PermissionsHandler;
class SemVersion;
struct AdventureSettings;
struct EduSharedUriResource;
struct LevelDataValue;
struct PackIdVersion;
struct SpawnSettings;
struct Tick;
namespace Json { class Value; }
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 5>   mUnk3869a7;
    ::ll::UntypedStorage<8, 408> mUnk8932cd;
    ::ll::UntypedStorage<8, 192> mUnke17dd2;
    ::ll::UntypedStorage<8, 72>  mUnkef417a;
    ::ll::UntypedStorage<4, 228> mUnk501975;
    ::ll::UntypedStorage<1, 2>   mUnkeb9a04;
    ::ll::UntypedStorage<8, 32>  mUnk522209;
    ::ll::UntypedStorage<4, 4>   mUnkc388c0;
    ::ll::UntypedStorage<8, 56>  mUnk130ded;
    ::ll::UntypedStorage<4, 4>   mUnkcf7b76;
    ::ll::UntypedStorage<8, 112> mUnk9463e1;
    ::ll::UntypedStorage<8, 8>   mUnkc3e8ef;
    ::ll::UntypedStorage<1, 1>   mUnkcde2e5;
    ::ll::UntypedStorage<4, 12>  mUnk8055f2;
    ::ll::UntypedStorage<4, 4>   mUnke171f7;
    ::ll::UntypedStorage<8, 8>   mUnk2ca67d;
    ::ll::UntypedStorage<4, 4>   mUnkbb5b63;
    ::ll::UntypedStorage<4, 4>   mUnkdfb31f;
    ::ll::UntypedStorage<4, 4>   mUnk71d22e;
    ::ll::UntypedStorage<4, 4>   mUnkfe3e1d;
    ::ll::UntypedStorage<4, 4>   mUnkcee1a2;
    ::ll::UntypedStorage<4, 4>   mUnkabc0e0;
    ::ll::UntypedStorage<8, 56>  mUnk606fd9;
    ::ll::UntypedStorage<4, 4>   mUnk571ae5;
    ::ll::UntypedStorage<1, 1>   mUnk384a39;
    ::ll::UntypedStorage<1, 1>   mUnk4f1d12;
    ::ll::UntypedStorage<1, 1>   mUnk99e5ec;
    ::ll::UntypedStorage<1, 1>   mUnkfe4902;
    ::ll::UntypedStorage<1, 1>   mUnkec87c9;
    ::ll::UntypedStorage<8, 16>  mUnk62bd85;
    ::ll::UntypedStorage<4, 4>   mUnkd400d4;
    ::ll::UntypedStorage<1, 1>   mUnk97cb66;
    ::ll::UntypedStorage<4, 4>   mUnk75b3ad;
    ::ll::UntypedStorage<1, 1>   mUnkaa4f80;
    ::ll::UntypedStorage<1, 1>   mUnk4a5e75;
    ::ll::UntypedStorage<4, 4>   mUnkd0854f;
    ::ll::UntypedStorage<8, 176> mUnk7e3e6f;
    ::ll::UntypedStorage<1, 1>   mUnka79eb7;
    ::ll::UntypedStorage<1, 1>   mUnk49d6d3;
    ::ll::UntypedStorage<1, 1>   mUnk3edace;
    ::ll::UntypedStorage<1, 1>   mUnk951220;
    ::ll::UntypedStorage<1, 1>   mUnka5b54c;
    ::ll::UntypedStorage<1, 1>   mUnk95ba70;
    ::ll::UntypedStorage<1, 1>   mUnk6a378a;
    ::ll::UntypedStorage<4, 4>   mUnk6f9d7d;
    ::ll::UntypedStorage<4, 4>   mUnkaf2740;
    ::ll::UntypedStorage<4, 4>   mUnk1ae6b3;
    ::ll::UntypedStorage<4, 4>   mUnkc425f1;
    ::ll::UntypedStorage<1, 1>   mUnk62f005;
    ::ll::UntypedStorage<1, 1>   mUnk4e5f4e;
    ::ll::UntypedStorage<1, 1>   mUnkbcd71c;
    ::ll::UntypedStorage<1, 1>   mUnk42cc17;
    ::ll::UntypedStorage<1, 1>   mUnk142780;
    ::ll::UntypedStorage<1, 1>   mUnk32b4c4;
    ::ll::UntypedStorage<1, 1>   mUnk652297;
    ::ll::UntypedStorage<8, 32>  mUnkc13207;
    ::ll::UntypedStorage<1, 1>   mUnkfa06de;
    ::ll::UntypedStorage<1, 1>   mUnke79e01;
    ::ll::UntypedStorage<1, 1>   mUnk1db81c;
    ::ll::UntypedStorage<1, 1>   mUnk8b5ba8;
    ::ll::UntypedStorage<1, 1>   mUnk9452cb;
    ::ll::UntypedStorage<1, 1>   mUnkb1d0ee;
    ::ll::UntypedStorage<1, 1>   mUnk2c59c0;
    ::ll::UntypedStorage<1, 1>   mUnkc1f652;
    ::ll::UntypedStorage<1, 1>   mUnk9adf2f;
    ::ll::UntypedStorage<1, 1>   mUnk770d22;
    ::ll::UntypedStorage<1, 1>   mUnka7a691;
    ::ll::UntypedStorage<1, 1>   mUnkb2b714;
    ::ll::UntypedStorage<8, 48>  mUnk425bba;
    ::ll::UntypedStorage<8, 64>  mUnk6a5aee;
    ::ll::UntypedStorage<8, 64>  mUnkf37e74;
    ::ll::UntypedStorage<8, 32>  mUnk730497;
    ::ll::UntypedStorage<4, 8>   mUnk386804;
    ::ll::UntypedStorage<1, 1>   mUnka7d96a;
    ::ll::UntypedStorage<8, 8>   mUnk5f51f6;
    ::ll::UntypedStorage<8, 16>  mUnk184ea7;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
    LevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelData(::LevelData&&);

    MCAPI explicit LevelData(bool isEduMode);

    MCAPI LevelData(
        ::LevelSettings const&  settings,
        ::std::string const&    levelName,
        ::GeneratorType         generatorVersion,
        ::BlockPos const&       defaultSpawn,
        bool                    achievementsDisabled,
        ::EducationEditionOffer eduOffer,
        float                   rainLevel,
        float                   lightningLevel
    );

    MCAPI void _determineMaxBaseGameVersion();

    MCAPI ::LevelDataValue const* _getValue(::HashedString const& key) const;

    MCAPI void _setValue(::HashedString const& key, ::LevelDataValue&& value);

    MCAPI void _updateLimitedWorldOrigin(::BlockPos const& pos);

    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    MCAPI void changeGameDifficulty(::Difficulty newDifficulty);

    MCAPI bool checkHasOptedOutOfServerAuth() const;

    MCAPI ::std::optional<::SemVersion> checkServerAuthOptOutVersion() const;

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCAPI ::std::unique_ptr<::CompoundTag> createTag() const;

    MCAPI void disableAchievements();

    MCAPI bool educationFeaturesEnabled() const;

    MCAPI bool getAdventureModeOverridesEnabled() const;

    MCAPI ::AdventureSettings const& getAdventureSettings() const;

    MCAPI ::AdventureSettings& getAdventureSettings();

    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCAPI ::std::string const getBiomeOverride() const;

    MCAPI bool getBonusChestSpawned() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCAPI ::Tick const& getCurrentTick() const;

    MCAPI bool getCustomSkinsDisabled() const;

    MCAPI ::DaylightCycle getDaylightCycle() const;

    MCAPI ::Abilities& getDefaultAbilities();

    MCAPI ::PermissionsHandler const& getDefaultPermissions() const;

    MCAPI ::PermissionsHandler& getDefaultPermissions();

    MCAPI ::Editor::WorldType getEditorWorldType() const;

    MCAPI ::CompoundTag const& getEduSharedUriResource() const;

    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

    MCAPI ::std::string const& getEducationProductId() const;

    MCAPI bool getEmoteChatMuted() const;

    MCAPI ::Experiments const& getExperiments() const;

    MCAPI ::Experiments& getExperiments();

    MCAPI ::Json::Value const& getFlatWorldGeneratorOptions() const;

    MCAPI bool getForceGameType() const;

    MCAPI ::Difficulty getGameDifficulty() const;

    MCAPI ::GameRules const& getGameRules() const;

    MCAPI ::GameRules& getGameRules();

    MCAPI ::GameType getGameType() const;

    MCAPI ::GeneratorType getGenerator() const;

    MCAPI bool getLANBroadcast() const;

    MCAPI bool getLANBroadcastIntent() const;

    MCAPI ::std::string const& getLevelName() const;

    MCAPI float getLightningLevel() const;

    MCAPI int getLightningTime() const;

    MCAPI int getLimitedWorldDepth() const;

    MCAPI int getLimitedWorldWidth() const;

    MCAPI ::CompoundTag& getLoadedPlayerTag();

    MCAPI bool getMultiplayerGameIntent() const;

    MCAPI int getNetherScale() const;

    MCAPI ::NetherWorldType getNetherType() const;

    MCAPI bool getOnlySpawnV1Villagers() const;

    MCAPI bool getPersonaDisabled() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    MCAPI ::ContentIdentity const& getPremiumTemplateContentIdentity() const;

    MCAPI float getRainLevel() const;

    MCAPI int getRainTime() const;

    MCAPI ::LevelSeed64 getSeed() const;

    MCAPI uint getServerChunkTickRange() const;

    MCAPI ::BlockPos const& getSpawnPos() const;

    MCAPI ::SpawnSettings const& getSpawnSettings() const;

    MCAPI ::StorageVersion getStorageVersion() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI int getTime() const;

    MCAPI bool getUseMsaGamertagsOnly() const;

    MCAPI ::BlockPos const& getWorldCenter() const;

    MCAPI uint getWorldStartCount() const;

    MCAPI ::PackIdVersion const& getWorldTemplateIdentity() const;

    MCAPI ::WorldVersion getWorldVersion() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    MCAPI bool hasAchievementsDisabled() const;

    MCAPI bool hasBonusChestEnabled() const;

    MCAPI bool hasCheatsEnabled() const;

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

    MCAPI void recordStartUp();

    MCAPI void registerWithLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void setAdventureModeOverridesEnabled(bool overridesEnabled);

    MCAPI void setBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI void setBonusChestEnabled(bool bonusChestEnabled);

    MCAPI void setBonusChestSpawned(bool bonusChestSpawned);

    MCAPI void setChatRestrictionLevel(::ChatRestrictionLevel chatRestrictionLevel);

    MCAPI void setCheatsEnabled(bool cheatsEnabled);

    MCAPI void setCommandsEnabled(bool commandsEnabled);

    MCAPI void setCustomSkinsDisabled(bool val);

    MCAPI void setDataDrivenGenerator(::GeneratorType type);

    MCAPI void setDaylightCycle(::DaylightCycle daylightCycle);

    MCAPI void setEditorWorldType(::Editor::WorldType t);

    MCAPI void setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);

    MCAPI void setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI void setEducationFeaturesEnabled(bool educationEnabled);

    MCAPI void setEducationOid(::std::string const& educationOid);

    MCAPI void setEmoteChatMuted(bool val);

    MCAPI void setForceGameType(bool value);

    MCAPI void setGameType(::GameType type);

    MCAPI void setGenerator(::GeneratorType version);

    MCAPI void setHasLockedBehaviorPack(bool hasLockedPack);

    MCAPI void setHasLockedResourcePack(bool hasLockedPack);

    MCAPI void setHasOptedOutOfServerAuth(bool optedOut);

    MCAPI void setIsCreatedInEditor(bool isCreatedInEditor);

    MCAPI void setIsExportedFromEditor(bool isExportedFromEditor);

    MCAPI void setIsHardcore(bool value);

    MCAPI void setIsSingleUseWorld(bool isSingleUseWorld);

    MCAPI void setLANBroadcast(bool broadcast);

    MCAPI void setLANBroadcastIntent(bool broadcast);

    MCAPI void setLevelName(::std::string const& levelName);

    MCAPI void setLightningLevel(float level);

    MCAPI void setLightningTime(int lightningTime);

    MCAPI void setMultiplayerGame(bool multiplayer);

    MCAPI void setMultiplayerGameIntent(bool multiplayer);

    MCAPI void setOnlySpawnV1Villagers(bool val);

    MCAPI void setPersonaDisabled(bool val);

    MCAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlayerHasDied(bool value);

    MCAPI void setRainLevel(float level);

    MCAPI void setRainTime(int rainTime);

    MCAPI void setSeed(::LevelSeed64 seed);

    MCAPI void setServerChunkTickRange(uint newRange);

    MCAPI void setSpawnPos(::BlockPos const& spawn);

    MCAPI void setSpawnSettings(::SpawnSettings const& settings);

    MCAPI void setStartWithMapEnabled(bool startWithMapEnabled);

    MCAPI void setStorageVersion(::StorageVersion version);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI void setTexturepacksRequired(bool texturepacksRequired);

    MCAPI void setTime(int time);

    MCAPI void setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    MCAPI void setWorldTemplateIdentity(::PackIdVersion const& packIdVersion);

    MCAPI void setWorldTemplateOptionLocked(bool isLocked);

    MCAPI void setWorldVersion(::WorldVersion version);

    MCAPI void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI void touchLastLoadedWithVersion();

    MCAPI void v1_read(::RakNet::BitStream& bitStream, ::StorageVersion storageVersion);

    MCAPI ~LevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelData&&);

    MCAPI void* $ctor(bool isEduMode);

    MCAPI void* $ctor(
        ::LevelSettings const&  settings,
        ::std::string const&    levelName,
        ::GeneratorType         generatorVersion,
        ::BlockPos const&       defaultSpawn,
        bool                    achievementsDisabled,
        ::EducationEditionOffer eduOffer,
        float                   rainLevel,
        float                   lightningLevel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
