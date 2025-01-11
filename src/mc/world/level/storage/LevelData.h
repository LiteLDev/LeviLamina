#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
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
class EducationEditionOfferValue;
class ExperimentStorage;
class Experiments;
class GameRules;
class GameVersion;
class HashedString;
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
class PermissionsHandler;
class SemVersion;
class WorldTemplateLevelData;
struct AdventureSettings;
struct EduSharedUriResource;
struct LevelDataValue;
struct PackIdVersion;
struct SpawnSettings;
struct Tick;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Json { class Value; }
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::AdventureSettings>                                     mAdventureSettings;
    ::ll::TypedStorage<8, 408, ::WorldTemplateLevelData>                              mWorldTemplateLevelData;
    ::ll::TypedStorage<8, 192, ::GameRules>                                           mGameRules;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>                                    mExperiments;
    ::ll::TypedStorage<4, 228, ::Abilities>                                           mDefaultAbilities;
    ::ll::TypedStorage<1, 2, ::PermissionsHandler>                                    mDefaultPermissions;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLevelName;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                                        mStorageVersion;
    ::ll::TypedStorage<8, 56, ::GameVersion>                                          mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, int>                                                     mNetworkVersion;
    ::ll::TypedStorage<8, 112, ::SemVersion>                                          mInventoryVersion;
    ::ll::TypedStorage<8, 8, ::Tick>                                                  mCurrentTick;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasSpawnPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mLimitedWorldOrigin;
    ::ll::TypedStorage<4, 4, int>                                                     mTime;
    ::ll::TypedStorage<8, 8, int64>                                                   mLastSaved;
    ::ll::TypedStorage<4, 4, uint>                                                    mServerTickRange;
    ::ll::TypedStorage<4, 4, float>                                                   mRainLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mRainTime;
    ::ll::TypedStorage<4, 4, float>                                                   mLightningLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mLightningTime;
    ::ll::TypedStorage<4, 4, int>                                                     mNetherScale;
    ::ll::TypedStorage<8, 56, ::GameVersion>                                          mLastOpenedWithVersion;
    ::ll::TypedStorage<4, 4, ::Difficulty>                                            mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                                    mForceGameType;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                                    mPlayerHasDied;
    ::ll::TypedStorage<1, 1, bool>                                                    mSpawnMobs;
    ::ll::TypedStorage<1, 1, bool>                                                    mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                          mFlatworldGeneratorOptions;
    ::ll::TypedStorage<4, 4, uint>                                                    mWorldStartCount;
    ::ll::TypedStorage<1, 1, bool>                                                    mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                                     mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>                            mEducationEditionOffer;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>>                 mCloudSaveInfo;
    ::ll::TypedStorage<1, 1, bool>                                                    mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                                    mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool>                                                    mMultiplayerGame;
    ::ll::TypedStorage<1, 1, bool>                                                    mLANBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                                    mLANBroadcast;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mXBLBroadcastMode;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mPlatformBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mPlatformBroadcastMode;
    ::ll::TypedStorage<1, 1, bool>                                                    mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mEducationProductId;
    ::ll::TypedStorage<1, 1, bool>                                                    mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                                    mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mBonusChestSpawned;
    ::ll::TypedStorage<1, 1, bool>                                                    mStartWithMapEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mMapsCenteredToOrigin;
    ::ll::TypedStorage<1, 1, bool>                                                    mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool>                                                    mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool>                                                    mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mEmoteChatMuted;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                                       mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                        mSpawnSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mBiomeOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<::GeneratorType>>                        mDataDrivenGeneratorType;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                                  mChatRestrictionLevel;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded>>>
                                                               mIsHardcoreSubscribers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelData;
    // NOLINTEND

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

    MCFOLD ::AdventureSettings& getAdventureSettings();

    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCAPI ::std::string const getBiomeOverride() const;

    MCAPI bool getBonusChestSpawned() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCFOLD ::Tick const& getCurrentTick() const;

    MCAPI bool getCustomSkinsDisabled() const;

    MCAPI ::DaylightCycle getDaylightCycle() const;

    MCFOLD ::Abilities& getDefaultAbilities();

    MCAPI ::PermissionsHandler const& getDefaultPermissions() const;

    MCFOLD ::PermissionsHandler& getDefaultPermissions();

    MCAPI ::Editor::WorldType getEditorWorldType() const;

    MCAPI ::CompoundTag const& getEduSharedUriResource() const;

    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

    MCAPI ::std::string const& getEducationProductId() const;

    MCAPI bool getEmoteChatMuted() const;

    MCAPI ::Experiments const& getExperiments() const;

    MCFOLD ::Experiments& getExperiments();

    MCAPI ::Json::Value const& getFlatWorldGeneratorOptions() const;

    MCAPI bool getForceGameType() const;

    MCAPI ::Difficulty getGameDifficulty() const;

    MCAPI ::GameRules const& getGameRules() const;

    MCFOLD ::GameRules& getGameRules();

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

    MCFOLD ::SpawnSettings const& getSpawnSettings() const;

    MCFOLD ::StorageVersion getStorageVersion() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI int getTime() const;

    MCAPI bool getUseMsaGamertagsOnly() const;

    MCAPI ::BlockPos const& getWorldCenter() const;

    MCAPI uint getWorldStartCount() const;

    MCFOLD ::PackIdVersion const& getWorldTemplateIdentity() const;

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

    MCFOLD bool isCreatedInEditor() const;

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

    MCFOLD void recordStartUp();

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

    MCFOLD void setLightningTime(int lightningTime);

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
